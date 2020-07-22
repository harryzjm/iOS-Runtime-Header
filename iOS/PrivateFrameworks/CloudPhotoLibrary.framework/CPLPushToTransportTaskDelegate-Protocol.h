//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLEngineSyncTaskDelegate-Protocol.h>

@class CPLChangeBatch, CPLPushToTransportTask, NSArray;
@protocol CPLEngineTransportCheckRecordsExistenceTask, CPLEngineTransportUploadBatchTask;

@protocol CPLPushToTransportTaskDelegate <CPLEngineSyncTaskDelegate>
- (id <CPLEngineTransportCheckRecordsExistenceTask>)task:(CPLPushToTransportTask *)arg1 wantsToCheckRecordsExistence:(NSArray *)arg2 fetchRecordProperties:(NSArray *)arg3 withCompletionHandler:(void (^)(NSDictionary *, NSError *))arg4;
- (id <CPLEngineTransportUploadBatchTask>)task:(CPLPushToTransportTask *)arg1 wantsToPushBatch:(CPLChangeBatch *)arg2 progressBlock:(void (^)(NSString *, float))arg3 continuationBlock:(void (^)(NSError *))arg4;
@end
