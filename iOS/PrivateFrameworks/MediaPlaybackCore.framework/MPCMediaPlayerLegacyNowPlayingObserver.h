//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPNowPlayingObserver.h>

@class MPCMediaPlayerLegacyPlayer;

@interface MPCMediaPlayerLegacyNowPlayingObserver : MPNowPlayingObserver
{
    MPCMediaPlayerLegacyPlayer *_mpcPlayer;
}

@property(nonatomic) __weak MPCMediaPlayerLegacyPlayer *mpcPlayer; // @synthesize mpcPlayer=_mpcPlayer;
- (void).cxx_destruct;
- (void)_createNowPlayingInfoForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
