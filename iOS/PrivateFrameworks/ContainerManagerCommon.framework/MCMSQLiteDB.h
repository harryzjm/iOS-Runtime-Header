//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol MCMSQLiteDBCodeSigningPeerageDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MCMSQLiteDB : NSObject
{
    id <MCMSQLiteDBCodeSigningPeerageDelegate> _peerageDelegate;
    struct sqlite3 *_db;
    NSURL *_url;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (struct sqlite3 *)openDBWithURL:(id)arg1 queue:(id)arg2 error:(id *)arg3;
+ (_Bool)moveDBWithURL:(id)arg1 toURL:(id)arg2 queue:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) struct sqlite3 *db; // @synthesize db=_db;
@property(nonatomic) __weak id <MCMSQLiteDBCodeSigningPeerageDelegate> peerageDelegate; // @synthesize peerageDelegate=_peerageDelegate;
- (_Bool)deleteAllInvalidPluginCodeSigningEntriesWithNumChanges:(int *)arg1 error:(id *)arg2;
- (id)childParentMapWithError:(id *)arg1;
- (_Bool)deleteAllAdvanceCopiesOfCodeSigningEntriesWithError:(id *)arg1;
- (id)parentIdentifierForChildIdentifier:(id)arg1 error:(id *)arg2;
- (id)childIdentifiersForParentIdentifier:(id)arg1 error:(id *)arg2;
- (id)identifiersWithError:(id *)arg1;
- (id)enumerateIdentifiersAndCodeSigningInfoUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)invalidateCodeSigningForIdentifierAndAllChildren:(id)arg1 error:(id *)arg2;
- (_Bool)invalidateCodeSigningWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)codeSigningEntryWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)deleteCodeSigningEntryWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)addCodeSigningEntry:(id)arg1 withIdentifier:(id)arg2 error:(id *)arg3;
- (id)_selectCodeSigningEntryWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)_codeSigningEntryFromStatementRow:(struct sqlite3_stmt *)arg1 error:(id *)arg2;
- (_Bool)_deleteCodeSigningWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)_insertCodeSigningData:(id)arg1 forIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)_insertCodeSigningInfo:(id)arg1 forIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)_performInsertOrUpdateQuery:(const char *)arg1 withCodeSigningEntry:(id)arg2 forIdentifier:(id)arg3 isUpdate:(_Bool)arg4 error:(id *)arg5;
- (_Bool)_insertChildIdentifier:(id)arg1 forParentIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)_performSingleParameterQuery:(const char *)arg1 withTextInput:(id)arg2 error:(id *)arg3;
- (_Bool)_performSingleParameterQuery:(const char *)arg1 withTextInput:(id)arg2 expectedChanges:(int)arg3 error:(id *)arg4;
- (_Bool)_performTwoParameterQuery:(const char *)arg1 withTextInputOne:(id)arg2 andTextInputTwo:(id)arg3 expectedChanges:(int)arg4 error:(id *)arg5;
- (void)closeDB;
- (_Bool)_sqliteExec:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithURL:(id)arg1 queue:(id)arg2 error:(id *)arg3;

@end

