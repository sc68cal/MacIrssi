/*
 MIChannelSearchController.m
 Copyright (c) 2010 Matt Wright.
 
 MacIrssi is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 2 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#import "MIChannelSearchController.h"
#import "ChannelController.h"

@interface MIChannelSearchController ()

- (void)makeSearchBarVisibleAndKey;
- (void)clearResultsAndSearchWithTerm:(NSString*)term;
- (void)jumpToNextResultInDirection:(MISearchDirection)direction;

@end


@implementation MIChannelSearchController

- (id)initWithController:(ChannelController*)aController
{
  if (self = [super init])
  {
    matches = [[NSMutableArray alloc] init];
    currentMatch = -1;
    currentSearchTerm = nil;
    controller = aController;
  }
  return self;
}

- (void)dealloc
{
  [super dealloc];
}

- (BOOL)canPerformFindForTag:(int)tag
{
  switch (tag)
  {
    case 1: // "Find.."
      return YES;
    case 2: // "Find Next"
    case 3: // "Find Previous"
      return ([matches count] != 0);
    case 7: // "Use Selection for Find"
      return (controller && ([[controller textView] selectedRange].length > 0));
    default:
      return NO;
  }
}

- (void)performFind:(id)sender
{
  switch ([sender tag])
  {
    case 1:
      [self makeSearchBarVisibleAndKey];
      break;
    case 2:
      [self jumpToNextResultInDirection:MISearchNextDirection];
      break;
    case 3:
      [self jumpToNextResultInDirection:MISearchPreviousDirection];
      break;
    case 7:
    {
      NSString *term = [[[controller textView] string] substringWithRange:[[controller textView] selectedRange]];
      [self clearResultsAndSearchWithTerm:term];
      [self makeSearchBarVisibleAndKey];
      [self jumpToNextResultInDirection:MISearchNextDirection];
      break;
    }
    default:
      return;
  }
}

- (void)makeSearchBarVisibleAndKey
{
  [controller setSearchBarVisible:YES];
}

- (void)clearResultsAndSearchWithTerm:(NSString*)term
{
  [matches removeAllObjects];
  currentMatch = -1;

  [currentSearchTerm autorelease];
  currentSearchTerm = nil;
  
  if (![term isEqual:@""])
  {
    currentSearchTerm = [term copy];
    
    NSString *text = [[controller textView] string];
    NSRange range = NSMakeRange(0, [text length]);
    
    while (range.location + range.length <= [text length])
    {
      NSRange found = [text rangeOfString:term options:NSCaseInsensitiveSearch range:range];
      if (found.location != NSNotFound)
      {
        NSValue *loc = [NSValue valueWithRange:found];
        [matches addObject:loc];
        range.location = found.location + found.length;
        range.length = [text length] - range.location;
      }
      else
      {
        break;
      }
    }
  }
}

- (void)jumpToNextResultInDirection:(MISearchDirection)direction
{
  if ([matches count] == 0)
  {
    /* Just make sure we can't do this */
    return;
  }
  
  if (currentMatch == -1)
  {
    currentMatch = (direction == MISearchNextDirection ? 0 : [matches count] - 1);
  }
  else if (direction == MISearchNextDirection)
  {
    currentMatch = (currentMatch+1) % [matches count];
  }
  else if ((direction == MISearchPreviousDirection) && (currentMatch == 0))
  {
    currentMatch = ([matches count] - 1);
  }
  else
  {
    currentMatch = (currentMatch-1) % [matches count];
  }

  NSValue *val = [matches objectAtIndex:currentMatch];
  NSRange range = [val rangeValue];
  
  if (range.location != NSNotFound)
  {
    [[controller textView] scrollRangeToVisible:range];
    [[controller textView] showFindIndicatorForRange:range];
  }
}

- (NSString*)searchBarWantsExistingSearchTerm:(MISearchBar*)bar
{
  return currentSearchTerm;
}

- (void)searchBar:(MISearchBar*)bar findInDirection:(MISearchDirection)direction withString:(NSString*)term
{
  if (![term isEqual:currentSearchTerm])
  {
    [self clearResultsAndSearchWithTerm:term];
  }
  [self jumpToNextResultInDirection:direction];
}

- (NSInteger)searchBar:(MISearchBar *)bar numberOfMatchesWithString:(NSString*)term
{
  if (![term isEqual:currentSearchTerm])
  {
    /* Reset the search and re-search the text view */
    [self clearResultsAndSearchWithTerm:term];
  }
  return [matches count];
}

- (void)searchBarShouldCancel:(MISearchBar*)bar
{
  [controller setSearchBarVisible:NO];
}

@end
