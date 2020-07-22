//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MusicCarDisplayUI/NSObject-Protocol.h>

@class MCDPlayableContentPlaybackManager, UIViewController;

@protocol MCDPlayableContentQueueManagerDelegate <NSObject>
- (void)contentManagerCompletedAllPlayback:(MCDPlayableContentPlaybackManager *)arg1;
- (void)contentManager:(MCDPlayableContentPlaybackManager *)arg1 presentViewController:(UIViewController *)arg2;
- (void)contentManagerReloadData:(MCDPlayableContentPlaybackManager *)arg1;
- (void)contentManagerInitiatedPlaybackFromPlaybackQueue:(MCDPlayableContentPlaybackManager *)arg1;
- (void)contentManager:(MCDPlayableContentPlaybackManager *)arg1 displayItemIndex:(long long)arg2 totalItemCount:(long long)arg3;
- (void)contentManager:(MCDPlayableContentPlaybackManager *)arg1 shouldShowPlaybackQueue:(_Bool)arg2;
@end

