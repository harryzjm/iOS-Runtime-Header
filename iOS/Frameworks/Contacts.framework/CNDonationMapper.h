//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactsEnvironment, CNDonationStore, NSString;

__attribute__((visibility("hidden")))
@interface CNDonationMapper : NSObject
{
    CNContactsEnvironment *_environment;
    CNDonationStore *_donationStore;
}

+ (id)mapperIdentifier;
+ (id)log;
- (void).cxx_destruct;
@property(readonly, nonatomic) CNDonationStore *donationStore; // @synthesize donationStore=_donationStore;
@property(readonly, nonatomic) CNContactsEnvironment *environment; // @synthesize environment=_environment;
- (id)contactCountForFetchRequest:(id)arg1 error:(id *)arg2;
- (id)defaultContainerIdentifier;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)policyWithDescription:(id)arg1 error:(id *)arg2;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (_Bool)executeSaveRequest:(id)arg1 response:(id *)arg2 authorizationContext:(id)arg3 error:(id *)arg4;
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (id)meContactIdentifiers:(id *)arg1;
- (id)contactObservableForFetchRequest:(id)arg1;
@property(readonly) _Bool shouldLogContactsAccess;
- (id)authorizedKeysForContactKeys:(id)arg1 error:(id *)arg2;
- (_Bool)requestAccessForEntityType:(long long)arg1 error:(id *)arg2;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDonationStore:(id)arg1 environment:(id)arg2;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *legacyTetheredSyncComputerAnchor;
@property(retain, nonatomic) NSString *legacyTetheredSyncDeviceAnchor;
@property(readonly, nonatomic) _Bool shouldCaptureMetricsForQueries;
@property(readonly, nonatomic) _Bool shouldLogPrivacyAccountingAccessEvents;
@property(readonly) Class superclass;

@end

