//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, WBSPasswordBreachContext;

@interface WBSPasswordBreachResults : NSObject
{
    struct os_unfair_lock_s _lock;
    WBSPasswordBreachContext *_context;
    NSMutableDictionary *_resultRecordsByPersistentIdentifier;
    NSMutableSet *_recentlyBreachedPersistentIdentifiers;
}

- (void).cxx_destruct;
- (void)_restoreResultsFromPersistentStoreIfNecessary;
- (void)_saveResultsToPersistentStore;
- (void)clearAllResultsSynchronously;
- (void)clearRecentlyBreachedResultRecords;
- (id)recentlyBreachedResultRecords;
- (void)addResultRecords:(id)arg1;
- (id)resultRecordsForQueries:(id)arg1;
- (id)initWithContext:(id)arg1;

@end
