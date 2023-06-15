//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOActiveTileGroup, GEOActiveTileGroupMigrationTaskOptions, GEOAttributionVersionMigrator, GEODataSetDescription, GEOReportedProgress, GEOResourceManifestConfiguration, GEOResources, GEOTileGroup, NSDictionary, NSMutableArray, NSProgress, NSSet, NSString, NSURL;
@protocol NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOAttributionMigrationTask : NSObject
{
    GEOAttributionVersionMigrator *_migrator;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    GEOTileGroup *_newTileGroup;
    GEOResources *_resourceManifest;
    GEOActiveTileGroup *_oldTileGroup;
    GEODataSetDescription *_dataSetDescription;
    GEOReportedProgress *_progress;
    GEOActiveTileGroupMigrationTaskOptions *_options;
    id <NSObject> _transaction;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_inProgressTasks;
    NSURL *_destinationDirectory;
    struct GEOOnce_s _finished;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _completionHandler;
    NSSet *_allAttributionFilenames;
    NSDictionary *_urlToChecksum;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <NSObject> transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) GEOActiveTileGroupMigrationTaskOptions *options; // @synthesize options=_options;
- (void)dataURLSession:(id)arg1 didCompleteTask:(id)arg2;
- (void)removeOldData:(id)arg1;
- (void)populateTileGroup:(id)arg1;
- (void)cancel;
- (void)_finishedAllTasks;
- (void)_finishWithError:(id)arg1;
- (void)_startWithCompletionHandler:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (_Bool)_hasExistingUsableDownloadForURL:(id)arg1 withChecksum:(id)arg2;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
@property(readonly) NSProgress *progress;
@property(readonly, nonatomic) long long estimatedWeight;
- (id)initWithMigrator:(id)arg1 manifestConfiguration:(id)arg2 newTileGroup:(id)arg3 inResourceManifest:(id)arg4 oldTileGroup:(id)arg5 dataSet:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

