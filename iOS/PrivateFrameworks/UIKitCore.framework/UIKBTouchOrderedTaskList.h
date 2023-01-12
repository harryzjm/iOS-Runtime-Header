//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSUUID, NSValue;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface UIKBTouchOrderedTaskList : NSObject
{
    NSUUID *_touchUUID;
    NSObject<OS_dispatch_queue> *_touchStateTasksQueue;
    NSMutableArray *_touchStateTasks;
    NSValue *_currentTouchPoint;
    _Bool _ignoredOnBegin;
    unsigned long long _pathIndex;
    double _originalStartTime;
}

+ (id)taskListForTouchUUID:(id)arg1 withPathIndex:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool ignoredOnBegin; // @synthesize ignoredOnBegin=_ignoredOnBegin;
@property(readonly, nonatomic) double originalStartTime; // @synthesize originalStartTime=_originalStartTime;
@property(readonly, nonatomic) unsigned long long pathIndex; // @synthesize pathIndex=_pathIndex;
@property(readonly, nonatomic) NSValue *currentTouchPoint; // @synthesize currentTouchPoint=_currentTouchPoint;
@property(readonly, nonatomic) NSUUID *touchUUID; // @synthesize touchUUID=_touchUUID;
- (id)firstTouchStateForUITouchPhase:(long long)arg1;
- (_Bool)executeTasksInView:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)removeTasksMatchingFilter:(CDUnknownBlockType)arg1;
- (_Bool)isExecutingFirstTask;
- (void)addTask:(id)arg1;
@property(readonly, nonatomic) _Bool hasTasks;
- (void)dealloc;
- (id)initWithTouchUUID:(id)arg1 withPathIndex:(unsigned long long)arg2;

@end

