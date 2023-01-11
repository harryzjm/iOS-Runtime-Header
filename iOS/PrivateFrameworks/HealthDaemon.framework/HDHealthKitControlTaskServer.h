//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDHealthKitControlTaskServer
{
}

+ (_Bool)validateConfiguration:(id)arg1 error:(out id *)arg2;
+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)remote_condensableWorkoutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_condensedWorkoutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_condenseWorkoutWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_condenseWorkoutsForReason:(long long)arg1 workoutBatchLimit:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;

@end

