//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface GKImageColorPalette
{
    unsigned int _hueSpread;
    unsigned int _saturationSpread;
    unsigned int _brightnessSpread;
    unsigned int _grayscaleSpread;
    struct HSVColor *_imageHSVMap;
    struct CGSize _imageSize;
    double _borderPercentageForBorderDetection;
    unsigned int _hueHistogram[360];
    unsigned int _saturationHistogram[256];
    unsigned int _brightnessHistogram[256];
    NSArray *_bubbleColors;
}

@property(retain) NSArray *bubbleColors; // @synthesize bubbleColors=_bubbleColors;
- (id)initWithImage:(id)arg1;
- (_Bool)analyzeImage:(struct CGImage *)arg1;
- (void)findBrightColors;
- (void)iterateOverPixelsWithBlock:(CDUnknownBlockType)arg1 forHue:(unsigned int)arg2;
- (unsigned int)weightHistogram:(unsigned int *)arg1 size:(unsigned int)arg2 spread:(unsigned int)arg3;
- (void)printHistogram:(unsigned int *)arg1 ofSize:(unsigned int)arg2;
- (void)generateHSVMapWithContext:(struct CGContext *)arg1;
- (void)clearSaturationAndBrightnessHistograms;
- (void)clearMainHistograms;
- (void)reset;
- (void)dealloc;

@end
