//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class MISSING_TYPE, UIView, VUIButton, VUIImageView;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI20CollectionHeaderView : UICollectionReusableView
{
    MISSING_TYPE *containerView;
    MISSING_TYPE *viewLayout;
    MISSING_TYPE *applySafeAreaInsets;
    MISSING_TYPE *titleView;
    MISSING_TYPE *subtitleView;
    MISSING_TYPE *imageView;
    MISSING_TYPE *buttonView;
    MISSING_TYPE *supplementaryViewModel;
    MISSING_TYPE *rendersAsButton;
}

- (void).cxx_destruct;
@property(nonatomic, readonly) VUIImageView *accessibilityImageView;
@property(nonatomic, readonly) VUIButton *accessibilityButtonView;
@property(nonatomic, readonly) UIView *accessibilitySubtitleView;
@property(nonatomic, readonly) UIView *accessibilityTitleView;
- (void)tintColorDidChange;
- (void)prepareForReuse;
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

