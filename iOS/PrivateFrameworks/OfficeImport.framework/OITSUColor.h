//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface OITSUColor : NSObject
{
    struct CGColor *mCGColor;
    unsigned long long mColorRGBSpace;
}

+ (id)brownColor;
+ (id)purpleColor;
+ (id)orangeColor;
+ (id)magentaColor;
+ (id)yellowColor;
+ (id)cyanColor;
+ (id)blueColor;
+ (id)greenColor;
+ (id)redColor;
+ (id)lightGrayColor;
+ (id)grayColor;
+ (id)whiteColor;
+ (id)blackColor;
+ (id)clearColor;
+ (id)randomColor;
+ (id)colorWithUIColor:(id)arg1;
+ (id)colorWithHexString:(id)arg1;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
+ (id)stringForColor:(id)arg1;
+ (id)stringForSystemColorID:(int)arg1;
+ (id)colorWithSystemColorID:(int)arg1;
+ (id)colorWithBGR:(unsigned int)arg1;
+ (id)colorWithCatalogName:(id)arg1 colorName:(id)arg2;
+ (id)colorWithDeviceCyan:(double)arg1 magenta:(double)arg2 yellow:(double)arg3 black:(double)arg4 alpha:(double)arg5;
+ (id)colorWithDeviceRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithDeviceHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithDeviceWhite:(double)arg1 alpha:(double)arg2;
+ (id)colorWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithCalibratedHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithCalibratedWhite:(double)arg1 alpha:(double)arg2;
+ (id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3 alpha:(int)arg4;
+ (id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3;
+ (id)colorWithEshColor:(const struct EshColor *)arg1;
+ (id)colorWithCsColour:(const struct CsColour *)arg1;
+ (id)colorWithRGBBytes:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3;
+ (id)colorWithRGBValue:(long long)arg1;
+ (id)colorWithBGRValue:(long long)arg1;
@property(readonly, nonatomic) unsigned long long colorRGBSpace; // @synthesize colorRGBSpace=mColorRGBSpace;
- (id)hexString;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)newBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (_Bool)wantsHighContrastBackgroundForDarkMode:(id)arg1;
- (_Bool)isNearlyWhite;
- (_Bool)isOpaque;
- (double)luminance;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)invertedColor;
- (id)grayscaleColor;
@property(readonly, nonatomic) UIColor *UIColor;
- (double)brightnessComponent;
- (double)saturationComponent;
- (double)hueComponent;
- (void)getRGBAComponents:(double *)arg1;
@property(readonly, nonatomic) double alphaComponent;
@property(readonly, nonatomic) double blueComponent;
@property(readonly, nonatomic) double greenComponent;
@property(readonly, nonatomic) double redComponent;
- (double)p_rgbComponentWithIndex:(unsigned char)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualWithTolerance:(id)arg1;
- (_Bool)isAlmostEqualToColor:(id)arg1;
- (_Bool)p_isEqualToColor:(id)arg1 withTolerance:(double)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithUIColor:(id)arg1;
- (id)initWithHexString:(id)arg1;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 targetRGBSpace:(unsigned long long)arg5;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 colorSpace:(unsigned long long)arg5;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (id)initWithCGColor:(struct CGColor *)arg1 colorSpace:(unsigned long long)arg2;
@property(readonly) struct CGColor *CGColor;
- (void)set;
- (id)colorWithShadeValue:(double)arg1;
- (id)colorWithTintValue:(double)arg1;
- (unsigned int)toBGR;
- (id)copy;
@property(readonly) int CGColorSpaceModel;
@property(readonly) struct CGColorSpace *CGColorSpace;
- (void)getCyan:(double *)arg1 magenta:(double *)arg2 yellow:(double *)arg3 black:(double *)arg4 alpha:(double *)arg5;
@property(readonly) double blackComponent;
@property(readonly) double yellowComponent;
@property(readonly) double magentaComponent;
@property(readonly) double cyanComponent;
- (double)p_cmykComponentWithIndex:(unsigned char)arg1;
- (void)getWhite:(double *)arg1 alpha:(double *)arg2;
@property(readonly) double whiteComponent;
- (void)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (id)solidColoredPngImage;
- (id)newSolidColoredBitmap:(struct CGSize)arg1;
- (CDStruct_a06f635e)ttColor;
- (struct EshColor)eshColor;
- (struct CsColour)csColour;
- (void)getRGBBytes:(char *)arg1 green:(char *)arg2 blue:(char *)arg3;
- (_Bool)isBlack;

@end

