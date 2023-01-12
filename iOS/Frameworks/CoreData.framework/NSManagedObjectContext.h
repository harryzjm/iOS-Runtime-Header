//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/NSCoding-Protocol.h>
#import <CoreData/NSLocking-Protocol.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSPersistentStoreCoordinator, NSQueryGenerationToken, NSSet, NSString, NSUndoManager, _PFContextMapTable, _PFManagedObjectReferenceQueue;

@interface NSManagedObjectContext : NSObject <NSCoding, NSLocking>
{
    id _queueOwner;
    int _cd_rc;
    int _spinLock;
    void *_dispatchQueue;
    id _parentObjectStore;
    struct _managedObjectContextFlags {
        unsigned int _registeredForCallback:1;
        unsigned int _propagatesDeletesAtEndOfEvent:1;
        unsigned int _exhaustiveValidation:1;
        unsigned int _processingChanges:1;
        unsigned int _useCommittedSnapshot:1;
        unsigned int _registeredUndoTransactionID:1;
        unsigned int _retainsAllRegisteredObjects:1;
        unsigned int _savingInProgress:1;
        unsigned int _wasDisposed:1;
        unsigned int _unprocessedChangesPending:1;
        unsigned int _isDirty:1;
        unsigned int _ignoreUndoCheckpoints:1;
        unsigned int _propagatingDeletes:1;
        unsigned int _isNSEditorEditing:1;
        unsigned int _isMainThreadBlessed:1;
        unsigned int _isImportContext:1;
        unsigned int _preflightSaveInProgress:1;
        unsigned int _disableDiscardEditing:1;
        unsigned int _isParentStoreContext:1;
        unsigned int _postSaveNotifications:1;
        unsigned int _isMerging:1;
        unsigned int _concurrencyType:1;
        unsigned int _deleteInaccessible:1;
        unsigned int _priority:2;
        unsigned int _autoMerge:1;
        unsigned int _isXPCServerContext:1;
        unsigned int _pushSecureDelete:1;
        unsigned int _refreshAfterSave:1;
        unsigned int _allowAncillary:1;
        unsigned int _generatedMutatedIDsNotification:1;
        unsigned int _postSavedObjectNotifications:1;
        unsigned int _allowAdditionalUserInfoKeys:1;
        unsigned int _reservedFlags:31;
    } _flags;
    short _undoTransactionID;
    short _ignoreChangeNotification;
    int _lockCount;
    NSMutableSet *_unprocessedChanges;
    NSMutableSet *_unprocessedDeletes;
    NSMutableSet *_unprocessedInserts;
    NSMutableSet *_insertedObjects;
    NSMutableSet *_deletedObjects;
    NSMutableSet *_changedObjects;
    NSMutableSet *_lockedObjects;
    NSMutableSet *_refreshedObjects;
    _PFContextMapTable *_infoByGID;
    id *_cachedObsInfoByEntity;
    id _lock;
    double _fetchTimestamp;
    long long _referenceCallbackRegistration;
    _PFManagedObjectReferenceQueue *_referenceQueue;
    NSString *_contextLabel;
    NSArray *_persistentStoreIdentifiers;
    id *_additionalPrivateIvars;
    void *_reserved1;
}

