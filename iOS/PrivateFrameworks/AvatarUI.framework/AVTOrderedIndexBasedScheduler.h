//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTIndexBasedScheduler-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface AVTOrderedIndexBasedScheduler : NSObject <AVTIndexBasedScheduler>
{
    struct NSMutableDictionary *_scheduledTasks;
    struct NSMutableArray *_scheduledTasksOrder;
    struct NSMutableDictionary *_readyTasks;
    NSObject<OS_dispatch_queue> *_stateLock;
}

+ (id)rowBaseIndexForIndex:(id)arg1;
+ (id)indexesForReadyTasksToRunGivenScheduledTasks:(struct NSMutableDictionary *)arg1 order:(struct NSMutableArray *)arg2 readyTasks:(struct NSMutableDictionary *)arg3 readyRowIndex:(id)arg4;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateLock; // @synthesize stateLock=_stateLock;
@property(readonly, nonatomic) NSMutableDictionary *readyTasks; // @synthesize readyTasks=_readyTasks;
@property(readonly, nonatomic) NSMutableArray *scheduledTasksOrder; // @synthesize scheduledTasksOrder=_scheduledTasksOrder;
@property(readonly, nonatomic) NSMutableDictionary *scheduledTasks; // @synthesize scheduledTasks=_scheduledTasks;
- (void).cxx_destruct;
- (void)cancelTask:(CDUnknownBlockType)arg1;
- (void)cancelAllTasks;
- (void)taskReady:(CDUnknownBlockType)arg1 forIndex:(unsigned long long)arg2;
- (void)scheduleTask:(CDUnknownBlockType)arg1 forIndex:(unsigned long long)arg2;
- (void)performStateWork:(CDUnknownBlockType)arg1;
- (id)initWithEnvironment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
