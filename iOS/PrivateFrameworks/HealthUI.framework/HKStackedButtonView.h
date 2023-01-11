//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, NSLayoutYAxisAnchor, NSString, UIBlurEffect, UILabel;
@protocol HKStackedButtonViewDelegate;

@interface HKStackedButtonView : UIView
{
    _Bool _bottomAdjustsForHomeButtonlessScreen;
    _Bool _blurHidden;
    NSArray *_buttons;
    long long _lastButtonMode;
    NSArray *_titles;
    NSArray *_styles;
    long long _buttonMode;
    NSString *_disclaimerText;
    UILabel *_disclaimerTextLabel;
    UIBlurEffect *_backgroundBlurEffect;
    UIView *_backgroundBlurView;
    NSLayoutConstraint *_backgroundBlurViewLeadingConstraint;
    NSLayoutConstraint *_backgroundBlurViewTrailingConstraint;
    NSLayoutYAxisAnchor *_firstTopAnchor;
    double _firstTopConstant;
    NSLayoutConstraint *_bottomConstraint;
    id <HKStackedButtonViewDelegate> _delegate;
}

+ (double)_buttonSpacingForValue:(double)arg1;
+ (double)_disclaimerTextSpacingForValue:(double)arg1;
+ (id)_disclaimerTextFont;
+ (id)buddyStackedButtonViewWithTitles:(id)arg1 disclaimerText:(id)arg2 delegate:(id)arg3;
@property(nonatomic) __weak id <HKStackedButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(nonatomic) double firstTopConstant; // @synthesize firstTopConstant=_firstTopConstant;
@property(retain, nonatomic) NSLayoutYAxisAnchor *firstTopAnchor; // @synthesize firstTopAnchor=_firstTopAnchor;
@property(retain, nonatomic) NSLayoutConstraint *backgroundBlurViewTrailingConstraint; // @synthesize backgroundBlurViewTrailingConstraint=_backgroundBlurViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *backgroundBlurViewLeadingConstraint; // @synthesize backgroundBlurViewLeadingConstraint=_backgroundBlurViewLeadingConstraint;
@property(retain, nonatomic) UIView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property(retain, nonatomic) UIBlurEffect *backgroundBlurEffect; // @synthesize backgroundBlurEffect=_backgroundBlurEffect;
@property(retain, nonatomic) UILabel *disclaimerTextLabel; // @synthesize disclaimerTextLabel=_disclaimerTextLabel;
@property(copy, nonatomic) NSString *disclaimerText; // @synthesize disclaimerText=_disclaimerText;
@property(nonatomic) long long buttonMode; // @synthesize buttonMode=_buttonMode;
@property(copy, nonatomic) NSArray *styles; // @synthesize styles=_styles;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(nonatomic, getter=isBlurHidden) _Bool blurHidden; // @synthesize blurHidden=_blurHidden;
@property(nonatomic) _Bool bottomAdjustsForHomeButtonlessScreen; // @synthesize bottomAdjustsForHomeButtonlessScreen=_bottomAdjustsForHomeButtonlessScreen;
@property(nonatomic) long long lastButtonMode; // @synthesize lastButtonMode=_lastButtonMode;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (void).cxx_destruct;
- (void)_updateBottomConstraint;
- (void)_createViewBottomConstraint;
- (void)_assignConstraintsForButtons;
- (void)_setUpDisclaimerText;
- (id)_createButtons;
- (void)_setUpBlurEffect;
- (void)_setUpButtons;
- (void)actionButtonTapped:(id)arg1;
- (void)alignBlurViewHorizontalConstraintsWithView:(id)arg1;
- (id)initWithButtonTitles:(id)arg1 styles:(id)arg2 disclaimerText:(id)arg3 delegate:(id)arg4;

@end

