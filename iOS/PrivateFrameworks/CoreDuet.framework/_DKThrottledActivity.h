//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet;

@interface _DKThrottledActivity : NSObject
{
    NSCountedSet *_minimumIntervalScheduledActions;
    NSCountedSet *_delayScheduledActions;
}

+ (void)clearHistoryForName:(id)arg1;
+ (void)performWithDelayInDaysOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(CDUnknownBlockType)arg4;
+ (void)performWithDelayInHoursOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(CDUnknownBlockType)arg4;
+ (void)performWithDelayInMinutesOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(CDUnknownBlockType)arg4;
+ (void)performWithDelayInSecondsOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(CDUnknownBlockType)arg4;
+ (void)performWithMinimumIntervalInDaysOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(CDUnknownBlockType)arg4;
+ (void)performWithMinimumIntervalInHoursOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(CDUnknownBlockType)arg4;
+ (void)performWithMinimumIntervalInMinutesOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(CDUnknownBlockType)arg4;
+ (void)performWithMinimumIntervalInSecondsOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(CDUnknownBlockType)arg4;
+ (void)performNoMoreOftenInDaysThan:(double)arg1 name:(id)arg2 activityBlock:(CDUnknownBlockType)arg3 throttleBlock:(CDUnknownBlockType)arg4;
+ (void)performNoMoreOftenInDaysThan:(double)arg1 name:(id)arg2 activityBlock:(CDUnknownBlockType)arg3;
+ (void)performNoMoreOftenInHoursThan:(double)arg1 name:(id)arg2 activityBlock:(CDUnknownBlockType)arg3 throttleBlock:(CDUnknownBlockType)arg4;
+ (void)performNoMoreOftenInHoursThan:(double)arg1 name:(id)arg2 activityBlock:(CDUnknownBlockType)arg3;
+ (void)performNoMoreOftenInMinutesThan:(double)arg1 name:(id)arg2 activityBlock:(CDUnknownBlockType)arg3 throttleBlock:(CDUnknownBlockType)arg4;
+ (void)performNoMoreOftenInMinutesThan:(double)arg1 name:(id)arg2 activityBlock:(CDUnknownBlockType)arg3;
+ (void)performNoMoreOftenInSecondsThan:(double)arg1 name:(id)arg2 activityBlock:(CDUnknownBlockType)arg3 throttleBlock:(CDUnknownBlockType)arg4;
+ (void)performNoMoreOftenInSecondsThan:(double)arg1 name:(id)arg2 activityBlock:(CDUnknownBlockType)arg3;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)clearDateForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (void)setDate:(id)arg1 forKey:(id)arg2;
- (id)description;
- (id)keyForName:(id)arg1;
- (void)performWithDelayInSecondsOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(CDUnknownBlockType)arg4;
- (void)_performOrScheduleWithTimeInterval:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(CDUnknownBlockType)arg4 callDepth:(unsigned long long)arg5;
- (void)_performNoMoreOftenInSecondsThan:(double)arg1 name:(id)arg2 activityBlock:(CDUnknownBlockType)arg3 throttleBlock:(CDUnknownBlockType)arg4;
- (id)init;

@end

