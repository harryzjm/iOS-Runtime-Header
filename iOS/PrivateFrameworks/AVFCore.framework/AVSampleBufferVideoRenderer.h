//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/AVMediaDataRequesterConsumer-Protocol.h>
#import <AVFCore/AVQueuedSampleBufferRenderingInternal-Protocol.h>

@class AVMediaDataRequester, AVSampleBufferDisplayLayer, AVSampleBufferRenderSynchronizer, NSArray, NSError, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface AVSampleBufferVideoRenderer : NSObject <AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal>
{
    struct OpaqueFigVideoQueue *_videoQueue;
    _Bool _outputObscured;
    long long _status;
    NSError *_error;
    AVSampleBufferDisplayLayer *_weakDisplayLayer;
    struct __CFArray *_figVideoTargets;
    _Bool _preventsDisplaySleepDuringVideoPlayback;
    _Bool _requiresFlushToResumeDecoding;
    _Bool _hasEverEnqueued;
    _Bool _isRequestingMediaData;
    AVMediaDataRequester *_mediaDataRequester;
    _Bool _aboveHighWaterLevel;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_videoQueueQueue;
    NSObject<OS_dispatch_queue> *_layerQueue;
    AVSampleBufferRenderSynchronizer *_weakReferenceToSynchronizer;
    _Bool _addedToSynchronizer;
    _Bool _controlTimebaseSetByUserIsInUse;
    struct OpaqueCMTimebase *_controlTimebaseSetByUser;
    struct OpaqueCMTimebase *_readOnlyVideoQueueTimebase;
    struct OpaqueCMTimebase *_readOnlyRenderingTimebase;
    NSMutableArray *_videoOutputs;
    NSObject<OS_dispatch_queue> *_flushCallbackListQueue;
    NSObject<OS_dispatch_queue> *_flushCallbackQueue;
    NSMutableArray *_flushCallbacks;
    NSObject<OS_dispatch_queue> *_queueForProtectingPrerollCompleteCallback;
    CDUnknownBlockType _pendingPrerollCompleteCallback;
    int _pendingPrerollRequestID;
    NSObject<OS_dispatch_queue> *_queueForCallingPrerollCompleteCallback;
    int _upcomingPTSExpectation;
    CDStruct_1b6d18a9 _minimumUpcomingPTS;
    id _didFinishSuspensionNotificationToken;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)_didFinishSuspension:(id)arg1;
- (int)_setContentLayerOnFigVideoQueue:(struct OpaqueFigVideoQueue *)arg1;
- (void)addVideoTarget:(struct OpaqueFigVideoTarget *)arg1;
- (void)_updateVideoTargetsOnVideoQueue;
- (void)addSampleBufferDisplayLayer:(id)arg1;
- (_Bool)requiresFlushToResumeDecoding;
- (_Bool)hasSufficientMediaDataForReliablePlaybackStart;
- (void)stopRequestingMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)prerollDecodeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_completedDecodeForPrerollForRequestID:(int)arg1;
- (void)_callOldPrerollCompletionHandlerWithSuccess:(_Bool)arg1 andSetNewPrerollCompletionHandler:(CDUnknownBlockType)arg2 forRequestID:(int)arg3;
- (void)_flushComplete;
- (void)flushWithRemovalOfDisplayedImage:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)flushAndRemoveImage;
- (void)flush;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 bufferEnqueueingInfo:(CDStruct_b7523c42 *)arg2;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (int)_enqueueSingleSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 bufferEnqueueingInfo:(CDStruct_b7523c42 *)arg2;
- (struct OpaqueCMTimebase *)timebase;
- (id)error;
- (long long)status;
- (_Bool)isReadyForMoreMediaData;
- (void)setToneMapToStandardDynamicRange:(_Bool)arg1;
- (void)setSTSLabel:(id)arg1;
- (void)copyFigSampleBufferAudioRenderer:(struct OpaqueFigSampleBufferAudioRenderer **)arg1;
- (_Bool)setRenderSynchronizer:(id)arg1 error:(id *)arg2;
- (void)setDisplayLayerVisibility:(_Bool)arg1;
- (struct OpaqueCMTimebase *)controlTimebase;
- (void)dealloc;
- (id)init;
- (void)_setRequiresFlushToResumeDecoding:(_Bool)arg1;
- (void)_removeFigVideoQueueListeners;
- (void)_addFigVideoQueueListeners;
- (void)_setOutputObscuredDueToInsufficientExternalProtection:(_Bool)arg1;
- (void)_resetStatusWithOSStatus:(int)arg1;
- (void)_setStatus:(long long)arg1 error:(id)arg2;
- (void)_refreshAboveHighWaterLevel;
- (_Bool)_hasEverEnqueued;
- (struct OpaqueFigVideoQueue *)_copyVideoQueue;
- (int)_createVideoQueue:(struct OpaqueFigVideoQueue **)arg1;
- (int)_initializeTimebases;
- (struct OpaqueCMTimebase *)_readOnlyVideoQueueTimebase;
- (_Bool)_setSynchronizerTimebase:(struct OpaqueCMTimebase *)arg1 error:(id *)arg2;
- (void)setControlTimebase:(struct OpaqueCMTimebase *)arg1;
- (id)videoPerformanceMetrics;
@property(readonly) _Bool outputObscuredDueToInsufficientExternalProtection;
@property(nonatomic) _Bool preventsCapture;
@property(nonatomic) _Bool preventsDisplaySleepDuringVideoPlayback;
- (void)resetUpcomingSampleBufferPresentationTimeExpectations;
- (void)expectMonotonicallyIncreasingUpcomingSampleBufferPresentationTimes;
- (void)expectMinimumUpcomingSampleBufferPresentationTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)_setUpcomingPresentationTimeExpectations:(int)arg1 minimumPresentationTime:(CDStruct_1b6d18a9)arg2;
@property(readonly, nonatomic) NSArray *outputs;
- (void)removeOutput:(id)arg1;
- (void)addOutput:(id)arg1;
- (void)_updateVideoOutputs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
