//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKBusinessChatContext-Protocol.h>

@class NSString, PKPaymentPass;

@interface PKBusinessChatPhysicalCardContext : NSObject <PKBusinessChatContext>
{
    PKPaymentPass *_paymentPass;
    long long _intent;
}

- (void).cxx_destruct;
- (_Bool)requiresAuthorization;
- (id)bodyText;
- (id)groupParameters;
- (id)intentParameters;
- (id)businessIdentifier;
- (id)initWithPaymentPass:(id)arg1 intent:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
