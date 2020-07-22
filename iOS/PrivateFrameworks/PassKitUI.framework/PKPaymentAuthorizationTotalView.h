//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, PKPaymentAuthorizationLayout, UIActivityIndicatorView, UILabel;

@interface PKPaymentAuthorizationTotalView : UIView
{
    UILabel *_labelView;
    UILabel *_valueView;
    UIActivityIndicatorView *_processingIndicator;
    UIView *_separatorView;
    NSLayoutConstraint *_leftMarginConstraint;
    NSLayoutConstraint *_rightMarginConstraint;
    NSLayoutConstraint *_labelBaselineConstraint;
    _Bool _isPendingTotal;
    _Bool _processing;
    PKPaymentAuthorizationLayout *_layout;
    long long _style;
    long long _labelNumberOfLines;
}

@property(nonatomic) long long labelNumberOfLines; // @synthesize labelNumberOfLines=_labelNumberOfLines;
@property(nonatomic, getter=isProcessing) _Bool processing; // @synthesize processing=_processing;
@property(nonatomic) _Bool isPendingTotal; // @synthesize isPendingTotal=_isPendingTotal;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) PKPaymentAuthorizationLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (id)_valueAttributedStringWithString:(id)arg1;
- (id)_labelAttributedStringWithString:(id)arg1;
- (void)_prepareConstraints;
- (double)_initialLeading;
- (void)updateConstraints;
- (_Bool)_hasAccessibilityLargeText;
- (void)_createSubviews;
- (void)setLabel:(id)arg1 value:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

