//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MPCAudioSpectrumAnalyzerStorage : NSObject
{
    float *_intermediateBuffer;
    struct DSPSplitComplex _fftBuffer;
    struct OpaqueFFTSetup *_fftSetup;
    _Bool _processing;
    float _sampleRate;
    long long _maxNumberOfFrames;
    long long _halfN;
    long long _log2N;
}

@property(nonatomic) long long log2N; // @synthesize log2N=_log2N;
@property(nonatomic) long long halfN; // @synthesize halfN=_halfN;
@property(nonatomic) long long maxNumberOfFrames; // @synthesize maxNumberOfFrames=_maxNumberOfFrames;
@property(nonatomic) float sampleRate; // @synthesize sampleRate=_sampleRate;
- (void)analyzeAudioData:(void *)arg1 numberFrames:(unsigned int)arg2 observers:(id)arg3;
- (void)analyzeFrequencies:(struct AudioBufferList *)arg1 numberFrames:(unsigned long long)arg2 observers:(id)arg3;
- (void)_freeBuffers;
- (void)_destroyFFTSetup;
- (void)_prepareBuffers;
- (void)dealloc;
- (id)initWithMaximumNumberOfFrames:(long long)arg1 sampleRate:(float)arg2;

@end

