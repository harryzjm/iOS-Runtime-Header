//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOActiveTileGroupMigrationTask-Protocol.h>

@class GEOActiveTileGroup, GEOReportedProgress, GEOSearchAttributionManifest, GEOSearchAttributionManifestVersionMigrator, NSProgress, NSString, NSURLSession, NSURLSessionDataTask;
@protocol NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOSearchAttributionManifestVersionMigrationTask : NSObject <GEOActiveTileGroupMigrationTask>
{
    GEOSearchAttributionManifestVersionMigrator *_migrator;
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _running;
    NSString *_newSearchAttributionManifestURL;
    GEOActiveTileGroup *_oldTileGroup;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    GEOReportedProgress *_progress;
    NSURLSession *_urlSession;
    NSURLSessionDataTask *_downloadTask;
    GEOSearchAttributionManifest *_attributionManifest;
    id <NSObject> _transaction;
}

@property(retain, nonatomic) id <NSObject> transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
- (void)removeOldData:(id)arg1;
- (void)_completeWithError:(id)arg1;
- (void)populateTileGroup:(id)arg1;
- (void)cancel;
- (void)_handleResponse:(id)arg1 withData:(id)arg2 error:(id)arg3;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
@property(readonly) NSProgress *progress;
@property(readonly) long long estimatedWeight;
- (void)dealloc;
- (id)initWithMigrator:(id)arg1 newSearchAttributionManifestURL:(id)arg2 oldTileGroup:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

