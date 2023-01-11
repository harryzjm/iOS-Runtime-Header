//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSPredicate;

@interface CLSContactCache
{
    NSPredicate *_entryPredicateWithContactIdentifier;
    NSPredicate *_entryPredicateWithContactIdentifiers;
    NSPredicate *_entryPredicateWithUpdateTimestamp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSPredicate *entryPredicateWithUpdateTimestamp; // @synthesize entryPredicateWithUpdateTimestamp=_entryPredicateWithUpdateTimestamp;
@property(retain, nonatomic) NSPredicate *entryPredicateWithContactIdentifiers; // @synthesize entryPredicateWithContactIdentifiers=_entryPredicateWithContactIdentifiers;
@property(retain, nonatomic) NSPredicate *entryPredicateWithContactIdentifier; // @synthesize entryPredicateWithContactIdentifier=_entryPredicateWithContactIdentifier;
- (_Bool)_updateHasPicture:(_Bool)arg1 forEntry:(id)arg2;
- (_Bool)setLastHistoryToken:(id)arg1;
- (id)lastHistoryToken;
- (void)enumerateCachedEntriesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)numberOfCachedContacts;
- (id)cachedContactForContactIdentifier:(id)arg1;
- (_Bool)insertContactWithNoProfilePicture:(id)arg1;
- (_Bool)insertFaceprintAnalysisResult:(id)arg1 forContactIdentifier:(id)arg2;
- (void)invalidateCacheItemsBeforeDateWithTimestamp:(double)arg1;
- (void)invalidateCacheItemsForContactIdentifiers:(id)arg1;
- (void)invalidateCacheItemForContactIdentifier:(id)arg1;
- (id)dataModelName;
- (id)init;

@end
