//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICQLink, NSArray, UIButton, UILabel, UILayoutGuide, _ICQUpgradeCompletePageSpecification;
@protocol ICQPageDelegate;

@interface ICQUpgradeCompleteView
{
    _ICQUpgradeCompletePageSpecification *_upgradeCompletePageSpecification;
    _Bool _layoutGuideProblem;
    id <ICQPageDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIButton *_checkmarkButton;
    UIButton *_doneButton;
    ICQLink *_doneLink;
    UILayoutGuide *_navigationBarLayoutGuide;
    UILayoutGuide *_aboveCheckLayoutGuide;
    UILayoutGuide *_betweenCheckDoneLayoutGuide;
    UILayoutGuide *_belowDoneLayoutGuide;
    NSArray *_activeConstraints;
}

@property(retain, nonatomic) NSArray *activeConstraints; // @synthesize activeConstraints=_activeConstraints;
@property(readonly, nonatomic) UILayoutGuide *belowDoneLayoutGuide; // @synthesize belowDoneLayoutGuide=_belowDoneLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *betweenCheckDoneLayoutGuide; // @synthesize betweenCheckDoneLayoutGuide=_betweenCheckDoneLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *aboveCheckLayoutGuide; // @synthesize aboveCheckLayoutGuide=_aboveCheckLayoutGuide;
@property(readonly, nonatomic) UILayoutGuide *navigationBarLayoutGuide; // @synthesize navigationBarLayoutGuide=_navigationBarLayoutGuide;
@property(readonly, nonatomic) ICQLink *doneLink; // @synthesize doneLink=_doneLink;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIButton *checkmarkButton; // @synthesize checkmarkButton=_checkmarkButton;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <ICQPageDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) _ICQUpgradeCompletePageSpecification *upgradeCompletePageSpecification; // @synthesize upgradeCompletePageSpecification=_upgradeCompletePageSpecification;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)upgradeCompleteSpecification;
- (void)doneButtonTapped:(id)arg1;
- (double)_superGetTopMargin;
- (id)initWithFrame:(struct CGRect)arg1;

@end
