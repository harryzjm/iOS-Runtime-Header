//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface AMSUILoadingView
{
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setLoadingText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
