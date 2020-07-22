//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosExtras/NSObject-Protocol.h>

@class MPPlaybackContext, NSArray;

@protocol VideosExtrasPlaybackDelegate <NSObject>
- (void)extrasRequestReloadWithContext:(MPPlaybackContext *)arg1;
- (void)extrasRequestsPlaybackStop;
- (void)extrasRequestsMediaPlayback:(NSArray *)arg1 isBackground:(_Bool)arg2;
@end

