//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOExperimentConfigurationObserverProxy : NSObject
{
    NSHashTable *_observers;
    struct os_unfair_lock_s _observersLock;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (unsigned long long)observersCount;
- (void)forEachObserver:(CDUnknownBlockType)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)description;
- (id)init;

@end

