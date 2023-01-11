//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSURL;

@interface AMSCardRegistrationResult : NSObject
{
    NSData *_cardData;
    NSURL *_brokerURL;
    NSURL *_paymentServicesURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *paymentServicesURL; // @synthesize paymentServicesURL=_paymentServicesURL;
@property(readonly, nonatomic) NSURL *brokerURL; // @synthesize brokerURL=_brokerURL;
@property(readonly, nonatomic) NSData *cardData; // @synthesize cardData=_cardData;
- (id)initWithCardRegistrationResponse:(id)arg1;

@end
