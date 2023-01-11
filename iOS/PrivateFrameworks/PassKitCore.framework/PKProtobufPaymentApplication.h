//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSString;

@interface PKProtobufPaymentApplication : PBCodable <NSCopying>
{
    long long _inAppPINRequiredAmount;
    long long _inAppPriority;
    NSString *_applicationIdentifier;
    NSString *_displayName;
    NSString *_dpanIdentifier;
    NSString *_dpanSuffix;
    NSString *_inAppPINRequiredCurrency;
    unsigned int _paymentNetworkIdentifier;
    unsigned int _paymentType;
    NSString *_sanitizedDpan;
    NSString *_secureElementIdenfitier;
    unsigned int _state;
    NSString *_suspendedReason;
    _Bool _auxiliary;
    _Bool _inAppPINRequired;
    _Bool _supportsContactlessPayment;
    _Bool _supportsInAppPayment;
    struct {
        unsigned int inAppPINRequiredAmount:1;
        unsigned int inAppPriority:1;
        unsigned int paymentNetworkIdentifier:1;
        unsigned int paymentType:1;
        unsigned int state:1;
        unsigned int auxiliary:1;
        unsigned int inAppPINRequired:1;
        unsigned int supportsContactlessPayment:1;
        unsigned int supportsInAppPayment:1;
    } _has;
}

@property(nonatomic) long long inAppPriority; // @synthesize inAppPriority=_inAppPriority;
@property(nonatomic) _Bool auxiliary; // @synthesize auxiliary=_auxiliary;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) unsigned int paymentType; // @synthesize paymentType=_paymentType;
@property(retain, nonatomic) NSString *inAppPINRequiredCurrency; // @synthesize inAppPINRequiredCurrency=_inAppPINRequiredCurrency;
@property(nonatomic) long long inAppPINRequiredAmount; // @synthesize inAppPINRequiredAmount=_inAppPINRequiredAmount;
@property(nonatomic) _Bool inAppPINRequired; // @synthesize inAppPINRequired=_inAppPINRequired;
@property(nonatomic) unsigned int paymentNetworkIdentifier; // @synthesize paymentNetworkIdentifier=_paymentNetworkIdentifier;
@property(nonatomic) _Bool supportsInAppPayment; // @synthesize supportsInAppPayment=_supportsInAppPayment;
@property(nonatomic) _Bool supportsContactlessPayment; // @synthesize supportsContactlessPayment=_supportsContactlessPayment;
@property(retain, nonatomic) NSString *suspendedReason; // @synthesize suspendedReason=_suspendedReason;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *secureElementIdenfitier; // @synthesize secureElementIdenfitier=_secureElementIdenfitier;
@property(retain, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(retain, nonatomic) NSString *sanitizedDpan; // @synthesize sanitizedDpan=_sanitizedDpan;
@property(retain, nonatomic) NSString *dpanSuffix; // @synthesize dpanSuffix=_dpanSuffix;
@property(retain, nonatomic) NSString *dpanIdentifier; // @synthesize dpanIdentifier=_dpanIdentifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasInAppPriority;
@property(nonatomic) _Bool hasAuxiliary;
@property(readonly, nonatomic) _Bool hasDisplayName;
@property(nonatomic) _Bool hasPaymentType;
@property(readonly, nonatomic) _Bool hasInAppPINRequiredCurrency;
@property(nonatomic) _Bool hasInAppPINRequiredAmount;
@property(nonatomic) _Bool hasInAppPINRequired;
@property(nonatomic) _Bool hasPaymentNetworkIdentifier;
@property(nonatomic) _Bool hasSupportsInAppPayment;
@property(nonatomic) _Bool hasSupportsContactlessPayment;
@property(readonly, nonatomic) _Bool hasSuspendedReason;
@property(nonatomic) _Bool hasState;
@property(readonly, nonatomic) _Bool hasSecureElementIdenfitier;
@property(readonly, nonatomic) _Bool hasApplicationIdentifier;
@property(readonly, nonatomic) _Bool hasSanitizedDpan;
@property(readonly, nonatomic) _Bool hasDpanSuffix;
@property(readonly, nonatomic) _Bool hasDpanIdentifier;

@end

