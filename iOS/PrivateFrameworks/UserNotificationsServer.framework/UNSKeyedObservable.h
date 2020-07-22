//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface UNSKeyedObservable : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSMutableDictionary *_observersByKey;
}

- (void).cxx_destruct;
- (id)_observersForKey:(id)arg1;
- (void)_callOutQueue_notifyObserversKey:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)notifyObserversKey:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_queue_removeObserver:(id)arg1 forKey:(id)arg2;
- (void)removeObserver:(id)arg1 forKey:(id)arg2;
- (void)_queue_addObserver:(id)arg1 forKey:(id)arg2;
- (void)addObserver:(id)arg1 forKey:(id)arg2;
- (id)initWithQueue:(id)arg1 callOutQueue:(id)arg2;

@end

