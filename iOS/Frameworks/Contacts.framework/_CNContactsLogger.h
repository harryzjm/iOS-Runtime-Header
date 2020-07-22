//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNContactsLogger-Protocol.h>

@class NSString;
@protocol OS_os_log;

@interface _CNContactsLogger : NSObject <CNContactsLogger>
{
    NSObject<OS_os_log> *_log;
}

@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
- (void).cxx_destruct;
- (void)XPCConnectionWasInvalidated;
- (void)XPCConnectionWasInterrupted;
- (void)internalError:(id)arg1;
- (void)SPIUsageLackingEntitlementRejectedForPID:(int)arg1;
- (void)SPIUsageLackingEntitlementGrantedForPID:(int)arg1;
- (void)serviceError:(id)arg1;
- (void)updatingContact:(id)arg1;
- (void)deletingContact:(id)arg1;
- (void)addingContacts:(id)arg1 toContainerWithIdentifier:(id)arg2;
- (void)saveRequestFailed:(id)arg1;
- (void)saveRequestInvalid:(id)arg1;
- (void)didFetchEncodedContacts:(id)arg1 error:(id)arg2;
- (void)didFetchContacts:(id)arg1 error:(id)arg2;
- (void)fetchEncodedContactsMatchingPredicate:(id)arg1 unifyResults:(_Bool)arg2 keysToFetch:(id)arg3;
- (void)fetchContactsProgressivelyMatchingPredicate:(id)arg1 unifyResults:(_Bool)arg2 keysToFetch:(id)arg3;
- (void)fetchContactsMatchingPredicate:(id)arg1 unifyResults:(_Bool)arg2 keysToFetch:(id)arg3;
- (void)noAccessToContactsWithError:(id)arg1;
- (void)contactsAccessWasGranted:(_Bool)arg1;
- (void)tccAccessRequestWasDenied;
- (void)tccAccessPreflightWasDenied;
- (void)servicingContactsRequest:(CDUnknownBlockType)arg1;
- (void)clearingChangeHistory:(CDUnknownBlockType)arg1;
- (void)fetchingChangeHistory:(CDUnknownBlockType)arg1;
- (void)unregisteringForChangeHistory:(CDUnknownBlockType)arg1;
- (void)registeringForChangeHistory:(CDUnknownBlockType)arg1;
- (void)saving:(CDUnknownBlockType)arg1;
- (void)fetchingDefaultContainerIdentifier:(CDUnknownBlockType)arg1;
- (void)fetchingContainers:(CDUnknownBlockType)arg1;
- (void)fetchingGroups:(CDUnknownBlockType)arg1;
- (void)fetchingContactsBatch:(CDUnknownBlockType)arg1;
- (void)fetchingContactIdentifierWithMatchingDictionary:(CDUnknownBlockType)arg1;
- (void)fetchingContactWithUserActivity:(CDUnknownBlockType)arg1;
- (void)fetchingContacts:(CDUnknownBlockType)arg1;
- (void)fetchingContactCount:(CDUnknownBlockType)arg1;
- (void)changingMeContact:(CDUnknownBlockType)arg1;
- (void)fetchingMeContactIdentifier:(CDUnknownBlockType)arg1;
- (void)requestingAccessForContacts:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

