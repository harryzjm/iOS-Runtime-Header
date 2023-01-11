//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXGReusableView-Protocol.h>

@class PXZoomableInlineHeaderViewConfiguration, UILabel, UIVisualEffectView;

@interface PXZoomableInlineHeaderView : UIView <PXGReusableView>
{
    PXZoomableInlineHeaderViewConfiguration *_configuration;
    UIVisualEffectView *_effectView;
    UIView *_tintView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    PXZoomableInlineHeaderViewConfiguration *_userData;
    struct CGRect _clippingRect;
}

+ (double)_titleBaselineDistanceForFont:(id)arg1;
+ (double)_heightForStyle:(unsigned long long)arg1;
+ (struct CGSize)sizeWithConfiguration:(id)arg1;
+ (id)_subtitleFontForStyle:(unsigned long long)arg1;
+ (id)_titleFontForStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) PXZoomableInlineHeaderViewConfiguration *userData; // @synthesize userData=_userData;
@property(nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
- (void)_platformSpecificViewSetup;
- (id)_tintViewBackgroundColor;
- (void)_setEffectViewCornerRadius:(double)arg1;
- (void)_setupBackgroundView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)layoutSubviews;
- (void)_updateButtonWithConfiguration:(id)arg1;
- (void)_configureViews;
- (void)_setupViews;
- (void)setHidden:(_Bool)arg1;
- (void)_updateConfiguration;
- (id)initWithFrame:(struct CGRect)arg1;

@end
