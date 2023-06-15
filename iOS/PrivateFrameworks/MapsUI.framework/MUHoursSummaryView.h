//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MUHoursSummaryViewModel, NSLayoutConstraint, UIImageView, UILayoutGuide, UITapGestureRecognizer;
@protocol MULabelViewProtocol;

__attribute__((visibility("hidden")))
@interface MUHoursSummaryView : UIView
{
    UILayoutGuide *_summaryStackLayoutGuide;
    UIImageView *_expansionIndicator;
    _Bool _expanded;
    UIView<MULabelViewProtocol> *_titleLabel;
    UIView<MULabelViewProtocol> *_hoursLabel;
    UIView<MULabelViewProtocol> *_openStateLabel;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSLayoutConstraint *_titleToOpenStateConstraint;
    NSLayoutConstraint *_titleToHoursConstraint;
    NSLayoutConstraint *_hoursToOpenStateConstraint;
    MUHoursSummaryViewModel *_viewModel;
    CDUnknownBlockType _actionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(readonly, nonatomic) MUHoursSummaryViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)_contentSizeDidChange;
- (void)_updateAppearance;
- (void)_handleServiceHoursAnimation;
- (void)_handleNormalHoursAnimation;
- (void)handleAnimation;
- (void)_handleAnimationStartForNormalHours;
- (void)handleAnimationStart;
- (void)_updateExpandButton;
- (void)expandButtonTapped;
- (void)_updateForPlatterAvailability;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (id)initWithViewModel:(id)arg1;

@end

