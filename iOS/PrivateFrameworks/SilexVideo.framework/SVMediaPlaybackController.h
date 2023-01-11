//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayer, NSMapTable;

@interface SVMediaPlaybackController : NSObject
{
    NSMapTable *_timeControlStatusObservers;
    AVPlayer *_currentlyPlaying;
}

- (void).cxx_destruct;
@property(nonatomic) __weak AVPlayer *currentlyPlaying; // @synthesize currentlyPlaying=_currentlyPlaying;
@property(readonly, nonatomic) NSMapTable *timeControlStatusObservers; // @synthesize timeControlStatusObservers=_timeControlStatusObservers;
- (void)unregisterPlayer:(id)arg1;
- (void)registerPlayer:(id)arg1;
- (void)updateCurrentlyPlaying:(id)arg1;
- (id)init;

@end
