//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray, UIView, VUIImageView;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI8CardView
{
    MISSING_TYPE *debugUI;
    MISSING_TYPE *cardViewLayout;
    MISSING_TYPE *imageView;
    MISSING_TYPE *appImageView;
    MISSING_TYPE *overlayView;
    MISSING_TYPE *labelViews;
    MISSING_TYPE *button;
    MISSING_TYPE *downloadIndicator;
    MISSING_TYPE *bottomSeparatorView;
}

- (void).cxx_destruct;
@property(nonatomic, readonly) UIView *accessibilityButton;
@property(nonatomic, readonly) NSArray *accessibilityLabelViews;
@property(nonatomic, readonly) UIView *accessibilityOverlayView;
@property(nonatomic, readonly) VUIImageView *accessibilityAppImageView;
@property(nonatomic, readonly) VUIImageView *accessibilityImageView;
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
@property(nonatomic, readonly) _Bool vuiDebugUI;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

