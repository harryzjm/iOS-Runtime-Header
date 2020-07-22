//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NUJobQueue;
@protocol OS_dispatch_queue;

@interface NUJobPriorityQueue : NSObject
{
    NSMutableArray *_jobs;
    _Bool _needSort;
    NUJobQueue *_owner;
    NSObject<OS_dispatch_queue> *_runQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    _Bool _isRunning;
    NSString *_name;
}

@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)_runNextJob;
- (void)_run;
- (void)_startRunning;
- (_Bool)start;
- (void)_sort;
- (void)_sortIfNeeded;
@property(readonly) long long count;
- (id)_popJob;
- (id)popJob;
- (_Bool)_removeJob:(id)arg1;
- (_Bool)removeJob:(id)arg1;
- (void)_addJob:(id)arg1;
- (void)addJob:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1 owner:(id)arg2 qos:(unsigned int)arg3;

@end
