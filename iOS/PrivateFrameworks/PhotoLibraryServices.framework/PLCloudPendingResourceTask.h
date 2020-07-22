//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLResourceTransferTask, NSDate, NSMutableDictionary;

@interface PLCloudPendingResourceTask : NSObject
{
    CPLResourceTransferTask *_transferTask;
    NSMutableDictionary *_pendingTasks;
    NSDate *_lastUpdated;
    _Bool _completed;
    _Bool _transferTaskRemoved;
    _Bool _highPriority;
    _Bool _transferStarted;
    float _lastReportedProgress;
}

@property(readonly, nonatomic) float lastReportedProgress; // @synthesize lastReportedProgress=_lastReportedProgress;
@property(readonly, nonatomic) _Bool transferStarted; // @synthesize transferStarted=_transferStarted;
@property(readonly, nonatomic, getter=isHighPriority) _Bool highPriority; // @synthesize highPriority=_highPriority;
- (id)lastUpdated;
- (id)taskIDs;
- (void)cancelTaskWithIdentifier:(id)arg1;
- (void)reportCompletionWithError:(id)arg1;
- (void)reportProgress:(float)arg1;
- (void)addProgressBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 withTaskIdentifier:(id)arg3;
- (void)keepAlive;
- (void)dealloc;
- (void)setTransferTask:(id)arg1;
- (id)initWithProgressBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 forTaskIdentifier:(id)arg3 highPriority:(_Bool)arg4;

@end
