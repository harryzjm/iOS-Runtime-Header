//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIStackView, WFMultilineBackgroundFadingButton;

@interface WFAutomationTypeExplanationPlatterView : UIView
{
    UIStackView *_stackView;
    UIImageView *_iconView;
    UILabel *_explanationTextLabel;
    WFMultilineBackgroundFadingButton *_button;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WFMultilineBackgroundFadingButton *button; // @synthesize button=_button;
@property(readonly, nonatomic) UILabel *explanationTextLabel; // @synthesize explanationTextLabel=_explanationTextLabel;
@property(readonly, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
- (void)prepareForReuse;
- (id)homeButtonColor;
- (id)homeExplanatoryText;
- (id)homeAutomationIcon;
- (void)setButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)setButtonColor:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setExplanatoryText:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)configureForAutomationType:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
