//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/AVPlayerItemOutputPushDelegate-Protocol.h>

@class AVPlayerItemMetadataOutput, AVPlayerItemTrack, NSArray;

@protocol AVPlayerItemMetadataOutputPushDelegate <AVPlayerItemOutputPushDelegate>

@optional
- (void)metadataOutput:(AVPlayerItemMetadataOutput *)arg1 didOutputTimedMetadataGroups:(NSArray *)arg2 fromPlayerItemTrack:(AVPlayerItemTrack *)arg3;
@end
