//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/TSPPersistedObjectUUIDMapDelegate-Protocol.h>
#import <iWorkImport/TSPReadCoordinator-Protocol.h>

@class NSMapTable, NSMutableArray, NSMutableSet, NSObject, NSSet, NSString, NSURL, NSUUID, TSPDocumentRevision, TSPFinalizeHandlerQueue, TSPObject, TSPObjectContainer, TSPObjectContext, TSPPackage, TSPPackageMetadata, TSPPersistedObjectUUIDMap;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPPackageReadCoordinator <TSPPersistedObjectUUIDMapDelegate, TSPReadCoordinator>
{
    TSPObjectContext *_context;
    NSUUID *_documentUUID;
    TSPObject *_documentObject;
    TSPPackage *_package;
    NSURL *_packageURL;
    TSPFinalizeHandlerQueue *_finalizeHandlerQueue;
    _Bool _areExternalDataReferencesAllowed;
    _Bool _skipDocumentUpgrade;
    unsigned long long _readVersion;
    TSPPackageMetadata *_cachedMetadata;
    TSPPersistedObjectUUIDMap *_persistedUUIDMap;
    struct vector<std::__1::auto_ptr<TSP::PersistedObjectUUIDMapOperation>, std::__1::allocator<std::__1::auto_ptr<TSP::PersistedObjectUUIDMapOperation>>> _persistedUUIDMapOperations;
    NSMutableSet *_duplicatedUUIDs;
    NSMutableSet *_componentIdentifiersWithDuplicatedUUIDs;
    NSObject<OS_dispatch_group> *_completionGroup;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_queue> *_ioCompletionQueue;
    NSObject<OS_dispatch_queue> *_readCompletionQueue;
    NSObject<OS_dispatch_queue> *_componentQueue;
    unordered_map_502345cb _readIdentifiers;
    NSMutableArray *_componentsToUpgrade;
    NSObject<OS_dispatch_queue> *_objectQueue;
    NSMapTable *_objects;
    unordered_map_502345cb _readExternalObjects;
    _Bool _losesDataOnWrite;
    _Bool _didRequireUpgrade;
    NSSet *_unsupportedFeatureIdentifiers;
    TSPDocumentRevision *_documentRevision;
    unsigned long long _saveToken;
    long long _preferredPackageType;
    TSPObjectContainer *_objectContainer;
    TSPObject *_metadataObject;
}

@property(readonly, nonatomic) _Bool didRequireUpgrade; // @synthesize didRequireUpgrade=_didRequireUpgrade;
@property(readonly, nonatomic) TSPObject *metadataObject; // @synthesize metadataObject=_metadataObject;
@property(readonly, nonatomic) TSPObjectContainer *objectContainer; // @synthesize objectContainer=_objectContainer;
@property(readonly, nonatomic) long long preferredPackageType; // @synthesize preferredPackageType=_preferredPackageType;
@property(readonly, nonatomic) unsigned long long saveToken; // @synthesize saveToken=_saveToken;
@property(readonly, nonatomic) TSPDocumentRevision *documentRevision; // @synthesize documentRevision=_documentRevision;
@property(readonly, nonatomic) NSSet *unsupportedFeatureIdentifiers; // @synthesize unsupportedFeatureIdentifiers=_unsupportedFeatureIdentifiers;
@property(readonly, nonatomic) _Bool losesDataOnWrite; // @synthesize losesDataOnWrite=_losesDataOnWrite;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)persistedObjectUUIDMap:(id)arg1 foundDuplicateUUID:(id)arg2 firstObjectLocation:(struct ObjectLocation)arg3 secondObjectLocation:(struct ObjectLocation)arg4;
- (id)persistedObjectUUIDMap:(id)arg1 needsDescriptionForComponentIdentifier:(long long)arg2 objectIdentifier:(long long)arg3;
- (void)reader:(id)arg1 didResetObjectUUID:(id)arg2 forObjectIdentifier:(long long)arg3 originalObjectUUID:(id)arg4;
- (void)reader:(id)arg1 didResetObjectIdentifierForObject:(id)arg2 originalObjectIdentifier:(long long)arg3;
- (void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(_Bool)arg3 allowUnknownObject:(_Bool)arg4 fromParentObject:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(_Bool)arg4 allowUnknownObject:(_Bool)arg5 fromParentObject:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2;
- (long long)reader:(id)arg1 wantsObjectIdentifierForUUID:(id)arg2;
- (_Bool)canRetainObjectReferencedByWeakLazyReference;
- (long long)sourceType;
- (_Bool)hasDocumentVersionUUID;
@property(readonly, nonatomic) _Bool isReadingFromDocument;
- (id)baseObjectUUID;
- (unsigned char)packageIdentifier;
- (unsigned long long)fileFormatVersion;
- (void)didReferenceExternalObject:(id)arg1 withIdentifier:(long long)arg2;
- (id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(_Bool)arg3;
- (id)unarchivedObjectForIdentifier:(long long)arg1 isReadFinished:(_Bool)arg2;
- (id)context;
- (void)prepareForFullDocumentUpgradeImpl;
- (void)prepareForFullDocumentUpgrade;
- (void)updateObjectContextForSuccessfulRead;
- (void)postprocessMetadata:(id)arg1;
- (void)preprocessMetadata:(id)arg1;
- (unsigned long long)fileFormatVersionFromMetadataMessage:(const struct PackageMetadata *)arg1;
- (id)newObjectUUIDForObjectIdentifier:(long long)arg1;
- (id)readPackageMetadataWithError:(id *)arg1;
- (void)readPackageMetadataWithComponent:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)metadataObjectIdentifier;
- (void)prepareToReadComponentWithIdentifier:(long long)arg1 forObjectIdentifier:(long long)arg2 isWeakReference:(_Bool)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)readExternalReferenceComponentIfNeededAsyncForObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isWeak:(_Bool)arg3 fromComponent:(id)arg4;
- (void)didReadObjects:(id)arg1 forComponent:(id)arg2 packageIdentifier:(unsigned char)arg3;
- (void)readComponentAsync:(id)arg1;
- (_Bool)readComponentIfNeededAsync:(id)arg1;
- (void)p_readComponent:(id)arg1 additionalComponents:(id)arg2 requireUpgrade:(_Bool)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)p_readComponent:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)readComponent:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)readRootObjectWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didUpdateLazyReferenceDelegate:(id)arg1;
- (_Bool)endReading;
- (id)initWithContext:(id)arg1 package:(id)arg2 packageURLOrNil:(id)arg3 finalizeHandlerQueue:(id)arg4 areExternalDataReferencesAllowed:(_Bool)arg5 skipDocumentUpgrade:(_Bool)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

