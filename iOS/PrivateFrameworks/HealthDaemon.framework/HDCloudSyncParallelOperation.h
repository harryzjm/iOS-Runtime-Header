//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDSynchronousTaskGroupDelegate-Protocol.h>

@class HDSynchronousTaskGroup, NSArray, NSMutableArray, NSString;

@interface HDCloudSyncParallelOperation <HDSynchronousTaskGroupDelegate>
{
    NSMutableArray *_operations;
    HDSynchronousTaskGroup *_taskGroup;
    struct os_unfair_lock_s _lock;
}

+ (_Bool)shouldProduceOperationAnalytics;
+ (_Bool)shouldLogAtOperationStart;
- (void).cxx_destruct;
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(_Bool)arg2 errors:(id)arg3;
- (void)addOperation:(id)arg1;
- (void)addOperationOfClass:(Class)arg1;
@property(readonly, copy) NSArray *operations;
- (void)main;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
