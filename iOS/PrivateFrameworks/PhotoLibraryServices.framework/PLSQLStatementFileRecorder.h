//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLSearchIndexManagerDatabaseConnectionDelegate-Protocol.h>

@class NSMutableDictionary, NSString, PLPhotoLibraryBundleController, PLSQLiteRecorder;
@protocol OS_dispatch_io, OS_dispatch_queue;

@interface PLSQLStatementFileRecorder : NSObject <PLSearchIndexManagerDatabaseConnectionDelegate>
{
    NSMutableDictionary *_observationCountByNormalizedStatementSQL;
    NSMutableDictionary *_observationCountByBacktraceHash;
    NSMutableDictionary *_isMutedByBacktraceHash;
    struct os_unfair_lock_s _observationsLock;
    NSString *_backtraceFilter;
    NSObject<OS_dispatch_io> *_file;
    NSObject<OS_dispatch_queue> *_writingQueue;
    PLSQLiteRecorder *_splSearchDbRecorder;
    PLPhotoLibraryBundleController *_bundleController;
}

+ (id)_daemonSearchIndexManagerFromBundleController:(id)arg1;
+ (void)_writeRecordingPostambleUsingQueue:(id)arg1 toFile:(id)arg2;
+ (void)_writeStatements:(id)arg1 toFile:(id)arg2 usingQueue:(id)arg3;
+ (id)_chooseFileURLFromFileURL:(id)arg1;
+ (unsigned long long)_callStackHash;
- (void).cxx_destruct;
- (_Bool)stopRecording;
- (_Bool)startRecordingToFileURL:(id)arg1 withTag:(id)arg2;
- (id)initWithBundleController:(id)arg1;
- (void)willTeardownConnection:(struct sqlite3 *)arg1;
- (void)didCreateConnection:(struct sqlite3 *)arg1;
- (_Bool)_decorateStatement:(id)arg1;
- (void)_reconsiderRecordingState;
- (void)_installSignalHandler;

@end
