//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, AMSKeychainOptions, AMSProcessInfo, AMSPurchaseInfo, NSDictionary, NSMutableDictionary, NSString;
@protocol AMSBagProtocol, AMSResponseDecoding;

__attribute__((visibility("hidden")))
@interface AMSURLRequestProperties : NSObject
{
    _Bool _disableBiometricsResponseHandling;
    _Bool _disableLoadURLMetrics;
    _Bool _disableResponseDecoding;
    _Bool _knownToBeTrusted;
    _Bool _remoteSecuritySigningEnabled;
    _Bool _shouldSetCookiesFromResponse;
    _Bool _shouldSetStorefrontFromResponse;
    ACAccount *_account;
    NSDictionary *_additionalMetrics;
    long long _anisetteType;
    id <AMSBagProtocol> _bag;
    AMSProcessInfo *_clientInfo;
    long long _dialogOptions;
    NSString *_gsTokenIdentifier;
    AMSKeychainOptions *_keychainOptions;
    NSString *_logUUID;
    long long _maxRetryCount;
    long long _mescalType;
    AMSPurchaseInfo *_purchaseInfo;
    id <AMSResponseDecoding> _responseDecoder;
    long long _reversePushType;
    NSMutableDictionary *_userInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool shouldSetStorefrontFromResponse; // @synthesize shouldSetStorefrontFromResponse=_shouldSetStorefrontFromResponse;
@property(nonatomic) _Bool shouldSetCookiesFromResponse; // @synthesize shouldSetCookiesFromResponse=_shouldSetCookiesFromResponse;
@property(nonatomic) long long reversePushType; // @synthesize reversePushType=_reversePushType;
@property(retain, nonatomic) id <AMSResponseDecoding> responseDecoder; // @synthesize responseDecoder=_responseDecoder;
@property(nonatomic) _Bool remoteSecuritySigningEnabled; // @synthesize remoteSecuritySigningEnabled=_remoteSecuritySigningEnabled;
@property(retain, nonatomic) AMSPurchaseInfo *purchaseInfo; // @synthesize purchaseInfo=_purchaseInfo;
@property(nonatomic) long long mescalType; // @synthesize mescalType=_mescalType;
@property(nonatomic) long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property(copy, nonatomic) NSString *logUUID; // @synthesize logUUID=_logUUID;
@property(nonatomic) _Bool knownToBeTrusted; // @synthesize knownToBeTrusted=_knownToBeTrusted;
@property(retain, nonatomic) AMSKeychainOptions *keychainOptions; // @synthesize keychainOptions=_keychainOptions;
@property(retain, nonatomic) NSString *gsTokenIdentifier; // @synthesize gsTokenIdentifier=_gsTokenIdentifier;
@property(nonatomic) _Bool disableResponseDecoding; // @synthesize disableResponseDecoding=_disableResponseDecoding;
@property(nonatomic) _Bool disableLoadURLMetrics; // @synthesize disableLoadURLMetrics=_disableLoadURLMetrics;
@property(nonatomic) _Bool disableBiometricsResponseHandling; // @synthesize disableBiometricsResponseHandling=_disableBiometricsResponseHandling;
@property(nonatomic) long long dialogOptions; // @synthesize dialogOptions=_dialogOptions;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(nonatomic) long long anisetteType; // @synthesize anisetteType=_anisetteType;
@property(copy, nonatomic) NSDictionary *additionalMetrics; // @synthesize additionalMetrics=_additionalMetrics;
@property(copy, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

