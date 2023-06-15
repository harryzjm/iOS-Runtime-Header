//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetWriterFigAssetWriterNotificationHandler, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetWriterWritingHelper
{
    struct OpaqueFigAssetWriter *_figAssetWriter;
    NSObject<OS_dispatch_queue> *_figAssetWriterAccessQueue;
    _Bool _startSessionCalled;
    AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;
    void *_figAssetWriterCallbackContextToken;
}

+ (id)finalStepWorkaroundOperationWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1;
+ (id)finishWritingDelegateOperationWithAssetWriter:(id)arg1 andFigAssetWriter:(struct OpaqueFigAssetWriter *)arg2 andDelegate:(id)arg3;
+ (id)prepareInputsOperationsWithInputs:(id)arg1;
- (_Bool)_isDefunct;
- (void)flushSegment;
- (void)flush;
- (void)transitionToFailedStatusWithError:(id)arg1;
- (id)_transitionToFinishWritingHelperWithFinishWritingOperations:(id)arg1;
- (id)_makeFinishWritingOperationsWithCustomFigAssetWriterFinishOperation:(id)arg1;
- (void)finishWritingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finishWriting;
- (void)cancelWriting;
- (struct OpaqueFigAssetWriter *)_retainedFigAssetWriter;
- (void)endSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)startSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (long long)status;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)dealloc;
- (id)figTrackReferences;
- (_Bool)checkAVAssetWriterInputConfigurationToOutputSegmentDataForOutputFileTypeProfile:(id)arg1 preferredOutputSegmentInterval:(CDStruct_1b6d18a9)arg2 returningDebugDescription:(id *)arg3;
- (_Bool)checkConfigurationToOutputSegmentDataReturningDebugDescription:(id *)arg1;
- (id)initWithConfigurationState:(id)arg1 assetWriter:(id)arg2 error:(id *)arg3;
- (id)initWithConfigurationState:(id)arg1 assetWriter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

