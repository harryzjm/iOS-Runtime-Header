//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Radio/NSFetchedResultsControllerDelegate-Protocol.h>

@class BKSProcessAssertion, NSArray, NSFetchRequest, NSFetchedResultsController, NSManagedObjectContext, NSManagedObjectModel, NSMapTable, NSOperationQueue, NSPersistentStoreCoordinator, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RadioModel : NSObject <NSFetchedResultsControllerDelegate>
{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSOperationQueue *_backgroundCleanupQueue;
    BKSProcessAssertion *_backgroundProcessAssertion;
    long long _backgroundTaskCount;
    NSObject<OS_dispatch_source> *_backgroundTaskInvalidateTimerSource;
    NSManagedObjectContext *_context;
    _Bool _isBackgroundModel;
    NSManagedObjectModel *_model;
    int _modelChangedToken;
    _Bool _modelChangedTokenIsValid;
    int _modelDeletedToken;
    _Bool _modelDeletedTokenIsValid;
    NSFetchedResultsController *_stationFetchedResultsController;
    NSFetchRequest *_stationFetchRequest;
    NSMapTable *_stationToSkipControllerMapTable;
    NSPersistentStoreCoordinator *_storeCoordinator;
    long long _transactionCount;
}

+ (id)_radioDirectoryPath;
+ (id)_radioDatabasePath;
+ (void)_postAccountDidDeauthenticateNotification;
+ (id)_persistentStoreConfigurationOptions;
+ (void)deleteAllData;
+ (id)sharedModel;
+ (id)backgroundModel;
- (void).cxx_destruct;
- (void)_setDatabasePropertyValue:(id)arg1 forKey:(id)arg2;
- (id)_setByReplacingManagedObjectsInSet:(id)arg1;
- (void)_resetModel;
- (void)_prepareModel;
- (void)_postContextDidChangeNotification:(id)arg1;
- (void)_performTransactionAndSave:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_endBackgroundTaskAssertion;
- (id)_databasePropertyValueForKey:(id)arg1;
- (void)_createRadioDirectoryAndDatabaseIfNecessary;
- (unsigned long long)_numberOfSkipsUsedWithSkipTimestamps:(id)arg1 currentTimestamp:(double)arg2 skipInterval:(double)arg3 returningEarliestSkipTimestamp:(double *)arg4;
- (void)_defaultRadioModelInitialization;
- (void)_beginBackgroundTaskAssertion;
- (id)_arrayByReplacingManagedObjectsInArray:(id)arg1;
- (void)setDatabaseVersion:(long long)arg1;
- (long long)databaseVersion;
- (id)context;
@property(readonly, nonatomic) NSArray *userStations;
- (id)stationWithStationStringID:(id)arg1;
- (id)stationWithPersistentID:(long long)arg1;
- (id)stationWithID:(long long)arg1;
- (id)stationWithHash:(id)arg1;
@property(copy, nonatomic) NSArray *stationSortOrdering;
@property(readonly, nonatomic) NSArray *stations;
- (void)setTrackPlaybackDescriptorQueue:(id)arg1 forStation:(id)arg2;
- (void)setReportProblemIssueTypes:(id)arg1;
@property(nonatomic) unsigned long long globalVersion;
@property(copy, nonatomic) NSString *globalHash;
@property(nonatomic) unsigned long long authenticatedAccountIdentifier;
@property(readonly, copy, nonatomic) NSArray *reportProblemIssueTypes;
@property(readonly, nonatomic) NSArray *previewStations;
- (void)performWriteTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (id)newStationWithDictionary:(id)arg1;
- (id)newPreviewStationWithDictionary:(id)arg1;
- (id)newFeaturedStationWithDictionary:(id)arg1;
@property(readonly, nonatomic) NSArray *featuredStations;
- (void)deleteStation:(id)arg1;
- (void)deleteStationWithID:(long long)arg1;
- (void)deletePreviewStation:(id)arg1;
- (void)deleteAllData;
- (id)convertObjectsInSet:(id)arg1;
- (id)convertObjects:(id)arg1;
- (id)convertObject:(id)arg1;
@property(readonly, nonatomic) NSArray *allStations;
- (void)_contextDidSaveNotification:(id)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)dealloc;
- (id)_initBackgroundModelWithPersistentStoreCoordinator:(id)arg1;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
