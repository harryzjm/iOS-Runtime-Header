//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDMessageRepositoryQueryHandler-Protocol.h>
#import <EmailDaemon/EFCancelable-Protocol.h>

@class EDMessagePersistence, EDPersistenceHookRegistry, EFLocked, EFQuery, EMObjectID, NSSet, NSString;
@protocol EMMessageListItemQueryResultsObserver;

@interface EDMessageRepositoryQueryHandler : NSObject <EFCancelable, EDMessageRepositoryQueryHandler>
{
    struct atomic_flag _didStart;
    NSSet *_mailboxes;
    EFQuery *_query;
    EDMessagePersistence *_messagePersistence;
    EDPersistenceHookRegistry *_hookRegistry;
    id <EMMessageListItemQueryResultsObserver> _resultsObserver;
    EMObjectID *_observationIdentifier;
    long long _dateSortOrder;
    EFLocked *_summaryLoadersMapTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EFLocked *summaryLoadersMapTable; // @synthesize summaryLoadersMapTable=_summaryLoadersMapTable;
@property(readonly, nonatomic) long long dateSortOrder; // @synthesize dateSortOrder=_dateSortOrder;
@property(readonly, nonatomic) EMObjectID *observationIdentifier; // @synthesize observationIdentifier=_observationIdentifier;
@property(readonly, nonatomic) id <EMMessageListItemQueryResultsObserver> resultsObserver; // @synthesize resultsObserver=_resultsObserver;
@property(readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry; // @synthesize hookRegistry=_hookRegistry;
@property(readonly, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
@property(readonly, copy, nonatomic) EFQuery *query; // @synthesize query=_query;
- (id)threadReconciliationQueries;
- (id)messageReconciliationQueries;
- (id)_distinctObjectIDs:(id)arg1 queryHandlerLog:(id)arg2;
- (void)requestSummaryForMessageObjectID:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *mailboxes; // @synthesize mailboxes=_mailboxes;
- (void)cancel;
- (void)start;
- (void)tearDown;
- (void)test_tearDown;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 messagePersistence:(id)arg2 hookRegistry:(id)arg3 observer:(id)arg4 observationIdentifier:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
