//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PTEffectReaction;

__attribute__((visibility("hidden")))
@interface PTPersonReactionSlot : NSObject
{
    unsigned int _activeGestureType;
    unsigned int _latestGestureType;
    float _milliSecondsToStart;
    float _milliSecondsToStop;
    PTEffectReaction *_reaction;
    CDStruct_1b6d18a9 _activeGestureLastSeenTime;
    CDStruct_1b6d18a9 _latestGestureFirstSeenTime;
}

- (void).cxx_destruct;
@property float milliSecondsToStop; // @synthesize milliSecondsToStop=_milliSecondsToStop;
@property float milliSecondsToStart; // @synthesize milliSecondsToStart=_milliSecondsToStart;
@property CDStruct_1b6d18a9 latestGestureFirstSeenTime; // @synthesize latestGestureFirstSeenTime=_latestGestureFirstSeenTime;
@property unsigned int latestGestureType; // @synthesize latestGestureType=_latestGestureType;
@property CDStruct_1b6d18a9 activeGestureLastSeenTime; // @synthesize activeGestureLastSeenTime=_activeGestureLastSeenTime;
@property unsigned int activeGestureType; // @synthesize activeGestureType=_activeGestureType;
@property(retain) PTEffectReaction *reaction; // @synthesize reaction=_reaction;
- (id)initWithStartTime:(float)arg1 stopTime:(float)arg2;

@end

