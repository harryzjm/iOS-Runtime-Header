//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/AVVoiceControllerPlaybackDelegate-Protocol.h>
#import <CoreSpeech/AVVoiceControllerRecordDelegate-Protocol.h>
#import <CoreSpeech/CSAudioDecoderDelegate-Protocol.h>
#import <CoreSpeech/CSAudioFileReaderDelegate-Protocol.h>
#import <CoreSpeech/CSBeepCancellerDelegate-Protocol.h>

@class AVVoiceController, CSAudioDecoder, CSAudioFileReader, CSAudioPowerMeter, CSAudioSampleRateConverter, CSAudioZeroCounter, CSAudioZeroFilter, CSBeepCanceller, CSRemoteRecordClient, NSDictionary, NSString;
@protocol CSAudioRecorderDelegate;

@interface CSAudioRecorder : NSObject <AVVoiceControllerRecordDelegate, AVVoiceControllerPlaybackDelegate, CSBeepCancellerDelegate, CSAudioDecoderDelegate, CSAudioFileReaderDelegate>
{
    AVVoiceController *_voiceController;
    CSAudioZeroFilter *_zeroFilter;
    CSBeepCanceller *_beepCanceller;
    unsigned long long _vtEndInSampleCount;
    unsigned long long _numSamplesProcessed;
    struct OpaqueAudioConverter *_deinterleaver;
    struct AudioBufferList _interleavedABL;
    struct AudioBufferList *_pNonInterleavedABL;
    CSAudioSampleRateConverter *_sampleRateConverter;
    _Bool _needSampleRateConversion;
    CSRemoteRecordClient *_remoteRecordClient;
    CSAudioPowerMeter *_powerMeter;
    _Bool _shouldUsePowerMeter;
    NSDictionary *_latestContext;
    _Bool _shouldUseRemoteRecord;
    CSAudioDecoder *_opusDecoder;
    CSAudioZeroCounter *_continuousZeroCounter;
    CSAudioFileReader *_audioFileReader;
    unsigned long long _audioFilePathIndex;
    _Bool _waitingForDidStart;
    id <CSAudioRecorderDelegate> _delegate;
}

@property(nonatomic) __weak id <CSAudioRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)audioFileReaderDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)audioFileReaderDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;
- (void)audioFileReaderBufferAvailable:(id)arg1 buffer:(id)arg2 atTime:(unsigned long long)arg3;
- (_Bool)_needResetAudioInjectionIndex:(id)arg1;
- (void)_createAudioPowerMeterIfNeeded;
- (void)_createSampleRateConverterIfNeeded;
- (void)_createDeInterleaverIfNeeded;
- (id)_deinterleaveBufferIfNeeded:(id)arg1;
- (id)_samplingRateConvertIfNeeded:(id)arg1;
- (void)voiceControllerMediaServicesWereReset:(id)arg1;
- (void)voiceControllerMediaServicesWereLost:(id)arg1;
- (void)voiceControllerDidSetAudioSessionActive:(id)arg1 isActivated:(_Bool)arg2;
- (void)voiceControllerWillSetAudioSessionActive:(id)arg1 willActivate:(_Bool)arg2;
- (void)voiceControllerEndRecordInterruption:(id)arg1;
- (void)voiceControllerBeginRecordInterruption:(id)arg1 withContext:(id)arg2;
- (void)voiceControllerBeginRecordInterruption:(id)arg1;
- (void)voiceControllerDidFinishAlertPlayback:(id)arg1 ofType:(int)arg2 error:(id)arg3;
- (void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;
- (void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)voiceControllerDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;
- (void)_audioRecorderDidStopRecordingForReason:(long long)arg1;
- (void)_audioRecorderDidStartRecordingSuccessfully:(_Bool)arg1 error:(id)arg2;
- (id)metrics;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (void)updateMeters;
- (void)setMeteringEnabled:(_Bool)arg1;
- (unsigned long long)alertStartTime;
- (_Bool)playAlertSoundForType:(long long)arg1;
- (_Bool)playRecordStartingAlertAndResetEndpointer;
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;
- (void)audioDecoderDidDecodePackets:(id)arg1 buffer:(id)arg2 timestamp:(unsigned long long)arg3;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)beepCancellerDidCancelSamples:(id)arg1 buffer:(id)arg2 timestamp:(unsigned long long)arg3;
- (void)_processAudioChainWithZeroFiltering:(id)arg1 atTime:(unsigned long long)arg2;
- (void)_processAudioChain:(id)arg1 atTime:(unsigned long long)arg2;
- (_Bool)_shouldRunZeroFilter;
- (id)voiceTriggerInfo;
- (id)playbackRoute;
- (id)recordDeviceInfo;
- (id)recordRoute;
- (_Bool)isNarrowBand;
- (float)_recordingSampleRate;
- (_Bool)isRecording;
- (_Bool)setRecordMode:(long long)arg1 error:(id *)arg2;
- (_Bool)startListening:(id *)arg1;
- (_Bool)prepareListenWithSettings:(id)arg1 error:(id *)arg2;
- (void)stopRecording;
- (_Bool)startRecording;
- (_Bool)startRecording:(id *)arg1;
- (_Bool)_shouldUseRemoteRecordForContext:(id)arg1;
- (_Bool)startRecordingWithSettings:(id)arg1 error:(id *)arg2;
- (_Bool)_startRecordingForAudioInjection;
- (_Bool)_shouldInjectAudio;
- (void)_resetZeroFilter;
- (double)getRecordBufferDuration;
- (_Bool)setRecordBufferDuration:(double)arg1;
- (void)setSynchronousCallbackEnabled:(_Bool)arg1;
- (id)recordSettings;
@property(nonatomic) _Bool duckOthersOption;
- (void)releaseAudioSession:(unsigned long long)arg1;
- (void)prewarmAudioSession;
- (_Bool)setCurrentContext:(id)arg1 error:(id *)arg2;
- (_Bool)prepareRecordWithSettings:(id)arg1 error:(id *)arg2;
- (id)_beepCanceller;
- (id)_voiceControllerWithContext:(id)arg1 error:(id *)arg2;
- (void)_destroyVoiceController;
- (void)dealloc;
- (void)willDestroy;
- (id)initWithContext:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

