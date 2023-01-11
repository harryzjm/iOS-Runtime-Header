//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDDatabaseTransaction, NSLock, NSProgress, NSURL;
@protocol HDDatabaseJournalDelegate, HDJournalChapter;

@interface HDDatabaseJournal : NSObject
{
    struct os_unfair_lock_s _progressLock;
    NSProgress *_progressLock_observableProgress;
    NSProgress *_progressLock_internalProgress;
    struct os_unfair_lock_s _activeTransactionLock;
    struct os_unfair_lock_s _interruptionLock;
    HDDatabaseTransaction *_activeMergeTransaction;
    long long _journalStatus;
    _Bool _interrupted;
    _Bool _invalidated;
    Class _lastInsertedEntryClass;
    long long _type;
    id <HDDatabaseJournalDelegate> _delegate;
    NSURL *_URL;
    NSLock *_journalLock;
    id <HDJournalChapter> _currentJournalChapter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <HDJournalChapter> currentJournalChapter; // @synthesize currentJournalChapter=_currentJournalChapter;
@property(retain, nonatomic) NSLock *journalLock; // @synthesize journalLock=_journalLock;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak id <HDDatabaseJournalDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (_Bool)_isJournalDatabaseFeatureEnabled;
- (void)_unitTesting_setJournalStatusRequiresMerge;
- (id)_unitTesting_directoryURL;
- (void)_unitTesting_closeCurrentJournalChapter;
- (_Bool)_performPostJournalMergeWithVersion:(unsigned int)arg1 profile:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
- (void)_mergeJournalEntries:(id)arg1 profile:(id)arg2;
- (void)_waitIfInterrupted;
- (_Bool)_appendData:(id)arg1 entryClass:(Class)arg2 error:(id *)arg3;
- (_Bool)_createNextJournalChapterWithError:(id *)arg1;
- (void)_executeAtomically:(CDUnknownBlockType)arg1;
- (id)_mergeTransactionContextWithContext:(id)arg1;
- (_Bool)_setActiveTransactionAndReturnInterrupted:(id)arg1;
- (unsigned int)_mergeJournalChapter:(id)arg1 profile:(id)arg2 accessibilityAssertion:(id)arg3;
- (_Bool)_processJournalChaptersWithProfile:(id)arg1;
- (unsigned long long)sizeOnDisk;
- (long long)journalChapterCount;
- (void)invalidate;
- (void)resumeJournalMerge;
- (void)interruptJournalMerge;
- (_Bool)mergeWithProfile:(id)arg1;
- (id)progressForJournalMerge;
- (_Bool)performMergeTransactionWithProfile:(id)arg1 transactionContext:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;
- (_Bool)addJournalEntries:(id)arg1 profile:(id)arg2 error:(id *)arg3;
- (void)unlock;
- (void)lock;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithType:(long long)arg1 path:(id)arg2;

@end
