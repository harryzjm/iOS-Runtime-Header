//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PKPaymentCredential, PKPaymentPass, UIImage;

@interface PKPaymentCredentialCache : NSObject
{
    _Bool _isSelected;
    PKPaymentCredential *_credential;
    UIImage *_passSnapshot;
    PKPaymentPass *_paymentPass;
}

@property(retain, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) UIImage *passSnapshot; // @synthesize passSnapshot=_passSnapshot;
@property(retain, nonatomic) PKPaymentCredential *credential; // @synthesize credential=_credential;
- (void).cxx_destruct;

@end
