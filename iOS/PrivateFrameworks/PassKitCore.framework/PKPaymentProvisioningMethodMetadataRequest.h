//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PKPaymentProvisioningMethodMetadataRequest
{
    NSString *_productIdentifier;
    NSString *_provisioningMethod;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *provisioningMethod; // @synthesize provisioningMethod=_provisioningMethod;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)initWithProductIdentifier:(id)arg1 provisioningMethod:(id)arg2;

@end
