//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TRIServerContext, TRITaskQueue, TRIXPCActivityManager;
@protocol OS_dispatch_queue;

@interface TRIDServer : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    TRIServerContext *_context;
    TRITaskQueue *_taskQueue;
    TRIXPCActivityManager *_xpcActivityManager;
    _Bool _isRunning;
}

+ (id)sharedServer;
+ (id)_triPath;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
- (unsigned long long)_getDiskUsageInBytes;
- (void)_registerXpcStreamEventHandler;
- (_Bool)_shouldContinue;
- (void)_dispatchIfUnlocked:(CDUnknownBlockType)arg1;
- (void)_logMetrics:(id)arg1 stopwatch:(id)arg2;
- (void)start;
- (id)_getFreeDiskSpace;
- (void)_asyncStartWithMetrics:(id)arg1;
- (void)_updateSystemInfo;
- (id)initWithPath:(id)arg1;
- (id)init;

@end
