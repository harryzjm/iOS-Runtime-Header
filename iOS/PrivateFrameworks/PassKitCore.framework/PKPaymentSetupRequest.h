//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, PKPaymentSetupConfiguration;

@interface PKPaymentSetupRequest : NSObject <NSSecureCoding>
{
    PKPaymentSetupConfiguration *_configuration;
    NSArray *_paymentSetupFeatures;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *paymentSetupFeatures; // @synthesize paymentSetupFeatures=_paymentSetupFeatures;
@property(retain, nonatomic) PKPaymentSetupConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
