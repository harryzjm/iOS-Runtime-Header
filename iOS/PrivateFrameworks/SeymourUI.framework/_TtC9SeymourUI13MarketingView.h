//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, UIImageView;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI13MarketingView : UIView
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *isLoading;
    MISSING_TYPE *onElementAppearance;
    MISSING_TYPE *onElementDisappearance;
    MISSING_TYPE *onVisibleBoundsChange;
    MISSING_TYPE *onImpressionableBoundsChange;
    MISSING_TYPE *backgroundImageView;
    MISSING_TYPE *layout;
    MISSING_TYPE *logoImageView;
    MISSING_TYPE *stackView;
    MISSING_TYPE *titleLabel;
    MISSING_TYPE *subtitleLabel;
    MISSING_TYPE *supportingTextLabel;
    MISSING_TYPE *actionItemSubtitles;
    MISSING_TYPE *actionItemTitles;
    MISSING_TYPE *actionItemButtons;
    MISSING_TYPE *actionItemViews;
    MISSING_TYPE *offer;
    MISSING_TYPE *pendingOffer;
    MISSING_TYPE *lastTappedActionItemButton;
}

- (void).cxx_destruct;
- (void)dismissButtonTapped:(id)arg1;
- (void)actionItemButtonTapped:(id)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, readonly) UIImageView *logoImageView; // @synthesize logoImageView;

@end

