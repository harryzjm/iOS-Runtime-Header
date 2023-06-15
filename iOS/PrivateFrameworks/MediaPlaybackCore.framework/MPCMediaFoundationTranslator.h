//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerPlaybackCoordinator, MPCPlaybackEngine, NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface MPCMediaFoundationTranslator : NSObject
{
    MPCPlaybackEngine *_playbackEngine;
    AVPlayerPlaybackCoordinator *_playbackCoordinator;
    NSMapTable *_mapping;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSMapTable *mapping; // @synthesize mapping=_mapping;
@property(readonly, nonatomic) AVPlayerPlaybackCoordinator *playbackCoordinator; // @synthesize playbackCoordinator=_playbackCoordinator;
@property(nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (id)_MPAVItemForContentItemID:(id)arg1 allowReuse:(_Bool)arg2;
- (void)updatePlayerPlaybackCoordinator:(id)arg1;
- (_Bool)canSkipInDirection:(long long)arg1 fromItem:(id)arg2;
- (id)itemToFollowItem:(id)arg1 direction:(long long)arg2 distance:(long long)arg3 reason:(long long)arg4;
- (id)queueItemForPlayerItem:(id)arg1 allowReuse:(_Bool)arg2;
- (void)invalidateCache;
- (void)invalidateCacheWithContentItemID:(id)arg1;
- (id)queueItemForContentItemID:(id)arg1 allowReuse:(_Bool)arg2 error:(id *)arg3;
- (id)contentItemIDsFromOffset:(long long)arg1 toOffset:(long long)arg2 nowPlayingIndex:(long long *)arg3;
@property(readonly, copy, nonatomic) NSString *targetContentItemID;
- (void)setMPAVItem:(id)arg1 forMFPlayerItem:(id)arg2;
- (id)MPAVItemForMFPlayerItem:(id)arg1;
- (id)initWithPlaybackEngine:(id)arg1;

@end

