//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString;

@interface PKPaymentMerchantSession : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _epochTimestamp;
    unsigned long long _expiresAt;
    NSString *_merchantSessionIdentifier;
    NSString *_nonce;
    NSString *_merchantIdentifier;
    NSString *_operationalAnalyticsIdentifier;
    NSString *_domain;
    NSString *_displayName;
    NSString *_initiativeContext;
    NSString *_initiative;
    NSData *_ampEnrollmentPinning;
    NSArray *_signedFields;
    NSData *_signature;
    NSString *_retryNonce;
}

+ (_Bool)supportsSecureCoding;
+ (long long)version;
+ (id)paymentMerchantSessionWithProtobuf:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *retryNonce; // @synthesize retryNonce=_retryNonce;
@property(readonly, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) NSArray *signedFields; // @synthesize signedFields=_signedFields;
@property(readonly, nonatomic) NSData *ampEnrollmentPinning; // @synthesize ampEnrollmentPinning=_ampEnrollmentPinning;
@property(readonly, nonatomic) NSString *initiative; // @synthesize initiative=_initiative;
@property(readonly, nonatomic) NSString *initiativeContext; // @synthesize initiativeContext=_initiativeContext;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) NSString *operationalAnalyticsIdentifier; // @synthesize operationalAnalyticsIdentifier=_operationalAnalyticsIdentifier;
@property(readonly, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
@property(readonly, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(readonly, nonatomic) NSString *merchantSessionIdentifier; // @synthesize merchantSessionIdentifier=_merchantSessionIdentifier;
@property(readonly, nonatomic) unsigned long long expiresAt; // @synthesize expiresAt=_expiresAt;
@property(readonly, nonatomic) unsigned long long epochTimestamp; // @synthesize epochTimestamp=_epochTimestamp;
- (id)signedData;
- (_Bool)_isModern;
- (_Bool)supportsURL:(id)arg1;
- (_Bool)isEqualToPaymentMerchantSession:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 expiresAt:(unsigned long long)arg5 displayName:(id)arg6 initiativeContext:(id)arg7 initiative:(id)arg8 ampEnrollmentPinning:(id)arg9 operationalAnalyticsIdentifier:(id)arg10 signedFields:(id)arg11 signature:(id)arg12;
- (id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 expiresAt:(unsigned long long)arg5 displayName:(id)arg6 initiativeContext:(id)arg7 initiative:(id)arg8 signedFields:(id)arg9 signature:(id)arg10;
- (id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 expiresAt:(unsigned long long)arg5 domain:(id)arg6 displayName:(id)arg7 signature:(id)arg8;
- (id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 domain:(id)arg5 displayName:(id)arg6 signature:(id)arg7;
- (id)init;
- (id)protobuf;

@end
