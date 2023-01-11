//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTScheduler-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface AVTSerialScheduler : NSObject <AVTScheduler>
{
    struct NSMutableArray *_priorityTasks;
    struct NSMutableArray *_backlogTasks;
    NSObject<OS_dispatch_queue> *_stateLock;
    long long _order;
}

+ (CDUnknownBlockType)nextTaskToRunForPriorityTasks:(struct NSMutableArray *)arg1 backlogTasks:(struct NSMutableArray *)arg2 order:(long long)arg3;
+ (id)fifoSchedulerWithEnvironment:(id)arg1;
+ (id)lifoSchedulerWithEnvironment:(id)arg1;
@property(readonly, nonatomic) long long order; // @synthesize order=_order;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateLock; // @synthesize stateLock=_stateLock;
@property(readonly, nonatomic) NSMutableArray *backlogTasks; // @synthesize backlogTasks=_backlogTasks;
@property(readonly, nonatomic) NSMutableArray *priorityTasks; // @synthesize priorityTasks=_priorityTasks;
- (void).cxx_destruct;
- (void)lowerTaskPriority:(CDUnknownBlockType)arg1;
- (void)cancelTask:(CDUnknownBlockType)arg1;
- (void)cancelAllTasks;
- (void)didCompleteTask:(CDUnknownBlockType)arg1;
- (void)startTask:(CDUnknownBlockType)arg1;
- (void)scheduleTask:(CDUnknownBlockType)arg1;
- (void)performStateWork:(CDUnknownBlockType)arg1;
- (id)initWithEnvironment:(id)arg1 order:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

