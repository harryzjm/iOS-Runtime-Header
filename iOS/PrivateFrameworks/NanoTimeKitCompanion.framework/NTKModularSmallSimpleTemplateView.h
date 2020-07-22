//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKColoringLabel, UIView;
@protocol NTKComplicationImageView;

@interface NTKModularSmallSimpleTemplateView
{
    UIView<NTKComplicationImageView> *_imageView;
    NTKColoringLabel *_label;
    long long _maxDynamicFontSize;
}

+ (void)load;
+ (id)supportedTemplateClasses;
+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (double)_maxTextWidthForDynamicFontSize:(long long)arg1;
- (void)_configureWithImageTemplate:(id)arg1;
- (void)_configureWithTextTemplate:(id)arg1;
- (void)_layoutContentView;
- (void)_update;
- (id)initWithFrame:(struct CGRect)arg1;

@end

