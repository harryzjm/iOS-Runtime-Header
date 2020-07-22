//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface TSAudioTimeErrorCorrelator : NSObject
{
    long long _maxCorrelationLength;
    long long _upscaleFactor;
    double _samplingRate;
    CDUnknownBlockType _correlationBlock;
}

@property(copy, nonatomic) CDUnknownBlockType correlationBlock; // @synthesize correlationBlock=_correlationBlock;
- (void)dealloc;
- (void)_calculateUpsamplerCoefficients:(float **)arg1 length:(long long *)arg2;
- (id)initWithMaxCorrelationLength:(long long)arg1 andUpscaleFactor:(long long)arg2 forSamplingRate:(double)arg3;

@end
