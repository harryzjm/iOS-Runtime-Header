//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DVTDispatchLock, DVTNotificationToken, NSString;

@interface DVTDeveloperPortalDefaults
{
    DVTDispatchLock *_lock;
    DVTNotificationToken *_token;
    NSString *_portalServiceXcodeClientID;
    NSString *_portalServiceXcodeServerClientID;
    NSString *_portalServiceProtocolVersion;
    NSString *_portalServiceHostname;
    NSString *_portalServiceCertificateHostname;
    NSString *_portalServiceHostDescription;
    NSString *_portalServiceEndpoint;
    NSString *_portalServiceBasePath;
}

+ (id)sharedDefaultsWithPortalHostnameOverride:(id)arg1 portalServiceEndpointOverride:(id)arg2 portalServiceBasePathOverride:(id)arg3;
+ (id)sharedDefaults;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *portalServiceBasePath; // @synthesize portalServiceBasePath=_portalServiceBasePath;
@property(readonly, copy, nonatomic) NSString *portalServiceEndpoint; // @synthesize portalServiceEndpoint=_portalServiceEndpoint;
@property(readonly, copy, nonatomic) NSString *portalServiceHostDescription; // @synthesize portalServiceHostDescription=_portalServiceHostDescription;
- (id)descriptionForPortalServiceHostName;
@property(readonly, copy, nonatomic) NSString *portalServiceCertificateHostname; // @synthesize portalServiceCertificateHostname=_portalServiceCertificateHostname;
@property(readonly, copy, nonatomic) NSString *portalServiceHostname; // @synthesize portalServiceHostname=_portalServiceHostname;
@property(readonly, copy, nonatomic) NSString *portalServiceProtocolVersion; // @synthesize portalServiceProtocolVersion=_portalServiceProtocolVersion;
@property(readonly, copy, nonatomic) NSString *portalServiceXcodeServerClientID; // @synthesize portalServiceXcodeServerClientID=_portalServiceXcodeServerClientID;
@property(readonly, copy, nonatomic) NSString *portalServiceXcodeClientID; // @synthesize portalServiceXcodeClientID=_portalServiceXcodeClientID;
- (id)_stringForKey:(id)arg1 legacyKey:(id)arg2;
- (void)dealloc;
- (id)init;

@end

