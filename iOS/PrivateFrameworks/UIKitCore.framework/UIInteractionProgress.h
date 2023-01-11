//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPointerArray;

@interface UIInteractionProgress : NSObject
{
    NSPointerArray *_observers;
    double _previousPercentComplete;
    double _previousUpdateTime;
    double _mostRecentUpdateTime;
    long long _atLeastTwoUpdates;
    double _percentComplete;
}

@property(readonly, nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
- (void).cxx_destruct;
- (long long)numberOfObservers;
- (void)removeProgressObserver:(id)arg1;
- (void)addProgressObserver:(id)arg1;
- (unsigned long long)_indexOfObserver:(id)arg1;
- (void)endInteraction:(_Bool)arg1 finalVelocity:(double)arg2;
- (void)endInteraction:(_Bool)arg1;
@property(readonly, nonatomic) double velocity;
- (void)setPercentComplete:(double)arg1;
- (id)description;
- (id)init;

@end
