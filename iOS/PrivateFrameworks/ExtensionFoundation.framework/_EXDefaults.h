//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface _EXDefaults : NSObject
{
}

+ (id)sharedInstance;
@property(readonly) _Bool enforceLegacyExtensionPointAllowList; // @dynamic enforceLegacyExtensionPointAllowList;
@property(readonly) _Bool hostRequiresEntitlements; // @dynamic hostRequiresEntitlements;
@property(readonly) _Bool allowsAppleInternalComponents; // @dynamic allowsAppleInternalComponents;
@property(readonly) _Bool supportExtensionKitConfigPath; // @dynamic supportExtensionKitConfigPath;
@property(readonly) _Bool rejectExtensionRequestsWithInsecureInputItems;
@property(readonly) _Bool preferInProcessDiscovery;
@property(readonly) _Bool useLSDExtensionKitServiceForLaunch;
@property(readonly) _Bool useLSDExtensionKitServiceForDiscovery;
@property(readonly) _Bool appleInternal;
@property(readonly) NSSet *plistAndValueTypes;
@property(readonly) NSSet *plistTypes;
@property(readonly) NSSet *errorTypes;
@property(readonly) _Bool queryPredicatesEvaluatedOutOfProcess;
@property(readonly) _Bool implementsNSExtension; // @dynamic implementsNSExtension;
- (id)_init;

@end
