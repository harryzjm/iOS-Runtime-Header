//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLEngineSyncTaskDelegate-Protocol.h>

@class CPLPullFromTransportTask, NSData;
@protocol CPLEngineTransportDownloadBatchTask, CPLEngineTransportQueryTask;

@protocol CPLPullFromTransportTaskDelegate <CPLEngineSyncTaskDelegate>
- (id <CPLEngineTransportDownloadBatchTask>)task:(CPLPullFromTransportTask *)arg1 wantsToDownloadBatchesFromSyncAnchor:(NSData *)arg2 progressHandler:(void (^)(CPLChangeBatch *, NSData *))arg3 completionHandler:(void (^)(NSData *, _Bool, NSError *))arg4;
- (id <CPLEngineTransportQueryTask>)task:(CPLPullFromTransportTask *)arg1 wantsToQueryTaskForCursor:(NSData *)arg2 class:(Class)arg3 progressHandler:(void (^)(CPLChangeBatch *, NSData *))arg4 completionHandler:(void (^)(NSError *))arg5;
@end

