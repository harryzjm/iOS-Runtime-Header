//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIImageView, UIVisualEffectView, _UIBarBackgroundLayout, _UIBarBackgroundShadowView;

__attribute__((visibility("hidden")))
@interface _UIBarBackground : UIView
{
    UIVisualEffectView *_effectView1;
    UIImageView *_colorAndImageView1;
    _UIBarBackgroundShadowView *_shadowView1;
    UIVisualEffectView *_effectView2;
    UIImageView *_colorAndImageView2;
    _UIBarBackgroundShadowView *_shadowView2;
    UIView *_topInsetView;
    double _bg1LastLayoutHeight;
    double _bg2LastLayoutHeight;
    struct {
        unsigned int needsTopInsetView:1;
        unsigned int needsEffectView1:1;
        unsigned int needsColorAndImageView1:1;
        unsigned int needsShadowView1:1;
        unsigned int needsEffectView2:1;
        unsigned int needsColorAndImageView2:1;
        unsigned int needsShadowView2:1;
    } _backgroundFlags;
    _Bool _topAligned;
    NSString *_groupName;
    _UIBarBackgroundLayout *_layout;
    UIView *_customBackgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *customBackgroundView; // @synthesize customBackgroundView=_customBackgroundView;
@property(retain, nonatomic) _UIBarBackgroundLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) _Bool topAligned; // @synthesize topAligned=_topAligned;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (void)set_shadowView:(id)arg1;
- (id)_shadowView;
- (void)set_backgroundEffectView:(id)arg1;
- (id)_backgroundEffectView;
- (void)transitionBackgroundViews;
- (void)cleanupBackgroundViews;
- (void)updateBackground;
- (void)_setupShadowView:(id)arg1 effect:(id)arg2 image:(id)arg3 shadowColor:(id)arg4 shadowTint:(id)arg5 alpha:(double)arg6;
- (void)prepareBackgroundViews;
- (struct CGRect)frameForYOrigin:(double)arg1 height:(double)arg2;
- (void)_orderSubviews;
- (void)transition:(unsigned long long)arg1 toLayout:(id)arg2;
- (void)_updateBackgroundViewVisiblity;
- (void)layoutSubviews;
- (id)_encodableSubviews;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setupBackgroundValues;

@end

