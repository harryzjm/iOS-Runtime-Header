//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class CTServiceDescriptor, PSSimStatusCache, PSSpecifier, PSUICellularPlanManagerCache, PSUICoreTelephonyDataCache;

__attribute__((visibility("hidden")))
@interface PSUICellularDataOptionsController : PSListController
{
    struct __CTServerConnection *_serverConnection;
    PSSpecifier *_parentSpecifier;
    CTServiceDescriptor *_serviceDescriptor;
    PSSimStatusCache *_simStatusCache;
    PSUICellularPlanManagerCache *_planManagerCache;
    PSUICoreTelephonyDataCache *_dataCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PSUICoreTelephonyDataCache *dataCache; // @synthesize dataCache=_dataCache;
@property(retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache; // @synthesize planManagerCache=_planManagerCache;
@property(retain, nonatomic) PSSimStatusCache *simStatusCache; // @synthesize simStatusCache=_simStatusCache;
- (id)getLogger;
- (void)airplaneModeChanged;
- (void)roamingOptionsDidChange;
- (id)getCDMARoamingStatus:(id)arg1;
- (void)setCDMARoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setDataRoamingEnabledForService:(id)arg1 specifier:(id)arg2;
- (void)setDataRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (id)getDataRoamingStatusForService:(id)arg1;
- (id)getDataRoamingStatus:(id)arg1;
- (id)roamingSettingsDescription:(id)arg1;
- (id)roamingSpecifiers;
- (id)specifiers;
- (void)dealloc;
- (id)initWithParentSpecifier:(id)arg1 simStatusCache:(id)arg2 planManagerCache:(id)arg3 dataCache:(id)arg4;
- (id)initWithParentSpecifier:(id)arg1;
- (id)init;

@end

