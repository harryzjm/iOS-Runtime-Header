//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFCancelable-Protocol.h>

@class EDMessagePersistence, EFCancelationToken, EFQuery, EFQueue, EMMailboxScope, NSMutableSet, NSString;

@interface EDPersistedMessageQueryIterator : NSObject <EFCancelable>
{
    EDMessagePersistence *_messagePersistence;
    EMMailboxScope *_mailboxScope;
    EFQuery *_query;
    EFCancelationToken *_cancelationToken;
    EFQueue *_persistedMessageQueue;
    long long _remaining;
    NSMutableSet *_seenGlobalMessages;
    CDUnknownBlockType _handler;
}

- (void).cxx_destruct;
- (void)cancel;
- (_Bool)shouldCancel;
- (void)addPersistedMessages:(id)arg1;
- (void)addPersistedMessage:(id)arg1;
- (void)flush;
- (void)_processPersistedMessages:(id)arg1;
- (id)initWithMessagePersistence:(id)arg1 query:(id)arg2 batchSize:(long long)arg3 firstBatchSize:(long long)arg4 limit:(long long)arg5 handler:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
