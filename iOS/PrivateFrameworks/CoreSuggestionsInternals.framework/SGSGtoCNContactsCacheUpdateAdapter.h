//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGJournalContactsObserver-Protocol.h>

@class NSString, SGSqlEntityStore;

@interface SGSGtoCNContactsCacheUpdateAdapter : NSObject <SGJournalContactsObserver>
{
    SGSqlEntityStore *_store;
}

@property(nonatomic) __weak SGSqlEntityStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)removeAllStoredPseudoContacts;
- (void)rejectContact:(id)arg1;
- (void)confirmContact:(id)arg1;
- (void)addContact:(id)arg1;
- (id)initWithSGSqlEntityStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

