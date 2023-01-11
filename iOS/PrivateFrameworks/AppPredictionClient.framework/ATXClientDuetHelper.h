//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ATXClientDuetHelper : NSObject
{
}

+ (id)sharedInstance;
- (id)_queryDuetStreamUnbatched:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5;
- (void)_enumerateBatchesInDuetStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5 block:(CDUnknownBlockType)arg6;
- (id)_queryDuetStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5;
- (id)getActivityEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3;
- (id)getActivityEventsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)_getIntentEventForSource:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 bundleIdFilter:(id)arg5 limit:(unsigned long long)arg6;
- (id)getIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 forSource:(long long)arg4;
- (id)getIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 forSource:(long long)arg3;
- (id)getIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2;

@end

