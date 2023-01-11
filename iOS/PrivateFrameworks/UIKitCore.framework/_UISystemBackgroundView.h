//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView, UIVisualEffectView, _UISystemBackgroundStrokeView;
@protocol _UIBackgroundConfigurationInternal;

__attribute__((visibility("hidden")))
@interface _UISystemBackgroundView
{
    UIView *_backgroundView;
    UIVisualEffectView *_visualEffectView;
    _UISystemBackgroundStrokeView *_strokeView;
    UIView *_shadowView;
    double _currentlyAppliedCornerRadius;
    struct {
        unsigned int currentlyAppliedCornersAreContinuous:1;
        unsigned int didSetCustomViewMasking:1;
    } _systemBackgroundViewFlags;
    id <_UIBackgroundConfigurationInternal> _configuration;
}

- (void).cxx_destruct;
- (id)currentVisiblePathInContainerView:(id)arg1;
- (id)currentBackgroundColor;
- (struct UIEdgeInsets)effectiveInsetsInContainerView:(id)arg1;
- (struct CGRect)frameInContainerView:(id)arg1;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
@property(copy, nonatomic) id <_UIBackgroundConfigurationInternal> configuration; // @synthesize configuration=_configuration;
- (id)description;
- (id)_encodableSubviews;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

@end
