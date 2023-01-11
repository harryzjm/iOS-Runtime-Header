//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, CNMutableMultiDictionary;
@protocol CNScheduler;

@interface CNContactChangesNotifier : NSObject
{
    _Bool _observingNotification;
    id <CNScheduler> _resourceLock;
    id <CNScheduler> _workQueue;
    id <CNScheduler> _downstream;
    CNContactStore *_contactStore;
    CNMutableMultiDictionary *_registeredObservers;
}

+ (id)workQueue_createFetchersFromRegisteredObservers:(id)arg1;
+ (id)sharedNotifier;
- (void).cxx_destruct;
- (void)contactStoreDidChange:(id)arg1;
- (void)unregisterObserver:(id)arg1 forContact:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)unregisterObserver:(id)arg1 forContact:(id)arg2;
- (void)registerObserver:(id)arg1 forContact:(id)arg2 keysToFetch:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)registerObserver:(id)arg1 forContact:(id)arg2 keysToFetch:(id)arg3;
- (void)registerObserver:(id)arg1 forContact:(id)arg2;
- (id)initWithContactStore:(id)arg1 downstreamScheduler:(id)arg2 schedulerProvider:(id)arg3;
- (id)init;

@end
