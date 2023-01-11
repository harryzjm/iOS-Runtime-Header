//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSXPCInterface.h>

@interface NSXPCInterface (CX)
+ (id)cx_providerVendorInterface;
+ (id)cx_providerHostInterface;
+ (id)cx_callControllerVendorInterface;
+ (id)cx_callControllerHostInterface;
+ (id)cx_networkExtensionMessageControllerHostInterface;
+ (id)cx_voicemailProviderVendorInterface;
+ (id)cx_voicemailProviderHostInterface;
+ (id)cx_voicemailControllerVendorInterface;
+ (id)cx_voicemailControllerHostInterface;
+ (id)cx_callDirectoryManagerMaintenanceHostInterface;
+ (id)cx_callDirectoryManagerDefaultHostInterface;
+ (id)cx_callDirectoryProviderVendorInterface;
+ (id)cx_callDirectoryProviderHostInterface;
- (id)cx_allowedClasses;
- (void)cx_setAllowedClassesForProviderVendorProtocol;
- (void)cx_setAllowedClassesForProviderHostProtocol;
- (id)_cx_providerAllowedClasses;
- (void)_cx_setAllowedClassesForCallControllerVendorProtocol;
- (void)_cx_setAllowedClassesForCallControllerHostProtocol;
- (id)_cx_callControllerAllowedClasses;
- (void)cx_setAllowedClassesForVoicemailProviderVendorProtocol;
- (void)cx_setAllowedClassesForVoicemailProviderHostProtocol;
- (id)_cx_voicemailProviderAllowedClasses;
- (void)_cx_setAllowedClassesForVoicemailControllerVendorProtocol;
- (void)_cx_setAllowedClassesForVoicemailControllerHostProtocol;
- (id)_cx_voicemailControllerAllowedClasses;
- (id)_cx_callDirectoryManagerAllowedClasses;
- (void)_cx_setAllowedClassesForCallDirectoryManagerDefaultHostProtocol;
- (id)_cx_callDirectoryProviderAllowedClasses;
- (void)_cx_setAllowedClassesForCallDirectoryProviderHostProtocol;
@end
