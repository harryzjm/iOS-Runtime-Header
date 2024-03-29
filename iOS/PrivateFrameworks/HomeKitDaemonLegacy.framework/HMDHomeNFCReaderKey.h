//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface HMDHomeNFCReaderKey : HMFObject
{
    NSData *_publicKeyExternalRepresentation;
    NSData *_privateKey;
    NSData *_identifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)publicKeyWithPublicKeyExternalRepresentation:(id)arg1;
+ (id)identifierForKey:(id)arg1;
+ (id)createWithExternalRepresentation:(id)arg1;
+ (id)createRandomKey;
+ (id)createWithKeychainItem:(id)arg1;
+ (id)keychainItemAccountAttributeValueWithHome:(id)arg1 keyIdentifier:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy) NSData *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSData *privateKey; // @synthesize privateKey=_privateKey;
@property(readonly, copy) NSData *publicKeyExternalRepresentation; // @synthesize publicKeyExternalRepresentation=_publicKeyExternalRepresentation;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSData *externalRepresentation;
@property(readonly, copy) NSData *publicKey;
- (id)initWithIdentifier:(id)arg1 privateKey:(id)arg2 publicKeyExternalRepresentation:(id)arg3;
- (id)createKeychainItemForHome:(id)arg1;

@end

