//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _PASDatabaseJournal, _PASSqliteDatabase;
@protocol _PASSqliteErrorHandlerProtocol;

@interface SGQPSqlStore : NSObject
{
    NSString *_dbPath;
    _PASSqliteDatabase *_db;
    _PASDatabaseJournal *_journal;
    id _lockStateNotificationToken;
    NSObject<_PASSqliteErrorHandlerProtocol> *_errorHandler;
}

+ (id)inMemoryStoreForTesting;
+ (id)inMemoryStoreForTestingWithErrorHandler:(id)arg1;
+ (id)storeWithPath:(id)arg1;
+ (id)storeWithPath:(id)arg1 errorHandler:(id)arg2;
- (void).cxx_destruct;
- (void)migrateForTesting:(id)arg1;
- (id)dbForTesting;
- (_Bool)createSnapshot:(id)arg1;
- (void)stopJournalingAndExecuteQueries;
- (void)startJournaling;
- (void)dealloc;
- (void)_setupJournalAndExecuteExistingJournalQueries;
- (void)_registerJournalUnlockHandler;
- (_Bool)_createDbIfUnlocked;
- (_Bool)_runQueries:(id)arg1 andUpdateVersionTo:(unsigned long long)arg2 inTransactionOnDb:(id)arg3;
- (long long)_migrateTo:(id)arg1;
- (void)_runQuery:(id)arg1 withValues:(id)arg2;
- (void)deleteMessagesBeforeDate:(id)arg1;
- (void)deleteMessagesWithUniqueIdentifiers:(id)arg1;
- (void)deleteMessagesForConversation:(id)arg1;
- (id)loadMessagesForConversation:(id)arg1 limit:(long long)arg2;
- (void)storeMessageWithUid:(id)arg1 conversationId:(id)arg2 content:(id)arg3 createdAt:(id)arg4 senderIsAccountOwner:(_Bool)arg5;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 errorHandler:(id)arg2;

@end
