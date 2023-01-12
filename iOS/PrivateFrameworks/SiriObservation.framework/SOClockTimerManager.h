//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFInstanceContext, NSMutableDictionary;

@interface SOClockTimerManager : NSObject
{
    AFInstanceContext *_instanceContext;
    NSMutableDictionary *_registeredObservations;
}

+ (void)warmUp;
- (void).cxx_destruct;
- (id)dismissTimerWithIdentifier:(id)arg1;
- (id)removeTimer:(id)arg1;
- (id)updateTimer:(id)arg1;
- (id)addTimer:(id)arg1;
- (id)timers;
- (void)removeHandlerForEvent:(long long)arg1;
- (void)addHandler:(CDUnknownBlockType)arg1 forEvent:(long long)arg2;
- (void)checkIn;
- (void)dealloc;
- (id)initWithInstanceContext:(id)arg1;
- (id)init;
- (id)_registeredObservations;

@end
