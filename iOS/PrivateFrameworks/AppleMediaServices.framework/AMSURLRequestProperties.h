//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSCopying-Protocol.h>
#import <AppleMediaServices/NSMutableCopying-Protocol.h>

@class ACAccount, AMSProcessInfo, NSDictionary, NSString;
@protocol AMSResponseDecoding, AMSURLBagContract;

__attribute__((visibility("hidden")))
@interface AMSURLRequestProperties : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _knownToBeTrusted;
    _Bool _shouldSetCookiesFromResponse;
    ACAccount *_account;
    NSDictionary *_additionalMetrics;
    long long _anisetteType;
    id <AMSURLBagContract> _bagContract;
    AMSProcessInfo *_clientInfo;
    long long _dialogOptions;
    NSString *_logUUID;
    long long _mescalType;
    id <AMSResponseDecoding> _responseDecoder;
    long long _reversePushType;
}

@property(nonatomic) _Bool shouldSetCookiesFromResponse; // @synthesize shouldSetCookiesFromResponse=_shouldSetCookiesFromResponse;
@property(nonatomic) long long reversePushType; // @synthesize reversePushType=_reversePushType;
@property(retain, nonatomic) id <AMSResponseDecoding> responseDecoder; // @synthesize responseDecoder=_responseDecoder;
@property(nonatomic) long long mescalType; // @synthesize mescalType=_mescalType;
@property(retain, nonatomic) NSString *logUUID; // @synthesize logUUID=_logUUID;
@property(nonatomic) _Bool knownToBeTrusted; // @synthesize knownToBeTrusted=_knownToBeTrusted;
@property(nonatomic) long long dialogOptions; // @synthesize dialogOptions=_dialogOptions;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain, nonatomic) id <AMSURLBagContract> bagContract; // @synthesize bagContract=_bagContract;
@property(nonatomic) long long anisetteType; // @synthesize anisetteType=_anisetteType;
@property(retain, nonatomic) NSDictionary *additionalMetrics; // @synthesize additionalMetrics=_additionalMetrics;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

