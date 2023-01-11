//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;
@protocol OS_dispatch_queue, OS_os_log;

@interface HKObserverSet : NSObject
{
    NSMapTable *_observerMap;
    NSString *_name;
    NSObject<OS_os_log> *_category;
    NSObject<OS_dispatch_queue> *_defaultObserverQueue;
    struct os_unfair_lock_s _lock;
}

- (void).cxx_destruct;
- (void)_notifyObserver:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(readonly) unsigned long long count;
- (void)notifyObservers:(CDUnknownBlockType)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)_registerObserver:(id)arg1 queue:(id)arg2;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (void)registerObserver:(id)arg1;
- (id)initWithName:(id)arg1 loggingCategory:(id)arg2;

@end

