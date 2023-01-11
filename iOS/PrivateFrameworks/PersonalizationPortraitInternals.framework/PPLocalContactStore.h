//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, PPContactScorer, _PASLock;
@protocol SGSuggestionsServiceContactsProtocol;

@interface PPLocalContactStore : NSObject
{
    CNContactStore *_store;
    id <SGSuggestionsServiceContactsProtocol> _suggestionsContactService;
    PPContactScorer *_contactScorer;
    _PASLock *_diskCacheLock;
}

+ (id)defaultStore;
- (void).cxx_destruct;
- (id)_allCNNameRecordsFromDiskCache:(id)arg1;
- (_Bool)_writeCNNameRecords:(id)arg1 history:(id)arg2 diskCache:(id)arg3 fullLoadFromSource:(_Bool)arg4;
- (id)_nameRecordKeysToFetch;
- (void)registerContactsChangeHistoryForClient:(id)arg1;
- (_Bool)clearChangeHistoryForClient:(id)arg1 history:(id)arg2;
- (id)contactsChangeHistoryForClient:(id)arg1 error:(id *)arg2;
- (id)_changeHistoryIdentifierForClient:(id)arg1;
- (void)_namesRecordsForAllFoundInAppsContactsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_cnNameRecordsForAllContactsFromSource;
- (id)_cnNameRecordsForAllContacts;
- (id)_allNameRecordsFromAllSources;
- (id)_nameRecordFromCNContactChange:(id)arg1;
- (id)contactNameRecordChangesForClient:(id)arg1 error:(id *)arg2;
- (id)contactNameRecordsForClient:(id)arg1 error:(id *)arg2;
- (_Bool)iterContactNameRecordsForClient:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)init;

@end
