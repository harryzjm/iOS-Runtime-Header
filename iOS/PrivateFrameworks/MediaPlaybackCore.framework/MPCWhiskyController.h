//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPCRecordingSession, MPCVocalAttenuationPolicyController, MPCWhiskyControllerDisabledState, MSVTimer, NSDate, NSObject, NSString;
@protocol MPCVocalAttenuationModelProvider, MPCVocalAttenuationProcessor, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCWhiskyController
{
    NSObject<OS_dispatch_queue> *_setupQueue;
    float _vocalLevel;
    _Bool _processIsBackgrounded;
    NSDate *_shutdownSequenceStartDate;
    float _minVocalLevel;
    float _maxVocalLevel;
    float _defaultVocalLevel;
    long long _state;
    MPCWhiskyControllerDisabledState *_disabledState;
    MPCRecordingSession *_recordingSession;
    id <MPCVocalAttenuationModelProvider> _modelProvider;
    id <MPCVocalAttenuationProcessor> _processor;
    MPCVocalAttenuationPolicyController *_policyController;
    MSVTimer *_shutdownTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MSVTimer *shutdownTimer; // @synthesize shutdownTimer=_shutdownTimer;
@property(readonly, nonatomic) MPCVocalAttenuationPolicyController *policyController; // @synthesize policyController=_policyController;
@property(readonly, nonatomic) id <MPCVocalAttenuationProcessor> processor; // @synthesize processor=_processor;
@property(readonly, nonatomic) id <MPCVocalAttenuationModelProvider> modelProvider; // @synthesize modelProvider=_modelProvider;
@property(readonly, nonatomic) MPCRecordingSession *recordingSession; // @synthesize recordingSession=_recordingSession;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, copy) NSString *description;
- (void)_emitStatisticsEvent;
- (void)engineDidResetMediaServices:(id)arg1;
- (void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3;
- (void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;
- (void)vocalAttenuationPolicyControllerDidChange:(id)arg1;
- (void)_stopShutdownSequenceIfRelevant;
- (void)_startShutdownSequenceIfRelevant;
- (float)_vocalLevelForProcessorLevel:(float)arg1;
- (float)_processorLevelForVocalLevel:(float)arg1;
- (void)_tearDownTapData;
- (void)_loadModel;
- (void)_updateState:(long long)arg1;
@property(readonly, nonatomic) double renderingTimeLimit;
- (id)blockingPolicy;
@property(readonly, copy, nonatomic) NSString *modelID;
- (void)finalizeTap:(struct opaqueMTAudioProcessingTap *)arg1;
- (void)processTap:(struct opaqueMTAudioProcessingTap *)arg1 sampleIndex:(long long)arg2 numberFrames:(long long)arg3 flags:(unsigned int)arg4 audioBufferList:(struct AudioBufferList *)arg5 numberFramesOut:(long long *)arg6 flagsOut:(unsigned int *)arg7;
- (void)unprepareTap:(struct opaqueMTAudioProcessingTap *)arg1;
- (void)prepareTap:(struct opaqueMTAudioProcessingTap *)arg1 maxFrames:(long long)arg2 processingFormat:(const struct AudioStreamBasicDescription *)arg3;
- (unsigned int)creationFlags;
- (_Bool)shouldAttachAudioTapToItem:(id)arg1;
- (void)dealloc;
- (id)initWithPlaybackEngine:(id)arg1 modelProvider:(id)arg2 processor:(id)arg3;
- (id)initWithPlaybackEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

