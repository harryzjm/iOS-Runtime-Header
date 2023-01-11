//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKColoringLabel, UIView;
@protocol NTKComplicationImageView;

@interface NTKUtilityImageAndLabelsComplicationView
{
    UIView<NTKComplicationImageView> *_imageView;
    NTKColoringLabel *_firstLabel;
    NTKColoringLabel *_secondLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NTKColoringLabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(retain, nonatomic) NTKColoringLabel *firstLabel; // @synthesize firstLabel=_firstLabel;
@property(retain, nonatomic) UIView<NTKComplicationImageView> *imageView; // @synthesize imageView=_imageView;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateWithImageProvider:(id)arg1;
- (void)_setSecondLabelText:(id)arg1;
- (void)_setLabelAttributedText:(id)arg1;
- (void)_setLabelText:(id)arg1;
- (void)_setLabelTextProvider:(id)arg1;
- (_Bool)_isViewVisible:(id)arg1;
- (double)_gapBetweenView:(id)arg1 nextView:(id)arg2;
- (void)_layoutSubviewsHorizontally:(id)arg1;
- (double)_widthThatFits;
- (void)_updateFirstLabelMaxSize;
- (_Bool)_shouldLayoutWithImageView;
- (void)_updateContentForMaxSizeChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
