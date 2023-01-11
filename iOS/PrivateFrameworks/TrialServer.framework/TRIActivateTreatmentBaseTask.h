//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface TRIActivateTreatmentBaseTask
{
    NSDate *_startTime;
    _Bool _testingIgnoreDependencies;
    NSDate *_endTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool testingIgnoreDependencies; // @synthesize testingIgnoreDependencies=_testingIgnoreDependencies;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
- (id)runTaskUsingContext:(id)arg1;
- (id)_nextTasksForRunStatus:(int)arg1;
- (id)runUsingContext:(id)arg1 withTaskQueue:(id)arg2;
- (id)runTaskUsingContext:(id)arg1 experiment:(id)arg2;
- (_Bool)updateLoggingWithExperimentRecord:(id)arg1 paths:(id)arg2 trackingId:(id)arg3 newLogTreatmentAddedOut:(id *)arg4;
- (_Bool)_writeNamespaceDescriptorsWithPaths:(id)arg1 toTreatmentLayer:(unsigned long long)arg2 forExperiment:(id)arg3 treatmentURLs:(id)arg4 context:(id)arg5;
- (_Bool)_experimentRecord:(id)arg1 hasConflictWithExperimentsInDatabase:(id)arg2 conflictEndTime:(id *)arg3;
- (void)runDequeueHandlerUsingContext:(id)arg1;
- (void)runEnqueueHandlerUsingContext:(id)arg1;
- (id)dependencies;
- (void)setStartTime:(id)arg1;
- (id)startTime;

@end
