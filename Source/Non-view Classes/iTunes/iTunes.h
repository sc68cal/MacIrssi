/*
 iTunes.h
 Copyright (c) 2008, 2009 Matt Wright.
 
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

#import <Cocoa/Cocoa.h>
#import <ScriptingBridge/ScriptingBridge.h>
#import "iTunesBridge.h"

@interface iTunes : NSObject {
  iTunesApplication *iTunesBridge;
}

- (id)init;
- (void)dealloc;

- (BOOL)isRunning;
- (BOOL)isPlaying;

- (NSString*)currentTitle;
- (NSString*)currentArtist;
- (NSString*)currentAlbum;

@end