+ (void)mergeChangesFromRemoteContextSave:(id)arg1 intoContexts:(id)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
+ (id)new;
+ (_Bool)accessInstanceVariablesDirectly;
+ (void)initialize;
+ (void)_mergeChangesFromRemoteContextSave:(id)arg1 intoContexts:(id)arg2;
+ (id)createFutureForFileAtURL:(id)arg1;
- (_Bool)isEditing;
- (void)_managedObjectContextEditor:(id)arg1 didCommit:(_Bool)arg2 contextInfo:(CDStruct_f8f0024c *)arg3;
- (void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (_Bool)commitEditing;
- (_Bool)commitEditingAndReturnError:(id *)arg1;
- (void)discardEditing;
- (void)objectDidEndEditing:(id)arg1;
- (void)objectDidBeginEditing:(id)arg1;
- (void)_automaticallyMergeChangesFromContextDidSaveNotification:(id)arg1;
@property(nonatomic) _Bool automaticallyMergesChangesFromParent;
- (id)_queryGenerationToken__;
@property(readonly, nonatomic) NSQueryGenerationToken *queryGenerationToken;
- (id)_changeTrackingToken__;
- (_Bool)_setChangeTrackingTokenFromToken:(id)arg1 error:(id *)arg2;
- (_Bool)setQueryGenerationFromToken:(id)arg1 error:(id *)arg2;
- (_Bool)_setQueryGenerationFromToken:(id)arg1 error:(id *)arg2;
- (id)_retainedCurrentQueryGeneration:(id)arg1;
@property(copy) NSString *transactionAuthor;
@property(copy) NSString *name;
@property(readonly) unsigned long long concurrencyType;
@property(retain) NSManagedObjectContext *parentContext;
@property(readonly, nonatomic) NSMutableDictionary *userInfo;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)initWithConcurrencyType:(unsigned long long)arg1;
- (void)refreshAllObjects;
- (void)mergeChangesFromContextDidSaveNotification:(id)arg1;
- (void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(_Bool)arg2;
- (void)unlock;
- (_Bool)tryLock;
- (void)lock;
- (void)detectConflictsForObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)redo;
- (void)undo;
- (void)refreshObject:(id)arg1 mergeChanges:(_Bool)arg2;
- (void)rollback;
- (id)executeFetchRequest:(id)arg1 error:(id *)arg2;
- (unsigned long long)countForFetchRequest:(id)arg1 error:(id *)arg2;
- (id)executeRequest:(id)arg1 error:(id *)arg2;
- (id)existingObjectWithID:(id)arg1 error:(id *)arg2;
- (id)objectWithID:(id)arg1;
- (_Bool)save:(id *)arg1;
- (_Bool)obtainPermanentIDsForObjects:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool hasChanges;
- (void)deleteObject:(id)arg1;
- (void)insertObject:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)objectRegisteredForID:(id)arg1;
@property(nonatomic) _Bool propagatesDeletesAtEndOfEvent;
@property(readonly, nonatomic) NSSet *deletedObjects;
@property(readonly, nonatomic) NSSet *insertedObjects;
@property(readonly, nonatomic) NSSet *registeredObjects;
@property(readonly, nonatomic) NSSet *updatedObjects;
- (void)assignObject:(id)arg1 toPersistentStore:(id)arg2;
- (void)processPendingChanges;
@property(retain, nonatomic) NSUndoManager *undoManager;
@property double stalenessInterval;
- (void)dealloc;
- (void)reset;
- (id)description;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)init;
@property(retain) id mergePolicy;
- (_Bool)shouldHandleInaccessibleFault:(id)arg1 forObjectID:(id)arg2 triggeredByProperty:(id)arg3;
@property _Bool shouldDeleteInaccessibleFaults;
@property(nonatomic) _Bool retainsRegisteredObjects;
@property(retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;
- (void)objectWillChange:(id)arg1;
- (void)_setAllowAncillaryEntities:(_Bool)arg1;
- (_Bool)_allowAncillaryEntities;
- (_Bool)_disableDiscardEditing;
- (void)_setDisableDiscardEditing:(_Bool)arg1;
- (id)_retainedObjectsFromRemovedStore:(id)arg1;
- (void)_forgetObject:(id)arg1 propagateToObjectStore:(_Bool)arg2 removeFromRegistry:(_Bool)arg3;
- (void)_clearChangedThisTransaction:(id)arg1;
- (void)_forceInsertionForObject:(id)arg1;
- (void)_undoUpdates:(id)arg1;
- (void)_undoDeletions:(id)arg1;
- (void)_undoDeletionsMovedToUpdates:(id)arg1;
- (void)_undoInsertions:(id)arg1;
- (void)_processChangedStoreConfigurationNotification:(id)arg1;
- (void)_storeConfigurationChanged:(id)arg1;
- (void)_noop:(id)arg1;
- (void)_undoManagerCheckpoint:(id)arg1;
- (void)_mergeChangesFromRemoteContextSave:(id)arg1;
- (void)_stopConflictDetectionForObject:(id)arg1;
- (id)_orderedSetWithResultsFromFetchRequest:(id)arg1;
- (id)_delegate;
- (void)_setDelegate:(id)arg1;
- (void)performWithOptions:(unsigned long long)arg1 andBlock:(CDUnknownBlockType)arg2;
- (id)performBlockWithResult:(CDUnknownBlockType)arg1;
- (_Bool)shouldPerformSecureOperation;
- (void)setShouldPerformSecureOperation:(_Bool)arg1;
- (_Bool)shouldRefreshAfterSave;
- (void)setShouldRefreshAfterSave:(_Bool)arg1;
- (void)_setAllowsExpandedUserInfoKeys:(_Bool)arg1;
- (_Bool)_parentObtainPermanentIDsForObjects:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id *)arg3;
- (_Bool)_updateLocationsOfObjectsToLocationByOrderKey:(id)arg1 inRelationshipWithName:(id)arg2 onObjectWithID:(id)arg3 error:(id *)arg4;
- (id)_orderKeysForRelationshipWithName__:(id)arg1 onObjectWithID:(id)arg2;
- (_Bool)_performImmediate:(CDUnknownBlockType)arg1;
- (_Bool)evictFuture:(id)arg1 withError:(id *)arg2;

@end
