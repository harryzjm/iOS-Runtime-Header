//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SFIdentityAttributes, _SFCertificate, _SFKeyPair, _SFPublicKey;

@interface _SFIdentity : NSObject
{
    id _identityInternal;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) SFIdentityAttributes *attributes;
@property(retain, nonatomic) _SFCertificate *certificate;
@property(retain, nonatomic) _SFKeyPair *keyPair;
@property(readonly, nonatomic) _SFPublicKey *publicKey;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPair:(id)arg1 certificate:(id)arg2;
- (id)initWithPublicKey:(id)arg1 certificate:(id)arg2;
- (id)initWithKeyPair:(id)arg1;
- (id)initWithPublicKey:(id)arg1;

@end

