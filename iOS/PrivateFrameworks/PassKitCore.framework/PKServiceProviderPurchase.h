//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString, PKServiceProviderPurchaseData;

@interface PKServiceProviderPurchase : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    unsigned long long _state;
    NSString *_deviceIdentifier;
    NSString *_serviceProviderIdentifier;
    PKServiceProviderPurchaseData *_serviceProviderData;
    NSString *_signature;
    NSArray *_actions;
}

+ (_Bool)supportsSecureCoding;
+ (id)purchaseWithDictionary:(id)arg1;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) PKServiceProviderPurchaseData *serviceProviderData; // @synthesize serviceProviderData=_serviceProviderData;
@property(copy, nonatomic) NSString *serviceProviderIdentifier; // @synthesize serviceProviderIdentifier=_serviceProviderIdentifier;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqualToServiceProviderPurchase:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

