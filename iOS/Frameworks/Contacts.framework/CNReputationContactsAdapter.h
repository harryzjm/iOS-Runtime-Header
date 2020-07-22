//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore;
@protocol CNScheduler, CNSchedulerProvider;

__attribute__((visibility("hidden")))
@interface CNReputationContactsAdapter : NSObject
{
    CNContactStore *_contactStore;
    id <CNSchedulerProvider> _schedulerProvider;
    id <CNScheduler> _storeScheduler;
}

@property(readonly, nonatomic) id <CNScheduler> storeScheduler; // @synthesize storeScheduler=_storeScheduler;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void).cxx_destruct;
- (id)contactsForPredicate:(id)arg1 keys:(id)arg2;
- (id)contactsForPhoneNumber:(id)arg1;
- (id)contactsForEmailAddress:(id)arg1;
- (id)initWithContactStore:(id)arg1 schedulerProvider:(id)arg2;
- (id)initWithContactStore:(id)arg1;
- (id)init;

@end

