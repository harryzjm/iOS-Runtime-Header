//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKit/NSSecureCoding-Protocol.h>

@class AKAnisetteData, AKDevice, NSArray, NSNumber, NSString;
@protocol AKAnisetteServiceProtocol;

@interface AKAppleIDServerResourceLoadDelegate : NSObject <NSSecureCoding>
{
    NSString *_altDSID;
    _Bool _shouldSendEphemeralAuthHeader;
    _Bool _shouldSendICSCIntentHeader;
    _Bool _shouldSendLocalUserHasAppleIDLoginHeader;
    _Bool _shouldSendPhoneNumber;
    _Bool _shouldSendSigningHeaders;
    NSString *_serviceToken;
    NSString *_phoneNumberCertificate;
    NSArray *_phoneInformation;
    long long _serviceType;
    NSArray *_loggedInServices;
    NSString *_passwordResetToken;
    NSString *_continuationToken;
    NSString *_heartbeatToken;
    NSString *_identityToken;
    NSString *_proxyAppName;
    NSString *_clientAppName;
    NSNumber *_hasEmptyPasswordOverride;
    NSString *_securityUpgradeContext;
    NSString *_followupItems;
    AKDevice *_proxiedDevice;
    id <AKAnisetteServiceProtocol> _anisetteDataProvider;
    AKAnisetteData *_proxiedDeviceAnisetteData;
}

+ (unsigned long long)signalFromServerResponse:(id)arg1;
+ (id)sharedController;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool shouldSendSigningHeaders; // @synthesize shouldSendSigningHeaders=_shouldSendSigningHeaders;
@property(retain, nonatomic) AKAnisetteData *proxiedDeviceAnisetteData; // @synthesize proxiedDeviceAnisetteData=_proxiedDeviceAnisetteData;
@property(retain, nonatomic) id <AKAnisetteServiceProtocol> anisetteDataProvider; // @synthesize anisetteDataProvider=_anisetteDataProvider;
@property(retain, nonatomic) AKDevice *proxiedDevice; // @synthesize proxiedDevice=_proxiedDevice;
@property(copy, nonatomic) NSString *followupItems; // @synthesize followupItems=_followupItems;
@property(copy, nonatomic) NSString *securityUpgradeContext; // @synthesize securityUpgradeContext=_securityUpgradeContext;
@property(retain, nonatomic) NSNumber *hasEmptyPasswordOverride; // @synthesize hasEmptyPasswordOverride=_hasEmptyPasswordOverride;
@property(copy, nonatomic) NSString *clientAppName; // @synthesize clientAppName=_clientAppName;
@property(copy, nonatomic) NSString *proxyAppName; // @synthesize proxyAppName=_proxyAppName;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSString *identityToken; // @synthesize identityToken=_identityToken;
@property(copy, nonatomic) NSString *heartbeatToken; // @synthesize heartbeatToken=_heartbeatToken;
@property(copy, nonatomic) NSString *continuationToken; // @synthesize continuationToken=_continuationToken;
@property(copy, nonatomic) NSString *passwordResetToken; // @synthesize passwordResetToken=_passwordResetToken;
@property(copy, nonatomic) NSArray *loggedInServices; // @synthesize loggedInServices=_loggedInServices;
@property(nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSArray *phoneInformation; // @synthesize phoneInformation=_phoneInformation;
@property(copy, nonatomic) NSString *phoneNumberCertificate; // @synthesize phoneNumberCertificate=_phoneNumberCertificate;
@property(nonatomic) _Bool shouldSendPhoneNumber; // @synthesize shouldSendPhoneNumber=_shouldSendPhoneNumber;
@property(nonatomic) _Bool shouldSendLocalUserHasAppleIDLoginHeader; // @synthesize shouldSendLocalUserHasAppleIDLoginHeader=_shouldSendLocalUserHasAppleIDLoginHeader;
@property(nonatomic) _Bool shouldSendICSCIntentHeader; // @synthesize shouldSendICSCIntentHeader=_shouldSendICSCIntentHeader;
@property(nonatomic) _Bool shouldSendEphemeralAuthHeader; // @synthesize shouldSendEphemeralAuthHeader=_shouldSendEphemeralAuthHeader;
@property(copy, nonatomic) NSString *serviceToken; // @synthesize serviceToken=_serviceToken;
- (void).cxx_destruct;
- (_Bool)isResponseFinalForHSA2ServerFlow:(id)arg1;
- (_Bool)isResponseActionable:(id)arg1;
- (_Bool)isAuthenticationRequired:(id)arg1;
- (_Bool)isResponseFinal:(id)arg1;
- (void)_signWithFeatureOptInHeaders:(id)arg1;
- (void)signRequestWithCommonHeaders:(id)arg1;
- (void)_signRequest:(id)arg1;
- (void)signRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)signRequest:(id)arg1;
@property(nonatomic) _Bool shouldSendAbsintheHeader;
- (id)initWithAltDSID:(id)arg1 identityToken:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

