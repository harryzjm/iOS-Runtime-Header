//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OctagonTrust/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSUUID;

@interface OTInheritanceKey : NSObject <NSSecureCoding>
{
    NSUUID *_uuid;
    NSData *_wrappingKeyData;
    NSString *_wrappingKeyString;
    NSData *_wrappedKeyData;
    NSString *_wrappedKeyString;
    NSData *_claimTokenData;
    NSString *_claimTokenString;
    NSData *_recoveryKeyData;
}

+ (_Bool)supportsSecureCoding;
+ (id)parseBase32:(id)arg1 checksumSize:(unsigned long long)arg2 error:(id *)arg3;
+ (id)printableWithData:(id)arg1 checksumSize:(unsigned long long)arg2 error:(id *)arg3;
+ (id)unbase32:(const char *)arg1 len:(unsigned long long)arg2;
+ (id)base32:(const char *)arg1 len:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *recoveryKeyData; // @synthesize recoveryKeyData=_recoveryKeyData;
@property(readonly, nonatomic) NSString *claimTokenString; // @synthesize claimTokenString=_claimTokenString;
@property(readonly, nonatomic) NSData *claimTokenData; // @synthesize claimTokenData=_claimTokenData;
@property(readonly, nonatomic) NSString *wrappedKeyString; // @synthesize wrappedKeyString=_wrappedKeyString;
@property(readonly, nonatomic) NSData *wrappedKeyData; // @synthesize wrappedKeyData=_wrappedKeyData;
@property(readonly, nonatomic) NSString *wrappingKeyString; // @synthesize wrappingKeyString=_wrappingKeyString;
@property(readonly, nonatomic) NSData *wrappingKeyData; // @synthesize wrappingKeyData=_wrappingKeyData;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isRecoveryKeyEqual:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToOTInheritanceKey:(id)arg1;
- (id)initWithWrappedKeyString:(id)arg1 wrappingKeyData:(id)arg2 uuid:(id)arg3 error:(id *)arg4;
- (id)initWithWrappedKeyData:(id)arg1 wrappingKeyString:(id)arg2 uuid:(id)arg3 error:(id *)arg4;
- (id)initWithWrappedKeyData:(id)arg1 wrappingKeyData:(id)arg2 uuid:(id)arg3 error:(id *)arg4;
- (_Bool)unwrapWithError:(id *)arg1;
- (id)initWithUUID:(id)arg1 error:(id *)arg2;
- (_Bool)generateWrappingWithError:(id *)arg1;

@end
