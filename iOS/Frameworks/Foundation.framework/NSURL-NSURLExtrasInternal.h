//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (NSURLExtrasInternal)
+ (id)_URLWithData:(id)arg1 relativeToURL:(id)arg2;
+ (id)_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;
- (id)_hostString;
- (id)_URLByEscapingSpacesAndControlChars;
- (id)_web_URLByRemovingUserAndQueryAndFragment_nowarn;
- (id)_web_URLByRemovingUserAndPath_nowarn;
- (id)_web_URLByRemovingLastPathComponent_nowarn;
@end
