//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioEngine, AVAudioInputNode, AVAudioPCMBuffer, AVAudioUnitEQ, AVAudioUnitReverb, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TLAttentionAwarenessEffectProcessor : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    AVAudioPCMBuffer *_destinationPCMBuffer;
    AVAudioEngine *_engine;
    AVAudioInputNode *_inputNode;
    struct AudioBufferList *_inputNodeInputBufferList;
    AVAudioUnitEQ *_lowPassFilter;
    AVAudioUnitReverb *_reverb;
    CDStruct_4922f917 _effectParameters;
    NSObject<OS_dispatch_source> *_effectMixFadingTimer;
}

- (void).cxx_destruct;
- (void)_assertNotRunningOnAccessQueue;
- (void)_assertRunningOnAccessQueue;
- (void)_applyEffectParameters:(CDStruct_4922f917)arg1 includingEffectMix:(_Bool)arg2;
- (float)_sanitizeEffectMix:(float)arg1;
- (float)_currentEffectMix;
- (void)_applyEffectMix:(float)arg1;
- (void)stop;
- (struct AudioBufferList *)render:(struct AudioBufferList *)arg1 numberOfFrames:(unsigned int)arg2;
- (_Bool)start;
- (void)setEffectParameters:(CDStruct_4922f917)arg1 effectMixFadeDuration:(double)arg2;
@property(nonatomic) CDStruct_4922f917 effectParameters;
- (void)dealloc;
- (id)initWithProcessingFormat:(id)arg1 framesPerRender:(unsigned int)arg2 effectParameters:(CDStruct_4922f917)arg3;

@end
