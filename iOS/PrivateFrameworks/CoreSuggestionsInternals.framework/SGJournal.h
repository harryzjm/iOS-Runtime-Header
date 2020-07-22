//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SGJournal : NSObject
{
    NSMutableArray *_calendarObservers;
    NSMutableArray *_contactsObservers;
    NSMutableArray *_queuedOperations;
    _Bool _observersFrozen;
}

- (void).cxx_destruct;
- (_Bool)hasObserver:(id)arg1;
- (void)thawObserversForTesting;
- (void)freezeObservers;
- (void)addContactsObserver:(id)arg1;
- (void)addCalendarObserver:(id)arg1;
- (void)addEntries:(id)arg1;
- (unsigned long long)_eventBatchOperationSupportedForEntries:(id)arg1;
- (void)addEntry:(id)arg1;
- (void)_callCalendarObservers:(id)arg1 contactsObservers:(id)arg2 withEntry:(id)arg3;
- (id)init;

@end

