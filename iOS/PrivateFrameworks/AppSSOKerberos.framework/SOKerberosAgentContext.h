//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, SOADSiteDiscovery, SOAuthorizationWrapper, SOFullProfile, SOKerberosExtensionData, SOKerberosRealmSettings, SONetworkIdentity;

@interface SOKerberosAgentContext : NSObject
{
    _Bool _authRequestPending;
    _Bool _discoveryInProgress;
    NSOperationQueue *_contextNetworkWorkQueue;
    NSOperationQueue *_contextKerberosWorkQueue;
    SOFullProfile *_profile;
    SOKerberosRealmSettings *_settings;
    SOKerberosExtensionData *_extensionData;
    SONetworkIdentity *_identity;
    SOADSiteDiscovery *_siteDiscovery;
    SOAuthorizationWrapper *_authWrapper;
    SOAuthorizationWrapper *_passwordSyncAuthWrapper;
    SOAuthorizationWrapper *_passwordChangeAuthWrapper;
}

- (void).cxx_destruct;
@property _Bool discoveryInProgress; // @synthesize discoveryInProgress=_discoveryInProgress;
@property(retain) SOAuthorizationWrapper *passwordChangeAuthWrapper; // @synthesize passwordChangeAuthWrapper=_passwordChangeAuthWrapper;
@property(retain) SOAuthorizationWrapper *passwordSyncAuthWrapper; // @synthesize passwordSyncAuthWrapper=_passwordSyncAuthWrapper;
@property(retain) SOAuthorizationWrapper *authWrapper; // @synthesize authWrapper=_authWrapper;
@property(retain) SOADSiteDiscovery *siteDiscovery; // @synthesize siteDiscovery=_siteDiscovery;
@property(retain) SONetworkIdentity *identity; // @synthesize identity=_identity;
@property(retain) SOKerberosExtensionData *extensionData; // @synthesize extensionData=_extensionData;
@property(retain) SOKerberosRealmSettings *settings; // @synthesize settings=_settings;
@property(retain) SOFullProfile *profile; // @synthesize profile=_profile;
@property(readonly) NSOperationQueue *contextKerberosWorkQueue; // @synthesize contextKerberosWorkQueue=_contextKerberosWorkQueue;
@property(readonly) NSOperationQueue *contextNetworkWorkQueue; // @synthesize contextNetworkWorkQueue=_contextNetworkWorkQueue;
@property _Bool authRequestPending; // @synthesize authRequestPending=_authRequestPending;
- (id)initWithProfile:(id)arg1;

@end
