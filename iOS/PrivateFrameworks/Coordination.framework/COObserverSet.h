//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface COObserverSet : NSObject
{
    struct os_unfair_lock_s _lock;
    NSOperationQueue *_queue;
    NSHashTable *_registrations;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSHashTable *registrations; // @synthesize registrations=_registrations;
- (id)registeredNames;
- (void)postNotification:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)addObserverForName:(id)arg1 observable:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)_withLock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (id)init;

@end

