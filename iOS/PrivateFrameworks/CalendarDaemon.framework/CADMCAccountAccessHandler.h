//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarDaemon/CADAccountAccessHandler-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol CADACAccountsProvider, CADCalCalendarInfoProvider, CADCalStoreInfoProvider, CADManagedConfigurationHandler, CADPermissionValidator, OS_dispatch_queue;

@interface CADMCAccountAccessHandler : NSObject <CADAccountAccessHandler>
{
    NSString *_bundleIdentifier;
    id <CADACAccountsProvider> _accountsProvider;
    id <CADManagedConfigurationHandler> _managedConfigHandler;
    unsigned long long _accountManagement;
    id <CADCalStoreInfoProvider> _calStoreInfoProvider;
    id <CADCalCalendarInfoProvider> _calCalendarInfoProvider;
    id <CADPermissionValidator> _permissionValidator;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSMutableDictionary *_cachedRestrictedStoreInfos;
    NSArray *_cachedAccounts;
}

@property(retain, nonatomic) NSArray *cachedAccounts; // @synthesize cachedAccounts=_cachedAccounts;
@property(retain, nonatomic) NSMutableDictionary *cachedRestrictedStoreInfos; // @synthesize cachedRestrictedStoreInfos=_cachedRestrictedStoreInfos;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
@property(readonly, nonatomic) id <CADPermissionValidator> permissionValidator; // @synthesize permissionValidator=_permissionValidator;
@property(readonly, nonatomic) id <CADCalCalendarInfoProvider> calCalendarInfoProvider; // @synthesize calCalendarInfoProvider=_calCalendarInfoProvider;
@property(readonly, nonatomic) id <CADCalStoreInfoProvider> calStoreInfoProvider; // @synthesize calStoreInfoProvider=_calStoreInfoProvider;
@property(readonly, nonatomic) unsigned long long accountManagement; // @synthesize accountManagement=_accountManagement;
@property(readonly, nonatomic) id <CADManagedConfigurationHandler> managedConfigHandler; // @synthesize managedConfigHandler=_managedConfigHandler;
@property(readonly, nonatomic) id <CADACAccountsProvider> accountsProvider; // @synthesize accountsProvider=_accountsProvider;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (_Bool)_mayShowLocalAccountsForAction:(unsigned long long)arg1;
- (id)_filteredAccountsForAction:(unsigned long long)arg1 withUnfilteredAccounts:(id)arg2;
- (id)_restrictedCalStoreInfosForAction:(unsigned long long)arg1;
- (id)_restrictedCalendarRowIDsForAction:(unsigned long long)arg1;
- (_Bool)_existingCalStoreMapsToAccountIdentifier:(id)arg1;
- (_Bool)_isDisabledForAction:(unsigned long long)arg1;
- (void)_validateAction:(unsigned long long)arg1;
- (void)reset;
- (id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1;
- (_Bool)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(id)arg2;
- (_Bool)isAccountManaged:(id)arg1;
- (id)initWithCalStoreInfoProvider:(id)arg1 calendarInfoProvider:(id)arg2 accountsProvider:(id)arg3 permissionValidator:(id)arg4 managedConfigHandler:(id)arg5 accountManagement:(unsigned long long)arg6 bundleIdentifier:(id)arg7;

@end

