//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCVocalAttenuationModel;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCVocalAttenuationProcessorImplementation : NSObject
{
    struct AudioTimeStamp _timestamp;
    long long _previousContiguousSampleIndex;
    long long _nextContiguousSampleIndex;
    struct AudioBufferList *_ioBuffer;
    struct AudioStreamBasicDescription _audioFormat;
    unsigned int _maxFrames;
    struct OpaqueAudioComponentInstance *_processingAU;
    NSObject<OS_dispatch_queue> *_creationQueue;
    _Bool _enabled;
    float _level;
    float _minLevel;
    float _maxLevel;
    long long _state;
    MPCVocalAttenuationModel *_model;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) float maxLevel; // @synthesize maxLevel=_maxLevel;
@property(readonly, nonatomic) float minLevel; // @synthesize minLevel=_minLevel;
@property(nonatomic) float level; // @synthesize level=_level;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) MPCVocalAttenuationModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void)_applyAttenuationLevelToAudioUnit;
- (_Bool)_initializeAudioUnit:(id *)arg1;
- (_Bool)_setupAudioUnitWithModel:(id)arg1 error:(id *)arg2;
- (_Bool)_createAudioUnit:(id *)arg1;
- (void)_prepareWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetAudioUnit;
- (_Bool)processAudioBuffer:(struct AudioBufferList *)arg1 sampleIndex:(long long)arg2 numberFrames:(unsigned int)arg3 error:(id *)arg4;
- (_Bool)isCompatibleWithAudioFormat:(struct AudioStreamBasicDescription)arg1 maxFrames:(unsigned int)arg2;
@property(readonly, nonatomic) double renderingLimit;
@property(readonly, nonatomic) double sampleTime;
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
- (void)tearDownWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithMaxAttenuationLevel:(float)arg1 audioFormat:(struct AudioStreamBasicDescription)arg2 maxFrames:(unsigned int)arg3;
- (id)init;

@end

