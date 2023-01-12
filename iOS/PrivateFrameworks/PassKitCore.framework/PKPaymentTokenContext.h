//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDecimalNumber, NSString;

@interface PKPaymentTokenContext : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_merchantIdentifier;
    NSString *_externalIdentifier;
    NSString *_merchantName;
    NSString *_merchantDomain;
    NSDecimalNumber *_amount;
}

+ (long long)version;
+ (_Bool)supportsSecureCoding;
+ (id)contextWithProtobuf:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *merchantDomain; // @synthesize merchantDomain=_merchantDomain;
@property(copy, nonatomic) NSString *merchantName; // @synthesize merchantName=_merchantName;
@property(copy, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier=_externalIdentifier;
@property(copy, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToPaymentTokenContext:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMerchantIdentifier:(id)arg1 externalIdentifier:(id)arg2 merchantName:(id)arg3 merchantDomain:(id)arg4 amount:(id)arg5;
- (id)protobuf;

@end
