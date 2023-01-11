//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKPaymentAuthorizationLayout : NSObject
{
    _Bool _isAMPPayment;
    _Bool _isInstallment;
    _Bool _isPaymentSummaryPinned;
    _Bool _shouldSuppressTotal;
    long long _style;
    double _contentHorizontalMargin;
    double _valueLeftMargin;
    double _glyphDimension;
    unsigned long long _requestType;
    unsigned long long _requestor;
    NSString *_localizedNavigationTitle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldSuppressTotal; // @synthesize shouldSuppressTotal=_shouldSuppressTotal;
@property(readonly, nonatomic) NSString *localizedNavigationTitle; // @synthesize localizedNavigationTitle=_localizedNavigationTitle;
@property(readonly, nonatomic) _Bool isPaymentSummaryPinned; // @synthesize isPaymentSummaryPinned=_isPaymentSummaryPinned;
@property(readonly, nonatomic) _Bool isInstallment; // @synthesize isInstallment=_isInstallment;
@property(readonly, nonatomic) _Bool isAMPPayment; // @synthesize isAMPPayment=_isAMPPayment;
@property(readonly, nonatomic) unsigned long long requestor; // @synthesize requestor=_requestor;
@property(readonly, nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(readonly, nonatomic) double glyphDimension; // @synthesize glyphDimension=_glyphDimension;
@property(readonly, nonatomic) double valueLeftMargin; // @synthesize valueLeftMargin=_valueLeftMargin;
@property(readonly, nonatomic) double contentHorizontalMargin; // @synthesize contentHorizontalMargin=_contentHorizontalMargin;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (id)initWithStyle:(long long)arg1 paymentRequest:(id)arg2;

@end
