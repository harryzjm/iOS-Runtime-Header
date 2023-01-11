//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>

@class HFItem, NSArray, NSLayoutConstraint, NSString, UIActivityIndicatorView, UIButton, UILabel, UIStackView, UITextView;
@protocol HUResizableCellDelegate;

@interface HUServiceDetailsHeaderCell : UITableViewCell <HUCellProtocol>
{
    HFItem *_item;
    id <HUResizableCellDelegate> _resizingDelegate;
    UIButton *_actionButton;
    UITextView *_messageTextView;
    NSArray *_hiddenMessageTextViewConstraints;
    NSArray *_visibleMessageTextViewConstraints;
    UIStackView *_titleSpinnerStackView;
    UIActivityIndicatorView *_checkingForUpdateSpinner;
    UILabel *_titleLabel;
    NSLayoutConstraint *_spinnerBottomConstraint;
    NSLayoutConstraint *_messageBottomConstraint;
    NSLayoutConstraint *_actionBottomConstraint;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *actionBottomConstraint; // @synthesize actionBottomConstraint=_actionBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *messageBottomConstraint; // @synthesize messageBottomConstraint=_messageBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *spinnerBottomConstraint; // @synthesize spinnerBottomConstraint=_spinnerBottomConstraint;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIActivityIndicatorView *checkingForUpdateSpinner; // @synthesize checkingForUpdateSpinner=_checkingForUpdateSpinner;
@property(retain, nonatomic) UIStackView *titleSpinnerStackView; // @synthesize titleSpinnerStackView=_titleSpinnerStackView;
@property(retain, nonatomic) NSArray *visibleMessageTextViewConstraints; // @synthesize visibleMessageTextViewConstraints=_visibleMessageTextViewConstraints;
@property(retain, nonatomic) NSArray *hiddenMessageTextViewConstraints; // @synthesize hiddenMessageTextViewConstraints=_hiddenMessageTextViewConstraints;
@property(retain, nonatomic) UITextView *messageTextView; // @synthesize messageTextView=_messageTextView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate; // @synthesize resizingDelegate=_resizingDelegate;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (id)_visibleMessageTextViewConstraints;
- (id)_hiddenMessageTextViewConstraints;
- (void)_updateRequiredHeightIfNeeded;
- (void)_updateErrorLabelConstraints;
- (void)_configureConstraints;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)layoutSubviews;
- (void)_setCornerRadius:(double)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
