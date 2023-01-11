//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKCloudStoreCoding-Protocol.h>

@class NSSet;

@interface PKPaymentTransactionFees : NSObject <NSSecureCoding, PKCloudStoreCoding>
{
    NSSet *_fees;
}

+ (id)_feesSetFromJsonString:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSSet *fees; // @synthesize fees=_fees;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqualToFees:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)recordTypesAndNames;
- (unsigned long long)itemType;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)jsonString;
- (id)jsonArrayRepresentation;
- (id)initWithJsonString:(id)arg1;
- (id)initWithFeeItems:(id)arg1;

@end

