//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, _TtC12GameCenterUI11ArtworkView, _TtC12GameCenterUI16DynamicTypeLabel;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI15SmallLockupView : UIView
{
    MISSING_TYPE *headingLabel;
    MISSING_TYPE *titleLabel;
    MISSING_TYPE *subtitleLabel;
    MISSING_TYPE *artworkView;
    MISSING_TYPE *chevronView;
    MISSING_TYPE *hasChevron;
}

- (void).cxx_destruct;
@property(nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilitySubtitleLabel;
@property(nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;
@property(nonatomic, readonly) _TtC12GameCenterUI11ArtworkView *accessibilityArtworkView;
- (void)layoutSubviews;
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic) struct UIEdgeInsets layoutMargins;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
