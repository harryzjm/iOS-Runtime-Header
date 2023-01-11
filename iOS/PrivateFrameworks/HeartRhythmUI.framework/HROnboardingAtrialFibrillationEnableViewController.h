//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HeartRhythmUI/HRStackedButtonViewDelegate-Protocol.h>

@class HRStackedButtonView, NSLayoutConstraint, UILabel, UIView;

@interface HROnboardingAtrialFibrillationEnableViewController <HRStackedButtonViewDelegate>
{
    UIView *_heroView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UILabel *_footnoteLabel;
    HRStackedButtonView *_stackedButtonView;
    NSLayoutConstraint *_contentViewBottomConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property(retain, nonatomic) HRStackedButtonView *stackedButtonView; // @synthesize stackedButtonView=_stackedButtonView;
@property(retain, nonatomic) UILabel *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *heroView; // @synthesize heroView=_heroView;
- (double)_footnoteToButton;
- (id)_footnoteFont;
- (id)_footnoteFontTextStyle;
- (double)_titleLastBaselineToBodyFirstBaseline;
- (id)_bodyFont;
- (id)_bodyFontTextStyle;
- (id)_titleFont;
- (id)_titleFontTextStyle;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (id)createHeroView;
- (void)setUpConstraints;
- (void)setUpUI;
- (id)initForOnboarding:(_Bool)arg1;

@end
