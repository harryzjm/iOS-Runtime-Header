//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIColor.h>

@class NSArray, NSData;

@interface UIColor (SafariSharedExtras)
+ (id)safari_colorWithSerializedColorData:(id)arg1;
+ (id)safari_colorWithWBSNamedColorOption:(id)arg1;
+ (id)safari_colorWithRGBColorComponents:(id)arg1;
- (id)safari_colorByModifyingBrightnessByMultiplier:(double)arg1;
- (double)safari_contrastRatioWithColor:(id)arg1;
@property(readonly, nonatomic) UIColor *safari_sRGBColor;
@property(readonly, nonatomic) _Bool safari_isOffWhite;
@property(readonly, nonatomic) _Bool safari_meetsThresholdForDarkAppearance;
@property(readonly, nonatomic) double safari_grayscaleComponent;
@property(readonly, nonatomic) double safari_saturation;
@property(readonly, nonatomic) double safari_luminance;
@property(readonly, copy, nonatomic) NSData *safari_colorDataForSerialization;
@property(readonly, copy, nonatomic) NSArray *safari_rgbColorComponents;
@end

