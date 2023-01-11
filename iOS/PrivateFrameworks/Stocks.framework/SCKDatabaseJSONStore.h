//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Stocks/NSFilePresenter-Protocol.h>
#import <Stocks/SCKDatabaseStore-Protocol.h>
#import <Stocks/SCKDatabaseStoreCoordinator-Protocol.h>
#import <Stocks/SCKOperationThrottlerDelegate-Protocol.h>

@class CKServerChangeToken, NSDate, NSFileCoordinator, NSHashTable, NSMutableDictionary, NSOperationQueue, NSSet, NSString, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source, SCKDatabaseStore, SCKOperationThrottler;

@interface SCKDatabaseJSONStore : NSObject <SCKOperationThrottlerDelegate, NSFilePresenter, SCKDatabaseStoreCoordinator, SCKDatabaseStore>
{
    _Bool _backupEnabled;
    _Bool _loadedFromDisk;
    _Bool _havePendingChanges;
    unsigned int _lastKnownStoreChangeTag;
    NSDate *_lastSyncDate;
    NSDate *_lastDirtyDate;
    CKServerChangeToken *_serverChangeToken;
    NSURL *_presentedItemURL;
    NSOperationQueue *_presentedItemOperationQueue;
    NSFileCoordinator *_fileCoordinator;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSHashTable *_observers;
    NSMutableDictionary *_zoneStoresByName;
    NSMutableDictionary *_foreignZoneDictsByName;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <SCKOperationThrottler> _saveThrottler;
    NSObject<OS_dispatch_source> *_changeListenerSource;
    NSURL *_storeURL;
    unsigned long long _diskReadCount;
    unsigned long long _diskWriteCount;
}

+ (id)preferredFileURLForSchema:(id)arg1 parentDirectoryURL:(id)arg2;
@property(readonly, nonatomic) unsigned long long diskWriteCount; // @synthesize diskWriteCount=_diskWriteCount;
@property(readonly, nonatomic) unsigned long long diskReadCount; // @synthesize diskReadCount=_diskReadCount;
@property(readonly, copy, nonatomic) NSURL *storeURL; // @synthesize storeURL=_storeURL;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *changeListenerSource; // @synthesize changeListenerSource=_changeListenerSource;
@property(retain, nonatomic) id <SCKOperationThrottler> saveThrottler; // @synthesize saveThrottler=_saveThrottler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) _Bool havePendingChanges; // @synthesize havePendingChanges=_havePendingChanges;
@property(retain, nonatomic) NSMutableDictionary *foreignZoneDictsByName; // @synthesize foreignZoneDictsByName=_foreignZoneDictsByName;
@property(retain, nonatomic) NSMutableDictionary *zoneStoresByName; // @synthesize zoneStoresByName=_zoneStoresByName;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) unsigned int lastKnownStoreChangeTag; // @synthesize lastKnownStoreChangeTag=_lastKnownStoreChangeTag;
@property(nonatomic) _Bool loadedFromDisk; // @synthesize loadedFromDisk=_loadedFromDisk;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(retain, nonatomic) NSFileCoordinator *fileCoordinator; // @synthesize fileCoordinator=_fileCoordinator;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue=_presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL; // @synthesize presentedItemURL=_presentedItemURL;
@property(nonatomic, getter=isBackupEnabled) _Bool backupEnabled; // @synthesize backupEnabled=_backupEnabled;
@property(copy, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(copy, nonatomic) NSDate *lastDirtyDate; // @synthesize lastDirtyDate=_lastDirtyDate;
@property(copy, nonatomic) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
- (void).cxx_destruct;
- (id)_decodeDate:(id)arg1;
- (id)_encodeDate:(id)arg1;
- (id)_decodeCodableObjectOfClass:(Class)arg1 from:(id)arg2 error:(id *)arg3;
- (id)_encodeCodableObject:(id)arg1;
- (void)_listenForChangesToFileURL:(id)arg1;
- (void)_reloadIfNeededFromFileURL:(id)arg1;
- (void)_loadFromFileURL:(id)arg1;
- (void)_saveIfNeededToFileURL:(id)arg1;
- (void)_applyBackupEnabledPropertyToStoreURL;
- (void)_saveToFileURL:(id)arg1;
- (_Bool)flushToDiskWithTimeout:(double)arg1;
- (void)savePresentedItemChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)writeZone:(id)arg1 withAccessor:(CDUnknownBlockType)arg2;
- (void)readZone:(id)arg1 withAccessor:(CDUnknownBlockType)arg2;
- (void)reloadWithAccessor:(CDUnknownBlockType)arg1;
- (void)writeWithAccessor:(CDUnknownBlockType)arg1;
- (void)readWithAccessor:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <SCKDatabaseStore> underlyingStore;
- (id)zoneStoreForSchema:(id)arg1;
- (id)initWithSchema:(id)arg1 parentDirectoryURL:(id)arg2;
- (id)initWithSchema:(id)arg1 fileURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

