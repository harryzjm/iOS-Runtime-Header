//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNDataMapper-Protocol.h>

@class CNContactsEnvironment, CNiOSAddressBook, NSString;
@protocol CNContactsLogger;

@interface CNiOSAddressBookDataMapper : NSObject <CNDataMapper>
{
    CNiOSAddressBook *_addressBook;
    CNContactsEnvironment *_environment;
    id <CNContactsLogger> _logger;
}

+ (id)contactBuffersDecoderForFetchRequest:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) id <CNContactsLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) CNContactsEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) CNiOSAddressBook *addressBook; // @synthesize addressBook=_addressBook;
- (void).cxx_destruct;
- (_Bool)clearChangeHistoryForClientIdentifier:(id)arg1 toChangeAnchor:(id)arg2 error:(id *)arg3;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id *)arg2;
- (_Bool)unregisterChangeHistoryClientIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)registerChangeHistoryClientIdentifier:(id)arg1 error:(id *)arg2;
- (id)contactIdentifierWithMatchingDictionary:(id)arg1;
- (id)matchingDictionaryForContact:(id)arg1;
- (id)descriptorForRequiredKeysForMatchingDictionary;
- (id)userActivityUserInfoForContact:(id)arg1;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)groupsWithIdentifiers:(id)arg1 error:(id *)arg2;
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id *)arg2;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)_containersMatchingPredicate:(id)arg1 remote:(_Bool)arg2 error:(id *)arg3;
- (id)defaultContainerIdentifierForAddressBook:(void *)arg1;
- (id)defaultContainerIdentifier;
- (void)_postProcessGroupsFromSaveContext:(id)arg1;
- (_Bool)_processSubgroupMembershipsFromSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_processContactMembershipsFromSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_processGroupsFromSaveContext:(id)arg1 error:(id *)arg2;
- (void)_postProcessContactsFromSaveContext:(id)arg1;
- (_Bool)_processContactChangeRequestsFromSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_processContactsFromSaveContext:(id)arg1 error:(id *)arg2;
- (void)_postProcessContainersFromSaveContext:(id)arg1;
- (_Bool)_processContainersFromSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_processAccountsFromSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_fetchGroupsInSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_fetchContactsInSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_fetchContainersInSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_fetchAccountsInSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)_fechAllRecordsInSaveContext:(id)arg1 error:(id *)arg2;
- (_Bool)executeSaveRequest:(id)arg1 response:(id *)arg2 error:(id *)arg3;
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (_Bool)canExecuteSaveRequest:(id)arg1 error:(id *)arg2;
- (id)meContactIdentifiers:(id *)arg1;
- (_Bool)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id *)arg4;
- (_Bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id *)arg3;
- (_Bool)setMeContact:(id)arg1 error:(id *)arg2;
- (id)encodedContactsCursorForFetchRequest:(id)arg1 error:(id *)arg2;
- (_Bool)fetchEncodedContactsForFetchRequest:(id)arg1 error:(id *)arg2 cancelationToken:(id)arg3 batchHandler:(CDUnknownBlockType)arg4;
- (_Bool)fetchAndDecodeEncodedContactsForFetchRequest:(id)arg1 error:(id *)arg2 cancelationToken:(id)arg3 batchHandler:(CDUnknownBlockType)arg4;
- (_Bool)fetchContactsForFetchRequest:(id)arg1 error:(id *)arg2 batchHandler:(CDUnknownBlockType)arg3;
- (id)contactObservableForFetchRequest:(id)arg1;
- (id)unifiedContactCountWithError:(id *)arg1;
- (id)identifierWithError:(id *)arg1;
- (_Bool)requestAccessForEntityType:(long long)arg1 error:(id *)arg2;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContactsEnvironment:(id)arg1 addressBook:(id)arg2;
- (id)initWithContactsEnvironment:(id)arg1;
- (id)initWithAddressBook:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

