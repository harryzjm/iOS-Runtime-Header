//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface XCTBlockingQueue : NSObject
{
    _Bool _finalized;
    NSObject<OS_dispatch_queue> *_mutex;
    NSObject<OS_dispatch_semaphore> *_sema;
    NSMutableArray *_objects;
}

@property _Bool finalized; // @synthesize finalized=_finalized;
@property(readonly) NSMutableArray *objects; // @synthesize objects=_objects;
@property(readonly) NSObject<OS_dispatch_semaphore> *sema; // @synthesize sema=_sema;
@property(readonly) NSObject<OS_dispatch_queue> *mutex; // @synthesize mutex=_mutex;
- (void).cxx_destruct;
- (void)finalize;
- (id)dequeueObject;
- (void)enqueueObject:(id)arg1;
- (void)enqueueObjects:(id)arg1;
- (id)init;

@end

