//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactStore.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNAggregateContactStore : CNContactStore
{
    CNContactStore *_mainStore;
    NSArray *_contactStores;
    CNContactStore *_contactStoreForMatchingDictionaryWork;
    NSArray *_postFetchDecoratorBlocks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *postFetchDecoratorBlocks; // @synthesize postFetchDecoratorBlocks=_postFetchDecoratorBlocks;
@property(retain, nonatomic) CNContactStore *contactStoreForMatchingDictionaryWork; // @synthesize contactStoreForMatchingDictionaryWork=_contactStoreForMatchingDictionaryWork;
@property(copy, nonatomic) NSArray *contactStores; // @synthesize contactStores=_contactStores;
- (_Bool)verifyChangeHistoryForClientIdentifier:(id)arg1 error:(id *)arg2;
- (id)latestConsumedChangeHistoryAnchorForClientIdentifier:(id)arg1 error:(id *)arg2;
- (id)individualContactCountWithError:(id *)arg1;
- (void)setLegacyTetheredSyncComputerAnchor:(id)arg1;
- (id)legacyTetheredSyncComputerAnchor;
- (void)setLegacyTetheredSyncDeviceAnchor:(id)arg1;
- (id)legacyTetheredSyncDeviceAnchor;
- (_Bool)setDefaultAccountIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)resetSortDataIfNeededWithError:(id *)arg1;
- (_Bool)moveContacts:(id)arg1 fromContainer:(id)arg2 toContainer:(id)arg3 error:(id *)arg4;
- (int)saveSequenceCount;
- (id)identifierWithError:(id *)arg1;
- (_Bool)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id *)arg4;
- (id)requestExtensionCommand:(id)arg1 error:(id *)arg2;
- (void)addPostFetchDecorator:(CDUnknownBlockType)arg1;
- (id)applyPostFetchDecoratorsToContacts:(id)arg1 keysToFetch:(id)arg2 unifyContactsFromMainStore:(_Bool)arg3;
- (id)applyPostFetchDecoratorsToContact:(id)arg1 keysToFetch:(id)arg2 unifyContactsFromMainStore:(_Bool)arg3;
- (_Bool)executeChangeHistoryClearRequest:(id)arg1 error:(id *)arg2;
- (_Bool)clearChangeHistoryForClientIdentifier:(id)arg1 toChangeAnchor:(id)arg2 error:(id *)arg3;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id *)arg2;
- (_Bool)unregisterChangeHistoryClientIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)registerChangeHistoryClientIdentifier:(id)arg1 error:(id *)arg2;
- (id)matchingDictionaryForContact:(id)arg1;
- (id)contactIdentifierWithMatchingDictionary:(id)arg1;
- (id)descriptorForRequiredKeysForMatchingDictionary;
- (id)findContactStoreForMatchingDictionaryWork;
- (id)userActivityUserInfoForContact:(id)arg1;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)currentHistoryAnchor;
- (id)currentHistoryToken;
- (id)enumeratorForChangeHistoryFetchRequest:(id)arg1 error:(id *)arg2;
- (id)enumeratorForContactFetchRequest:(id)arg1 error:(id *)arg2;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (_Bool)supportsSaveRequest:(id)arg1;
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (_Bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id *)arg3;
- (_Bool)setMeContact:(id)arg1 error:(id *)arg2;
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id *)arg2;
- (id)policyWithDescription:(id)arg1 error:(id *)arg2;
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
- (id)contactCountForFetchRequest:(id)arg1 error:(id *)arg2;
- (id)unifiedContactCountWithError:(id *)arg1;
- (id)sectionListOffsetsForSortOrder:(long long)arg1 error:(id *)arg2;
- (id)_unifiedContactsFromContacts:(id)arg1 unifyContactsFromMainStore:(_Bool)arg2 keysToFetch:(id)arg3 error:(id *)arg4;
- (void)didFetchContacts:(id)arg1 forPredicate:(id)arg2 fromStore:(id)arg3 unifiedFetch:(_Bool)arg4;
- (void)_enumerateStoresUsingBlock:(CDUnknownBlockType)arg1;
- (id)_allStoreResultsWithError:(id *)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)requestAccessForEntityType:(long long)arg1;
- (id)mainContactStore;
@property(readonly, nonatomic) __weak CNContactStore *mainStore;
- (_Bool)hasGroups;
- (_Bool)hasMultipleGroupsOrAccounts;
- (_Bool)store:(id)arg1 supportsSelector:(SEL)arg2;
- (id)initWithContactStores:(id)arg1 configuration:(id)arg2;
- (id)initWithContactStores:(id)arg1;
- (_Bool)isSpotlightIndexingSupported;
- (id)firstContactStoreSupportingSpotlightIndexing;
- (id)contactStoresSupportingSpotlightIndexing;
- (id)verifyIndexWithError:(id *)arg1;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1;
- (id)iOSMapper;
- (id)originForSuggestion:(id)arg1 error:(id *)arg2;

@end

