//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface SGLongRunningTaskManager : NSObject
{
    NSHashTable *_tasks;
    struct _opaque_pthread_mutex_t _lock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)tellCurrentTasksToDefer;
- (void)unregister:(id)arg1;
- (id)taskWithDeadline:(double)arg1;
- (id)task;
- (void)dealloc;
- (id)init;

@end

