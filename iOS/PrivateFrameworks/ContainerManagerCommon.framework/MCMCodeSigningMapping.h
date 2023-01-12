//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMSQLiteDB, MCMUserIdentityCache;
@protocol MCMChildParentMapCache, MCMManagedPath, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MCMCodeSigningMapping : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id <MCMChildParentMapCache> _childParentMapCache;
    MCMSQLiteDB *_codeSigningMappingDB;
    MCMUserIdentityCache *_userIdentityCache;
    id <MCMManagedPath> _library;
}

+ (id)_moveDBIfNeededFromURL:(id)arg1 error:(id *)arg2;
+ (id)codeSignMappingWithError:(id *)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <MCMManagedPath> library; // @synthesize library=_library;
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // @synthesize userIdentityCache=_userIdentityCache;
@property(retain, nonatomic) MCMSQLiteDB *codeSigningMappingDB; // @synthesize codeSigningMappingDB=_codeSigningMappingDB;
@property(readonly, nonatomic) id <MCMChildParentMapCache> childParentMapCache; // @synthesize childParentMapCache=_childParentMapCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)_onQueue_removeGroupIdentifier:(id)arg1 forIdentifier:(id)arg2 containerClass:(unsigned long long)arg3 error:(id *)arg4 reconcileHandler:(CDUnknownBlockType)arg5;
- (_Bool)_onQueue_addGroupIdentifier:(id)arg1 forIdentifier:(id)arg2 containerClass:(unsigned long long)arg3 error:(id *)arg4 reconcileHandler:(CDUnknownBlockType)arg5;
- (_Bool)removeGroupIdentifier:(id)arg1 forIdentifier:(id)arg2 containerClass:(unsigned long long)arg3 error:(id *)arg4 reconcileHandler:(CDUnknownBlockType)arg5;
- (_Bool)addGroupIdentifier:(id)arg1 forIdentifier:(id)arg2 containerClass:(unsigned long long)arg3 error:(id *)arg4 reconcileHandler:(CDUnknownBlockType)arg5;
- (_Bool)_onqueue_enumerateOwnersAndGroupsWithGroupClass:(unsigned long long)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)enumerateOwnersAndGroupsWithGroupClass:(unsigned long long)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)_onQueue_registerKernelProvidedReferencesForIdentifier:(id)arg1 withAppGroupContainers:(id)arg2 systemGroupContainers:(id)arg3 error:(unsigned long long *)arg4;
- (_Bool)registerKernelProvidedReferencesForIdentifier:(id)arg1 withAppGroupContainers:(id)arg2 systemGroupContainers:(id)arg3 error:(unsigned long long *)arg4;
- (_Bool)_onQueue_removeAllAdvanceCopiesWithError:(id *)arg1;
- (_Bool)removeAllAdvanceCopiesWithError:(id *)arg1;
- (id)_onQueue_removeReferenceForGroupIdentifiers:(id)arg1 containerClass:(unsigned long long)arg2;
- (void)_onQueue_handleChangeFromOldGroupContainerIds:(id)arg1 toNewGroupContainerIds:(id)arg2 containerClass:(unsigned long long)arg3 reconcileHandler:(CDUnknownBlockType)arg4;
- (id)_onQueue_copyReferenceCountSetForContainerClass:(unsigned long long)arg1;
- (id)copyReferenceCountSetForContainerClass:(unsigned long long)arg1;
- (_Bool)invalidateCodeSigningInfoForIdentifier:(id)arg1 withError:(id *)arg2;
- (_Bool)invalidateCodeSigningInfoForIdentifierAndItsChildren:(id)arg1 withError:(id *)arg2;
- (id)_onQueue_identifiersWithError:(id *)arg1;
- (id)identifiersWithError:(id *)arg1;
- (unsigned long long)invalidateCodeSigningInfoForAppsWithoutDataContainer;
- (id)entitlementsForIdentifier:(id)arg1;
- (id)getCodeSigningInfoForIdentifier:(id)arg1;
- (id)processCodeSigningInfo:(id)arg1 identifier:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)processCallerRegisteredEntitlements:(id)arg1 identifier:(id)arg2 error:(id *)arg3;
- (id)systemGroupIdentifiersForIdentifier:(id)arg1;
- (id)appGroupIdentifiersForIdentifier:(id)arg1;
- (unsigned long long)dataContainerTypeForIdentifier:(id)arg1;
- (_Bool)identifierHasSystemContainer:(id)arg1;
- (_Bool)identifierHasCallerRegisteredEntitlements:(id)arg1;
- (id)codeSigningEntryForIdentifier:(id)arg1 withError:(id *)arg2;
- (id)removeCodeSigningDictionaryForIdentifier:(id)arg1;
- (id)groupContainerIdentifiersAssociatedWithIdentifier:(id)arg1 containerClass:(unsigned long long)arg2;
- (void)_onQueue_iterateGroupIdsWithKey:(id)arg1 fallBackKey:(id)arg2 forAllIdentifiersUsingBlock:(CDUnknownBlockType)arg3;
- (_Bool)_onQueue_invalidateCodeSigningInfoForIdentifier:(id)arg1 error:(id *)arg2;
- (id)_onQueue_invalidateCodeSigningInfoForIdentifierAndItsChildren:(id)arg1;
- (_Bool)_onQueue_processCodeSigningInfo:(id)arg1 identifier:(id)arg2 options:(id)arg3 oldEntitlements:(id)arg4 error:(id *)arg5 reconcileHandler:(CDUnknownBlockType)arg6;
- (unsigned long long)_onQueue_dataContainerTypeForIdentifier:(id)arg1;
- (_Bool)_onQueue_identifierHasCallerRegisteredEntitlements:(id)arg1;
- (id)_onQueue_codeSigningEntryForIdentifier:(id)arg1 withError:(id *)arg2;
- (id)_entitlementsFromCodeSigningEntry:(id)arg1;
- (id)_onQueue_entitlementsForIdentifier:(id)arg1;
- (id)_codeSigningInfoForCodeSigningEntry:(id)arg1 externalRequest:(_Bool)arg2;
- (id)_onQueue_codeSigningInfoForIdentifier:(id)arg1 externalRequest:(_Bool)arg2;
- (id)_onQueue_setCodeSigningDictionaryValues:(id)arg1 forIdentifiers:(id)arg2;
- (id)_readCodeSigningMappingFromDiskAtURL:(id)arg1;
- (void)performAllCodeSigningMigrationAndReconciliationWithContext:(id)arg1;
- (void)_onQueue_reconcileSystemContainersWithContext:(id)arg1;
- (void)_onQueue_migrateCachedCodeSigningInfoFromBundleContainerToMappingWithInfo:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3;
- (void)_onQueue_migrateCachedCodeSigningInfoFromBundleContainersToMappingWithContainersLegacy:(id)arg1 containerClass:(unsigned long long)arg2;
- (void)migrateCachedCodeSigningInfoFromBundleContainersToMapping;
- (void)_onQueue_migrateDataFromLegacyEntitlementsFileToCodeSigningFile;
- (void)_onQueue_migrateAppGroupIdsFromDataContainersToFileUsingContainers:(id)arg1;
- (void)migrateAppGroupIdsFromDataContainersToFile;
- (void)_onQueue_migrateFromMappingFileToDBIfNecessary;
- (id)initWithUserIdentityCache:(id)arg1 queue:(id)arg2 mappingDB:(id)arg3 childParentMapCache:(id)arg4 library:(id)arg5;

@end

