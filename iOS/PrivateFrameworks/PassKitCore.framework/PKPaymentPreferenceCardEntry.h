//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString, PKPaymentApplication, PKPaymentPass;

@interface PKPaymentPreferenceCardEntry : NSObject
{
    _Bool _shouldShowCardUI;
    _Bool _isSelectable;
    PKPaymentPass *_pass;
    PKPaymentApplication *_paymentApplication;
    NSString *_displayName;
}

@property(nonatomic) _Bool isSelectable; // @synthesize isSelectable=_isSelectable;
@property(nonatomic) _Bool shouldShowCardUI; // @synthesize shouldShowCardUI=_shouldShowCardUI;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) PKPaymentApplication *paymentApplication; // @synthesize paymentApplication=_paymentApplication;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;

@end

