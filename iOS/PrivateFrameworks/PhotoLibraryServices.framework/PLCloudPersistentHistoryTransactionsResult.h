//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLCloudChangeEventsResult-Protocol.h>

@class NSArray, NSPersistentHistoryToken, NSString, PLPersistentHistoryTransactionIterator;

@interface PLCloudPersistentHistoryTransactionsResult : NSObject <PLCloudChangeEventsResult>
{
    NSArray *_transactions;
    PLPersistentHistoryTransactionIterator *_transactionIterator;
    CDUnknownBlockType _isTransactionSyncableFilter;
    long long _resultType;
    NSString *_currentTokenDescription;
    NSPersistentHistoryToken *_lastProcessedCoreDataToken;
}

+ (CDUnknownBlockType)isTransactionSyncableFilter;
+ (id)fetchTransactionsSinceToken:(id)arg1 inContext:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy) NSPersistentHistoryToken *lastProcessedCoreDataToken; // @synthesize lastProcessedCoreDataToken=_lastProcessedCoreDataToken;
@property(readonly, copy) NSString *currentTokenDescription; // @synthesize currentTokenDescription=_currentTokenDescription;
@property(readonly) long long resultType; // @synthesize resultType=_resultType;
- (void)updateLastProcessedCoreDataToken;
- (id)localEventForAllTransactions;
- (void)sendLocalEvent:(id)arg1 toEnumerationBlock:(CDUnknownBlockType)arg2;
- (void)enumerateLocalEventsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithResultType:(long long)arg1 transactionIterator:(id)arg2;
- (id)initWithUnsuccessfulResultType:(long long)arg1;
- (id)initWithSuccesfulTransactionIterator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
