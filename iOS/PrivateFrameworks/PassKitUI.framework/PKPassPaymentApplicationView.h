//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, PKPassPaymentSummaryHeaderView, PKPaymentApplication, PKPaymentPass, PKPaymentService, UISegmentedControl;
@protocol PKPassPaymentApplicationViewDelegate;

@interface PKPassPaymentApplicationView : UIView
{
    PKPassPaymentSummaryHeaderView *_headerView;
    UIView *_horizontalSeparator;
    UISegmentedControl *_segmentedControl;
    PKPaymentService *_paymentService;
    NSArray *_paymentApplications;
    _Bool _showHeader;
    PKPaymentPass *_pass;
    PKPaymentApplication *_selectedApplication;
    id <PKPassPaymentApplicationViewDelegate> _delegate;
}

@property(nonatomic) _Bool showHeader; // @synthesize showHeader=_showHeader;
@property(nonatomic) id <PKPassPaymentApplicationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKPaymentApplication *selectedApplication; // @synthesize selectedApplication=_selectedApplication;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_selectedApplicationDidChange:(id)arg1;
- (id)initWithPass:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
