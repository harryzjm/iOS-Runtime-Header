//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CNManagedProfileConnection;

@interface CNManagedConfiguration : NSObject
{
    NSString *_bundleIdentifier;
    id <CNManagedProfileConnection> _profileConnection;
}

+ (id)os_log;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <CNManagedProfileConnection> profileConnection; // @synthesize profileConnection=_profileConnection;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)accountForIdentifier:(id)arg1;
- (id)readableAccountsFromAccounts:(id)arg1;
- (id)writableAccountsFromAccounts:(id)arg1;
- (id)writableAccountIdentifiersFromIdentifiers:(id)arg1;
- (id)readableAccountIdentifiersFromIdentifiers:(id)arg1;
- (_Bool)canWriteToAccountWithIdentifier:(id)arg1;
- (_Bool)canReadFromAccountWithIdentifier:(id)arg1;
- (_Bool)accountIsManagedForIdentifier:(id)arg1;
- (_Bool)accountIsManaged:(id)arg1;
- (_Bool)canWriteToLocalAccount;
- (_Bool)canReadFromLocalAccount;
- (_Bool)deviceHasManagementRestrictions;
- (id)initWithBundleIdentifier:(id)arg1 managedProfileConnection:(id)arg2;
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1 managedProfileConnection:(id)arg2;
- (id)init;

@end
