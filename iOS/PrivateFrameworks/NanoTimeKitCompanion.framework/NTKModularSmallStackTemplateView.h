//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKColoringLabel, NTKOneColumnModularSmallLayoutAttributes, UIView;
@protocol NTKComplicationImageView;

@interface NTKModularSmallStackTemplateView
{
    NTKOneColumnModularSmallLayoutAttributes *_layoutAttributes;
    NTKColoringLabel *_titleLabel;
    NTKColoringLabel *_subtitleLabel;
    UIView<NTKComplicationImageView> *_imageView;
}

+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView<NTKComplicationImageView> *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NTKColoringLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) NTKColoringLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateLayoutForLabel:(id)arg1 baselineOffset:(double)arg2;
- (void)_layoutContentView;
- (void)_update;

@end
