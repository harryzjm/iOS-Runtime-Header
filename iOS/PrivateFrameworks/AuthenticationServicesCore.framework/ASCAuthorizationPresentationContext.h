//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthenticationServicesCore/NSSecureCoding-Protocol.h>

@class AKAuthorizationRequest, NSArray, NSData, NSMutableArray, NSNumber, NSString;

@interface ASCAuthorizationPresentationContext : NSObject <NSSecureCoding>
{
    NSMutableArray *_loginChoices;
    unsigned long long _requestTypes;
    _Bool _isProxiedRequest;
    _Bool _shouldPlatformCredentialsRequireUserVerification;
    NSString *_appIdentifier;
    NSString *_bundleIdentifier;
    NSString *_teamIdentifier;
    NSString *_serviceName;
    NSArray *_proxiedAssociatedDomains;
    NSData *_proxiedIconData;
    NSNumber *_proxiedIconScale;
    NSString *_proxiedOriginDeviceName;
    AKAuthorizationRequest *_appleIDAuthorizationRequest;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldPlatformCredentialsRequireUserVerification; // @synthesize shouldPlatformCredentialsRequireUserVerification=_shouldPlatformCredentialsRequireUserVerification;
@property(retain, nonatomic) AKAuthorizationRequest *appleIDAuthorizationRequest; // @synthesize appleIDAuthorizationRequest=_appleIDAuthorizationRequest;
@property(copy, nonatomic) NSString *proxiedOriginDeviceName; // @synthesize proxiedOriginDeviceName=_proxiedOriginDeviceName;
@property(copy, nonatomic) NSNumber *proxiedIconScale; // @synthesize proxiedIconScale=_proxiedIconScale;
@property(copy, nonatomic) NSData *proxiedIconData; // @synthesize proxiedIconData=_proxiedIconData;
@property(copy, nonatomic) NSArray *proxiedAssociatedDomains; // @synthesize proxiedAssociatedDomains=_proxiedAssociatedDomains;
@property(nonatomic) _Bool isProxiedRequest; // @synthesize isProxiedRequest=_isProxiedRequest;
@property(readonly, nonatomic) unsigned long long requestTypes; // @synthesize requestTypes=_requestTypes;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(readonly, copy, nonatomic) NSArray *loginChoices; // @synthesize loginChoices=_loginChoices;
@property(readonly, copy, nonatomic) NSString *teamIdentifier; // @synthesize teamIdentifier=_teamIdentifier;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool hasExternalPasswords;
@property(readonly, nonatomic) _Bool isCombinedPublicKeyCredentialRegistrationRequest;
@property(readonly, nonatomic) _Bool isRegistrationRequest;
- (void)updateLoginChoices:(id)arg1;
- (void)addLoginChoice:(id)arg1;
- (id)initWithRequestContext:(id)arg1 appIdentifier:(id)arg2;

@end
