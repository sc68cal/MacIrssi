//
//  WeirdCrap.m
//  MacIrssi
//
//  Created by Lucas Jenß on 05/02/14.
//
//

#import "WeirdCrap.h"
#import "MyBrowser.h"
#import "MyTabContents.h"

#import <ChromiumTabs/ChromiumTabs.h>

@implementation WeirdCrap

+(void) doStuff {
  CTBrowserWindowController* windowController =
  [[CTBrowserWindowController alloc] initWithBrowser:[MyBrowser browser]];
  [windowController.browser addBlankTabInForeground:YES];
  [windowController showWindow:self];
}

@end
