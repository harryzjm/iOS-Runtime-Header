//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsFoundation/CNObservable.h>

#import <Contacts/ABPredicateDelegate-Protocol.h>

@class ABPredicate, CNCancelationToken, CNContactsEnvironment, NSString;
@protocol CNObserver;

__attribute__((visibility("hidden")))
@interface _CNABPredicateObservable : CNObservable <ABPredicateDelegate>
{
    void *_addressBook;
    unsigned int _sortOrdering;
    ABPredicate *_predicate;
    unsigned long long _options;
    CNContactsEnvironment *_environment;
    CNCancelationToken *_cancelationToken;
    id <CNObserver> _observer;
}

- (void).cxx_destruct;
- (_Bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2 moreComing:(_Bool)arg3;
- (_Bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2 metadata:(id)arg3;
- (_Bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2;
- (_Bool)predicateShouldContinue:(id)arg1;
- (id)subscribe:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
