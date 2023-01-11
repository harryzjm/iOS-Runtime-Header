//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface VCPImageExposureAnalyzer
{
    float _exposureScore;
}

@property(readonly, nonatomic) float exposureScore; // @synthesize exposureScore=_exposureScore;
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;
- (float)computeNoiseLevel:(char *)arg1 width:(int)arg2 height:(int)arg3 stride:(long long)arg4 textureness:(char *)arg5;
- (float)computeRegionNoise:(char *)arg1 blockTextureness:(char *)arg2 average:(char *)arg3 width:(int)arg4 height:(int)arg5 stride:(long long)arg6;

@end
