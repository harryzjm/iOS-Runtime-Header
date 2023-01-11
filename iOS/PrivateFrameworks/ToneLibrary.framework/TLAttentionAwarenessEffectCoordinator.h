//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface TLAttentionAwarenessEffectCoordinator : NSObject
{
    NSString *_accessQueueLabel;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_effectAudioTapContexts;
    CDStruct_4922f917 _effectParameters;
}

- (void).cxx_destruct;
- (void)_processAudioWithEffectAudioTapContext:(id)arg1 bufferList:(struct AudioBufferList *)arg2 numberOfFramesRequested:(unsigned int)arg3 numberOfFramesToProcess:(unsigned int)arg4;
- (void)_finalizeAudioProcessingWithEffectAudioTapContext:(id)arg1;
- (void)_unprepareAudioProcessingWithEffectAudioTapContext:(id)arg1;
- (void)_prepareAudioProcessingWithEffectAudioTapContext:(id)arg1 maximumNumberOfFrames:(unsigned int)arg2 processingFormat:(const struct AudioStreamBasicDescription *)arg3;
- (void)setEffectParameters:(CDStruct_4922f917)arg1 effectMixFadeDuration:(double)arg2;
@property(nonatomic) CDStruct_4922f917 effectParameters;
- (id)audioMixForAsset:(id)arg1;
- (void)dealloc;
- (id)initWithEffectParameters:(CDStruct_4922f917)arg1;

@end

