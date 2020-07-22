//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKColoringLabel, UIView;
@protocol NTKComplicationImageView;

@interface NTKCircularSmallSimpleComplicationView
{
    NTKColoringLabel *_label;
    UIView<NTKComplicationImageView> *_imageView;
    double _maxDynamicFontSize;
}

+ (double)_imageScaleForTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;
@property(nonatomic) double maxDynamicFontSize; // @synthesize maxDynamicFontSize=_maxDynamicFontSize;
@property(retain, nonatomic) UIView<NTKComplicationImageView> *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NTKColoringLabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateLabelsForFontChange;
- (void)_updateForTemplateChange;
- (void)_updateImageViewWithImageProvider:(id)arg1;
- (void)_updateLabelWithTextProvider:(id)arg1;
- (void)updateImageViewWithImage:(id)arg1;
- (void)updateLabelWithString:(id)arg1;
- (double)_baselineOffsetForDynamicSize:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

