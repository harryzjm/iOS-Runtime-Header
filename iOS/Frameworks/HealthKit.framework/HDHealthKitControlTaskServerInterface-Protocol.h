//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

@protocol HDHealthKitControlTaskServerInterface
- (void)remote_condensableWorkoutsWithCompletion:(void (^)(HKCodableCondensedWorkoutCollection *, NSError *))arg1;
- (void)remote_condensedWorkoutsWithCompletion:(void (^)(HKCodableCondensedWorkoutCollection *, NSError *))arg1;
- (void)remote_condenseWorkoutWithUUID:(NSUUID *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_condenseWorkoutsForReason:(long long)arg1 workoutBatchLimit:(long long)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

