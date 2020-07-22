//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MCWAPIIdentityCertificatePayload
{
    NSData *_pemData;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(readonly, retain, nonatomic) NSData *pemData; // @synthesize pemData=_pemData;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isIdentity;
- (struct __SecIdentity *)copyIdentityFromKeychain;
- (struct __SecCertificate *)copyCertificate;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end
