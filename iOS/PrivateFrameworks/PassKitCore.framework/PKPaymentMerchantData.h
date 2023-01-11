//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, PKPaymentMerchantSession;

@interface PKPaymentMerchantData : NSObject
{
    PKPaymentMerchantSession *_merchantSession;
    NSString *_merchantIdentifier;
    NSData *_applicationData;
}

@property(readonly, nonatomic) NSData *applicationData; // @synthesize applicationData=_applicationData;
@property(readonly, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
- (void).cxx_destruct;
- (id)encode;
- (id)init;
- (id)initWithMerchantIdentifier:(id)arg1 applicationData:(id)arg2;
- (id)initWithPaymentRequest:(id)arg1;

@end

