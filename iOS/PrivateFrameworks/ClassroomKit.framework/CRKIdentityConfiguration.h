//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSCopying-Protocol.h>
#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface CRKIdentityConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _createsCertificateAuthority;
    _Bool _addsClientAuthAndServerAuthEKUs;
    unsigned int _hashingAlgorithm;
    NSString *_commonName;
    long long _keySizeInBits;
    NSString *_emailAddress;
}

+ (_Bool)defaultCreatesCertificateAuthority;
+ (unsigned int)defaultHashingAlgorithm;
+ (long long)defaultKeySizeInBits;
+ (_Bool)supportsSecureCoding;
+ (id)configurationWithData:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(nonatomic) _Bool addsClientAuthAndServerAuthEKUs; // @synthesize addsClientAuthAndServerAuthEKUs=_addsClientAuthAndServerAuthEKUs;
@property(nonatomic) unsigned int hashingAlgorithm; // @synthesize hashingAlgorithm=_hashingAlgorithm;
@property(nonatomic) _Bool createsCertificateAuthority; // @synthesize createsCertificateAuthority=_createsCertificateAuthority;
@property(nonatomic) long long keySizeInBits; // @synthesize keySizeInBits=_keySizeInBits;
@property(readonly, copy, nonatomic) NSString *commonName; // @synthesize commonName=_commonName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSData *dataRepresentation;
- (id)initWithCommonName:(id)arg1;
- (id)init;

@end
