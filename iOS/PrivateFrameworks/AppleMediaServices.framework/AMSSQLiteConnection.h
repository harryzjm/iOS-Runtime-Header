//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSSQLiteConnectionOptions, NSError, NSMapTable, NSMutableArray;
@protocol AMSSQLiteConnectionDelegate;

__attribute__((visibility("hidden")))
@interface AMSSQLiteConnection : NSObject
{
    NSMutableArray *_afterTransactionBlocks;
    struct sqlite3 *_database;
    id <AMSSQLiteConnectionDelegate> _delegate;
    _Bool _didResetForCorruption;
    NSMapTable *_preparedStatements;
    long long _transactionDepth;
    _Bool _transactionWantsRollback;
    AMSSQLiteConnectionOptions *_options;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) AMSSQLiteConnectionOptions *options; // @synthesize options=_options;
@property(nonatomic) __weak id <AMSSQLiteConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_verifiedStatementForSQL:(id)arg1 error:(id *)arg2;
- (id)_verifiedStatementForPreparedStatement:(id)arg1 error:(id *)arg2;
- (id)_statementForPreparedStatement:(id)arg1 error:(id *)arg2;
- (_Bool)_resetAfterIOError;
- (_Bool)_resetAfterCorruptionError;
- (id)_prepareStatement:(id)arg1 error:(id *)arg2;
- (_Bool)_performResetAfterCorruptionError;
- (_Bool)_openAndAllowRetry:(_Bool)arg1 error:(id *)arg2;
- (_Bool)_openWithError:(id *)arg1;
- (void)_flushAfterTransactionBlocks;
- (void)_finalizeAllStatements;
- (_Bool)_executeWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)_executeStatement:(id)arg1 error:(id *)arg2;
- (_Bool)_close;
- (_Bool)executeWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSError *currentError;
- (_Bool)truncate;
- (id)prepareStatement:(id)arg1 error:(id *)arg2;
- (void)performTransaction:(CDUnknownBlockType)arg1;
- (_Bool)openWithError:(id *)arg1;
@property(readonly, nonatomic) long long lastChangeCount;
- (_Bool)finalizePreparedStatement:(id)arg1 error:(id *)arg2;
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2 bindings:(CDUnknownBlockType)arg3;
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2;
- (void)executeQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;
- (_Bool)executePreparedStatement:(id)arg1 error:(id *)arg2 bindings:(CDUnknownBlockType)arg3;
- (_Bool)executePreparedStatement:(id)arg1 error:(id *)arg2;
- (void)executePreparedQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;
- (void)dispatchAfterTransaction:(CDUnknownBlockType)arg1;
- (_Bool)close;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;

@end

