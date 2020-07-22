//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDailyActivityGoalDetectionDelegate-Protocol.h>

@class NSString;

@interface HDCompanionDailyGoalCompletionManager : NSObject <HDDailyActivityGoalDetectionDelegate>
{
}

- (void)runDailyGoalCompletionDetectionForGoalType:(unsigned long long)arg1 cacheIndex:(long long)arg2 previousValue:(double)arg3 currentValue:(double)arg4 goalValue:(double)arg5 shouldAlert:(_Bool)arg6 goalMetHandler:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
