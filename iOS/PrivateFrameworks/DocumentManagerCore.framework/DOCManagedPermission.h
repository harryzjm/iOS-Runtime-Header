//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSString;

@interface DOCManagedPermission : NSObject
{
    _Bool _isEphemeralMultiUser;
    _Bool _mayOpenFromManagedToUnmanaged;
    _Bool _mayOpenFromUnmanagedToManaged;
    _Bool _isManagedAppsCloudSyncDisallowed;
    _Bool _hasOpenInRestrictions;
    _Bool _isHostManaged;
    NSString *_hostIdentifier;
    NSCache *_cache;
}

+ (id)defaultPermission;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(nonatomic) _Bool isHostManaged; // @synthesize isHostManaged=_isHostManaged;
@property(retain, nonatomic) NSString *hostIdentifier; // @synthesize hostIdentifier=_hostIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isHostAccountOrAppManaged;
- (_Bool)canTransferSourceIsManaged:(_Bool)arg1 destinationIsManaged:(_Bool)arg2;
- (_Bool)canTransferSourceIsManaged:(_Bool)arg1 toDestinationItem:(id)arg2;
- (_Bool)canCopySourceIsManaged:(_Bool)arg1;
- (_Bool)canCopyItems:(id)arg1;
- (_Bool)canCopyfromContainingBundleIdentifer:(id)arg1;
- (id)queueFileDataForAcceptance:(id)arg1 originalFileName:(id)arg2 forBundleID:(id)arg3 outError:(id *)arg4;
- (unsigned long long)dataOwnerStateForBundleIdentifier:(id)arg1;
- (unsigned long long)dataOwnerStateForItem:(id)arg1;
- (id)defaultFileProviderForAppBundle:(id)arg1;
- (_Bool)canHostAppPerformAction:(unsigned long long)arg1 targetBundleIdentifier:(id)arg2;
- (_Bool)canHostAppPerformAction:(unsigned long long)arg1 targetItem:(id)arg2;
- (id)filterItems:(id)arg1 byCanPerformAction:(unsigned long long)arg2 targetItem:(id)arg3;
- (id)filterProviders:(id)arg1 byCanPerformAction:(unsigned long long)arg2 targetBundleIdentifier:(id)arg3 targetBundleIsManaged:(_Bool)arg4;
- (id)filterBundleIdentifiers:(id)arg1 byCanPerformAction:(unsigned long long)arg2 targetBundleIdentifier:(id)arg3 targetBundleIsManaged:(_Bool)arg4;
@property(readonly, nonatomic) _Bool hasAnyEffectiveRestrictions;
@property(readonly, nonatomic) _Bool hasOpenInRestrictions;
- (_Bool)isManagedAppsCloudSyncAllowed;
- (_Bool)isManagedAppsCloudSyncDisallowed;
@property(readonly, nonatomic) _Bool isInEducationMode;
- (_Bool)isEphemeralMultiUser;
- (_Bool)mayOpenFromUnmanagedToManaged;
- (_Bool)mayOpenFromManagedToUnmanaged;
- (void)dealloc;
- (void)_loadSharedConnectionValues;
- (void)resetAllCachedPermissions;
- (id)init;

@end

