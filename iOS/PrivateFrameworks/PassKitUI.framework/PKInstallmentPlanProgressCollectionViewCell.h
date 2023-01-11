//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PKCurrencyAmount, PKProgressBar, UIImageView, UILabel;

@interface PKInstallmentPlanProgressCollectionViewCell
{
    UILabel *_leadingTitleLabel;
    UILabel *_leadingAmountLabel;
    UILabel *_trailingTitleLabel;
    UILabel *_trailingAmountLabel;
    PKProgressBar *_progressBar;
    UIImageView *_completeCheckmark;
    UILabel *_completeLabel;
    UILabel *_detailLabel;
    _Bool _complete;
    NSString *_leadingTitle;
    NSString *_trailingTitle;
    PKCurrencyAmount *_leadingAmount;
    PKCurrencyAmount *_trailingAmount;
    NSString *_subtitleText;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
@property(copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(retain, nonatomic) PKCurrencyAmount *trailingAmount; // @synthesize trailingAmount=_trailingAmount;
@property(retain, nonatomic) PKCurrencyAmount *leadingAmount; // @synthesize leadingAmount=_leadingAmount;
@property(copy, nonatomic) NSString *trailingTitle; // @synthesize trailingTitle=_trailingTitle;
@property(copy, nonatomic) NSString *leadingTitle; // @synthesize leadingTitle=_leadingTitle;
@property(nonatomic) double progressAmount;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
