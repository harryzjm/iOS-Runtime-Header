//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SplashBoard/BSDescriptionProviding-Protocol.h>
#import <SplashBoard/NSSecureCoding-Protocol.h>

@class BSAtomicSignal, BSTimer, NSFileManager, NSMutableArray, NSMutableDictionary, NSString, XBSnapshotContainerIdentity, XBSnapshotManifestIdentity;

@interface XBApplicationSnapshotManifestImpl <NSSecureCoding, BSDescriptionProviding>
{
    XBSnapshotContainerIdentity *_containerIdentity;
    XBSnapshotManifestIdentity *_identity;
    NSMutableDictionary *_snapshotGroupsByID;
    NSFileManager *_imageAccessFileManger;
    _Atomic unsigned long long _bytesWaitingToWriteOut;
    BSTimer *_reapingTimer;
    BSAtomicSignal *_invalidatedSignal;
    unsigned long long _clientCount;
    unsigned long long _pendingOperations;
    NSMutableArray *_archiveSchedulingQueue_synchronizeCompletions;
    _Bool _archiveSchedulingQueue_dirty;
    _Bool _archiveSchedulingQueue_scheduled;
}

+ (_Bool)supportsSecureCoding;
+ (long long)_outputFormatForSnapshot:(id)arg1;
+ (void)_configureSnapshot:(id)arg1 withCompatibilityInfo:(id)arg2 forLaunchRequest:(id)arg3;
+ (id)_snapshotPredicateForRequest:(id)arg1;
+ (void)_flushManifestQueue;
+ (_Bool)isUnderMemoryPressure;
+ (void)_queue_noteManifestInvalidated:(id)arg1;
+ (void)relinquishManifest:(id)arg1;
+ (id)acquireManifestForContainerIdentity:(id)arg1 store:(id)arg2 creatingIfNecessary:(_Bool)arg3;
+ (void)initialize;
@property(readonly, copy, nonatomic) XBSnapshotManifestIdentity *identity; // @synthesize identity=_identity;
@property(readonly, copy, nonatomic) XBSnapshotContainerIdentity *containerIdentity; // @synthesize containerIdentity=_containerIdentity;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_queue_reallyCheckClientCount;
- (void)_queue_checkClientCount;
- (void)_queue_decrementClientCount;
- (void)_queue_incrementClientCount;
- (_Bool)_imageAccessQueue_saveData:(id)arg1 forSnapshot:(id)arg2;
- (id)_queue_snapshotGroupForID:(id)arg1 creatingIfNeeded:(_Bool)arg2;
- (id)_queue_snapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2;
- (id)_queue_snapshotsMatchingPredicate:(id)arg1;
- (void)_queue_gatherPaths:(id)arg1 forSnapshot:(id)arg2;
- (void)_queue_handleMemoryPressure;
- (_Bool)_queue_purgeSnapshotsWithProtectedContent;
- (void)_queue_deleteSnapshots:(id)arg1;
- (void)_queue_deletePaths:(id)arg1;
- (void)_queue_accessSnapshotsWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_reapExpiredAndInvalidSnapshots;
- (_Bool)_queue_validateWithContainerIdentity:(id)arg1;
- (void)_queue_doArchiveWithCompletions:(id)arg1;
- (void)_scheduleArchivingIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_synchronizeDataStoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)_noteDirtied;
- (id)_allSnapshotGroups;
- (id)_createSnapshotWithGroupID:(id)arg1 newSnapshotCreator:(CDUnknownBlockType)arg2;
- (id)_createSnapshotWithGroupID:(id)arg1 generationContext:(id)arg2;
- (id)_generatableSnapshotForGroupID:(id)arg1 generationContext:(id)arg2;
- (_Bool)_invalidate;
- (id)_snapshotGroupsByID;
- (void)beginSnapshotAccessTransaction:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAllSnapshots;
- (void)purgeSnapshotsWithProtectedContent;
- (void)deleteSnapshotsForGroupID:(id)arg1;
- (void)deleteSnapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2;
- (void)deleteSnapshotsForGroupID:(id)arg1 predicateBuilder:(CDUnknownBlockType)arg2;
- (void)deleteSnapshotsUsingPredicateBuilder:(CDUnknownBlockType)arg1;
- (void)deleteSnapshotsMatchingPredicate:(id)arg1;
- (void)deleteSnapshots:(id)arg1;
- (void)deleteSnapshot:(id)arg1;
- (void)saveSnapshot:(id)arg1 atPath:(id)arg2 withContext:(id)arg3;
- (void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 writeToFile:(_Bool)arg3 didGenerateImage:(CDUnknownBlockType)arg4 didSaveImage:(CDUnknownBlockType)arg5;
- (id)createVariantForSnapshot:(id)arg1 withIdentifier:(id)arg2;
- (id)createSnapshotWithGroupID:(id)arg1;
- (id)snapshotsForGroupID:(id)arg1 fetchRequest:(id)arg2;
- (id)snapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2;
- (id)snapshotsForGroupID:(id)arg1;
- (id)containerPath;
- (id)bundleIdentifier;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)_initWithContainerIdentity:(id)arg1;
- (id)init;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

