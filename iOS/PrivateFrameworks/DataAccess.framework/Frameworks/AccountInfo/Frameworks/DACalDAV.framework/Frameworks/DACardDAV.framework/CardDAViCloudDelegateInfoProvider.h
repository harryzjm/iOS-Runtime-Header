//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DACardDAV/CardDAVDelegateInfoProvider-Protocol.h>

@class ACAccountStore, ACAccountType, NSString;

@interface CardDAViCloudDelegateInfoProvider : NSObject <CardDAVDelegateInfoProvider>
{
    ACAccountStore *_accountStore;
    ACAccountType *_accountsType;
}

+ (id)delegateInfoForFamilyMembers:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) ACAccountType *accountsType; // @synthesize accountsType=_accountsType;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (_Bool)fetchGuardianStatus:(_Bool *)arg1 family:(id)arg2 account:(id)arg3 error:(id *)arg4;
- (id)nonParentsInFamily:(id)arg1 error:(id *)arg2;
- (id)appleIDsOfExistingDelegates:(id)arg1;
- (id)familyMembersPromise;
- (id)familyCircleReturningError:(id *)arg1;
- (id)cardDAVAccounts;
- (id)collectDelegatesForAccount:(id)arg1 error:(id *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
