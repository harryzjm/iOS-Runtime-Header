//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OpusKit/NSObject-Protocol.h>

@class AVAsset;

@protocol OKAudioPlaylistDelegate <NSObject>
- (void)audioFinishedPlayingWithAVAsset:(AVAsset *)arg1;
- (void)audioStartedPlayingWithAVAsset:(AVAsset *)arg1;
@end

