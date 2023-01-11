//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSBeepCancellerDelegate-Protocol.h>
#import <CoreSpeech/CSVoiceTriggerAwareZeroFilterDelegate-Protocol.h>

@class CSAudioSampleRateConverter, CSAudioZeroCounter, CSBeepCanceller, CSVoiceTriggerAwareZeroFilter, NSString;
@protocol CSAudioPreprocessorDelegate;

@interface CSAudioPreprocessor : NSObject <CSVoiceTriggerAwareZeroFilterDelegate, CSBeepCancellerDelegate>
{
    float _sampleRate;
    id <CSAudioPreprocessorDelegate> _delegate;
    CSAudioSampleRateConverter *_upsampler;
    CSVoiceTriggerAwareZeroFilter *_zeroFilter;
    CSBeepCanceller *_beepCanceller;
    CSAudioZeroCounter *_zeroCounter;
}

@property(retain, nonatomic) CSAudioZeroCounter *zeroCounter; // @synthesize zeroCounter=_zeroCounter;
@property(retain, nonatomic) CSBeepCanceller *beepCanceller; // @synthesize beepCanceller=_beepCanceller;
@property(retain, nonatomic) CSVoiceTriggerAwareZeroFilter *zeroFilter; // @synthesize zeroFilter=_zeroFilter;
@property(retain, nonatomic) CSAudioSampleRateConverter *upsampler; // @synthesize upsampler=_upsampler;
@property(nonatomic) float sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) __weak id <CSAudioPreprocessorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)beepCancellerDidCancelSamples:(id)arg1 buffer:(id)arg2 timestamp:(unsigned long long)arg3;
- (void)zeroFilter:(id)arg1 zeroFilteredBufferAvailable:(id)arg2 atHostTime:(unsigned long long)arg3;
- (_Bool)_isNarrowBand:(float)arg1;
- (void)_reportMetrics;
- (void)willBeep;
- (void)flush;
- (void)processBuffer:(id)arg1 atTime:(unsigned long long)arg2;
- (void)resetWithSampleRate:(float)arg1 containsVoiceTrigger:(_Bool)arg2 voiceTriggerInfo:(id)arg3;
- (id)initWithSampleRate:(float)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
