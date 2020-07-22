//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContactStore, NSArray;

__attribute__((visibility("hidden")))
@interface CNAggregateContactStore
{
    CNContactStore *_mainStore;
    NSArray *_contactStores;
}

@property(copy, nonatomic) NSArray *contactStores; // @synthesize contactStores=_contactStores;
- (void).cxx_destruct;
- (_Bool)clearChangeHistoryForClientIdentifier:(id)arg1 toChangeAnchor:(id)arg2 error:(id *)arg3;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id *)arg2;
- (_Bool)unregisterChangeHistoryClientIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)registerChangeHistoryClientIdentifier:(id)arg1 error:(id *)arg2;
- (id)userActivityUserInfoForContact:(id)arg1;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (_Bool)supportsSaveRequest:(id)arg1;
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (_Bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id *)arg3;
- (_Bool)setMeContact:(id)arg1 error:(id *)arg2;
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id *)arg2;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)defaultContainerIdentifier;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)groupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (_Bool)enumerateNonUnifiedContactsWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)meContactIdentifiers:(id *)arg1;
- (id)_unifiedMeContactWithKeysToFetch:(id)arg1 error:(id *)arg2;
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)unifiedContactCountWithError:(id *)arg1;
- (id)_unifiedContactsFromContacts:(id)arg1 unifyContactsFromMainStore:(_Bool)arg2 keysToFetch:(id)arg3 error:(id *)arg4;
- (void)didFetchContacts:(id)arg1 forPredicate:(id)arg2 fromStore:(id)arg3 unifiedFetch:(_Bool)arg4;
- (void)_enumerateStoresUsingBlock:(CDUnknownBlockType)arg1;
- (id)_allStoreResultsWithError:(id *)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)requestAccessForEntityType:(long long)arg1;
@property(readonly, nonatomic) __weak CNContactStore *mainStore;
- (_Bool)store:(id)arg1 supportsSelector:(SEL)arg2;
- (id)initWithContactStores:(id)arg1;
- (id)iOSMapper;
- (id)originForSuggestion:(id)arg1 error:(id *)arg2;

@end

