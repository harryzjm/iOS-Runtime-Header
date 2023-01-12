//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCSystemAudioCapture
{
    struct _opaque_pthread_mutex_t _stateLock;
    struct {
        struct OpaqueAudioQueue *_field1;
        struct AudioStreamBasicDescription _field2;
        struct AudioQueueBuffer *_field3[10];
        unsigned int _field4;
        int _field5;
    } *_audioRecorderQueue;
    struct tagVCSystemAudioCaptureTapSettings _tapSettings;
    struct AudioStreamBasicDescription _audioBasicDescriptionAudioQueue;
    struct AudioStreamBasicDescription _audioBasicDescriptionAudioCapture;
    unsigned int _samplesPerFrame;
    void *_sinkContext;
    CDUnknownFunctionPointerType _sinkProc;
    _Bool _firstAudioBufferReceived;
    struct opaqueVCAudioBufferList *_audioBufferAppendList;
    struct opaqueVCAudioBufferList *_audioBufferOutputList;
    double _conversionRatio;
    unsigned int _timestamp;
    double _hostTime;
    double _startHostTime;
    _Bool _useSineWave;
}

+ (id)newAudioTapWithCaptureContext:(struct __CFString *)arg1 audioFormat:(id)arg2;
+ (id)newAudioTapWithSessionType:(unsigned int)arg1 audioFormat:(id)arg2;
+ (unsigned int)audioTapSessionTypeForInternalSessionType:(unsigned int)arg1;
+ (id)newAudioTapWithProcessID:(int)arg1 audioFormat:(id)arg2;
+ (_Bool)isValidConfiguration:(CDStruct_b94bc9bb *)arg1;
- (void)setupCannedAudioInjection;
- (id)newAudioTapWithAudioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg1;
- (_Bool)stop;
- (_Bool)start;
- (void)dealloc;
- (id)initWithConfiguration:(CDStruct_b94bc9bb *)arg1;

@end

