//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChatKit/AVVoiceControllerRecordDelegate-Protocol.h>

@class AVVoiceController, CKAudioAnalyzer, NSDictionary, NSString;
@protocol CKVoiceControllerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CKVoiceController : NSObject <AVVoiceControllerRecordDelegate>
{
    id <CKVoiceControllerDelegate> _delegate;
    long long __activationMode;
    NSDictionary *_recordSettings;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_powerUpdateTimer;
    AVVoiceController *_voiceController;
    CKAudioAnalyzer *_audioAnalyzer;
}

@property(retain, nonatomic) CKAudioAnalyzer *audioAnalyzer; // @synthesize audioAnalyzer=_audioAnalyzer;
@property(retain, nonatomic) AVVoiceController *voiceController; // @synthesize voiceController=_voiceController;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *powerUpdateTimer; // @synthesize powerUpdateTimer=_powerUpdateTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSDictionary *recordSettings; // @synthesize recordSettings=_recordSettings;
@property(nonatomic, setter=_setActivationMode:) long long _activationMode; // @synthesize _activationMode=__activationMode;
@property(nonatomic) __weak id <CKVoiceControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)messageSent:(id)arg1;
- (void)stopUpdatingPower;
- (void)startUpdatingPower;
- (void)voiceControllerDidStopRecordingForClientError;
- (void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)voiceControllerDidStartRecording:(id)arg1 successfully:(_Bool)arg2;
- (void)voiceControllerDidDetectStartpoint:(id)arg1;
- (void)releaseAudioSession;
- (void)playAlertSoundForType:(int)arg1;
- (void)stop;
- (void)record;
- (void)setActivationMode:(long long)arg1;
- (id)initWithActivationMode:(long long)arg1 recordSettings:(id)arg2 queue:(id)arg3;
- (void)cleanup;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

