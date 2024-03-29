//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIKBRTDecayingObject : NSObject
{
    NSMutableArray *_resetBlocks;
    _Bool _isDecaying;
    _Bool _isHolding;
    double _lastUpdate;
    double _timeoutDuration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isHolding; // @synthesize isHolding=_isHolding;
@property(readonly, nonatomic) _Bool isDecaying; // @synthesize isDecaying=_isDecaying;
@property(nonatomic) double timeoutDuration; // @synthesize timeoutDuration=_timeoutDuration;
@property(readonly, nonatomic) double lastUpdate; // @synthesize lastUpdate=_lastUpdate;
- (void)onResetDo:(CDUnknownBlockType)arg1;
- (void)resetActiveDecayTo:(double)arg1;
- (void)startOrUpdateDecay;
- (void)updateDecay;
- (void)reset;
- (void)resetDecayTo:(double)arg1;
@property(readonly, nonatomic) _Bool isActive;
- (void)startDecaying;
- (id)initWithTimeoutDuration:(double)arg1;

@end

