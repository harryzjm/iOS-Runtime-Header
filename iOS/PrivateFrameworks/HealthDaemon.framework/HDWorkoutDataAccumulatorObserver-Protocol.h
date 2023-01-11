//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class NSArray, NSDictionary;
@protocol HDWorkoutDataAccumulator;

@protocol HDWorkoutDataAccumulatorObserver <NSObject>

@optional
- (void)workoutDataAccumulator:(id <HDWorkoutDataAccumulator>)arg1 didUpdateEvents:(NSArray *)arg2;
- (void)workoutDataAccumulator:(id <HDWorkoutDataAccumulator>)arg1 didUpdateMetadata:(NSDictionary *)arg2;
- (void)workoutDataAccumulator:(id <HDWorkoutDataAccumulator>)arg1 didUpdateStatistics:(NSDictionary *)arg2;
@end

