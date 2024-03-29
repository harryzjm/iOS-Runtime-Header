//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayer;

__attribute__((visibility("hidden")))
@interface VideoKVOHelper : NSObject
{
    AVPlayer *_player;
    CDUnknownBlockType _playerItemBlock;
    CDUnknownBlockType _playerBlock;
    id _timeObserver;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id timeObserver; // @synthesize timeObserver=_timeObserver;
@property(copy, nonatomic) CDUnknownBlockType playerBlock; // @synthesize playerBlock=_playerBlock;
@property(copy, nonatomic) CDUnknownBlockType playerItemBlock; // @synthesize playerItemBlock=_playerItemBlock;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)addAVPlayerRateObserverWithBlock:(CDUnknownBlockType)arg1;
- (void)addAVPlayerItemObserverWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithPlayer:(id)arg1;

@end

