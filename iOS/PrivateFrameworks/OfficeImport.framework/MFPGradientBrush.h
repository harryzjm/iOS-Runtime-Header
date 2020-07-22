//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface MFPGradientBrush
{
    struct CGAffineTransform mTransform;
    NSArray *mBlend;
    NSArray *mColorBlend;
    int mWrapMode;
    NSArray *mStops;
    struct CGShading *mShading;
    struct CGFunction *mShadingFunction;
}

- (void)createPhoneBrush;
- (id)color;
- (void)fillPath:(id)arg1;
- (void)setWrapMode:(int)arg1;
- (void)setColorBlend:(id)arg1;
- (void)setBlend:(id)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)dealloc;
- (id)init;
- (void)createShading;
- (void)createShadingFunction;
- (void)createStopsFromStartAndEndColors;
- (void)createStopsFromBlend;
- (void)createStopsFromColorBlend;
- (id)colorAtPosition:(float)arg1;
- (id)endColor;
- (id)startColor;

@end

