//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NTKFace, _NTKCompanionFaceSnapshottingWindow;
@protocol OS_dispatch_queue;

@interface NTKCompanionFaceRenderer : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    _NTKCompanionFaceSnapshottingWindow *_window;
    _Bool _queueActive;
    NSMutableArray *_pendingTaskList;
    NTKFace *_currentFace;
    CDUnknownBlockType _faceBatchCompletionHandler;
}

+ (id)_storagePath;
+ (id)snapshotPathForFace:(id)arg1 detailMode:(long long)arg2;
+ (id)_snapshotNameForFace:(id)arg1 detailMode:(long long)arg2;
@property(copy, nonatomic) CDUnknownBlockType faceBatchCompletionHandler; // @synthesize faceBatchCompletionHandler=_faceBatchCompletionHandler;
@property(retain, nonatomic) NTKFace *currentFace; // @synthesize currentFace=_currentFace;
@property(nonatomic, getter=isQueueActive) _Bool queueActive; // @synthesize queueActive=_queueActive;
@property(retain, nonatomic) NSMutableArray *pendingTaskList; // @synthesize pendingTaskList=_pendingTaskList;
- (void).cxx_destruct;
- (void)_startNextWorkItem;
- (void)_notifyFinishedFaceBatchIfNeeded;
- (void)requestSnapshotOfFace:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end
