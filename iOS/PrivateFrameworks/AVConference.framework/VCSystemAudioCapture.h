//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCSystemAudioCapture : NSObject
{
    struct _opaque_pthread_mutex_t _stateLock;
    struct {
        struct OpaqueAudioQueue *_field1;
        struct AudioStreamBasicDescription _field2;
        struct AudioQueueBuffer *_field3[10];
        unsigned int _field4;
        int _field5;
    } *_audioRecorderQueue;
    int _audioProcessIdToTap;
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
}

+ (id)newAudioTapDescriptionForProcess:(int)arg1 audioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg2;
- (_Bool)stop;
- (_Bool)start;
- (void)dealloc;
- (id)initWithConfiguration:(CDStruct_29090a4b *)arg1;

@end
