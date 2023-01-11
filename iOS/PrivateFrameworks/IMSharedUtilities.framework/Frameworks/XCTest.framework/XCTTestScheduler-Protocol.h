//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSSet;
@protocol OS_dispatch_queue, XCTTestSchedulerDelegate, XCTTestSchedulerWorker;

@protocol XCTTestScheduler
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property __weak id <XCTTestSchedulerDelegate> delegate;
@property(retain) NSObject<OS_dispatch_queue> *workerQueue;
- (void)startWithTestIdentifiersToRun:(NSSet *)arg1 testIdentifiersToSkip:(NSSet *)arg2;
- (void)workerDidBecomeAvailable:(id <XCTTestSchedulerWorker>)arg1;
@end
