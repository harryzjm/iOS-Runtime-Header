//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSAudioTimeErrorCorrelatorQuick
{
    float *_channelABuffer;
    float *_scratchBuffer;
    float *_correlationBuffer;
    float *_interpollationIndiciesBuffer;
}

- (void)dealloc;
- (void)_makeBlock;
- (id)initWithMaxCorrelationLength:(long long)arg1 andUpscaleFactor:(long long)arg2 forSamplingRate:(double)arg3;

@end

