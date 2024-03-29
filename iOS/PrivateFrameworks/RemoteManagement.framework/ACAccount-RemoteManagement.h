//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccount.h>

@class NSNumber, NSString;

@interface ACAccount (RemoteManagement)
+ (id)rm_createMAIDAccountWithStore:(id)arg1 username:(id)arg2 description:(id)arg3 dsid:(id)arg4 altDSID:(id)arg5 personaIdentifier:(id)arg6 enrollmentURL:(id)arg7;
+ (id)rm_createBearerAccountWithStore:(id)arg1 username:(id)arg2 description:(id)arg3 enrollmentURL:(id)arg4 authToken:(id)arg5;
+ (id)rm_createTestAccountWithStore:(id)arg1 username:(id)arg2 description:(id)arg3 enrollmentURL:(id)arg4;
- (_Bool)rm_isAccountSchemeMAID;
- (_Bool)rm_isAccountSchemeBearer;
- (_Bool)rm_isAccountSchemeTest;
@property(copy, setter=rm_setBearerToken:) NSString *rm_bearerToken;
@property(setter=rm_setmanagedByOlympus:) _Bool rm_managedByOlympus;
@property(copy, setter=rm_setPersonaIdentifier:) NSString *rm_personaIdentifier;
@property(copy, setter=rm_setRemoteManagingAccountIdentifier:) NSString *rm_remoteManagingAccountIdentifier;
@property(copy, setter=rm_setManagementSourceIdentifier:) NSString *rm_managementSourceIdentifier;
@property(copy, setter=rm_setEnrollmentURL:) NSString *rm_enrollmentURL;
@property(copy, setter=rm_setEnrollmentToken:) NSString *rm_enrollmentToken;
@property(copy, setter=rm_setDSID:) NSNumber *rm_DSID;
@property(copy, setter=rm_setAltDSID:) NSString *rm_altDSID;
@property(copy, setter=rm_setAccountScheme:) NSString *rm_accountScheme;

// Remaining properties
@property(retain) NSString *managingOwnerIdentifier; // @dynamic managingOwnerIdentifier;
@property(retain) NSString *managingSourceName; // @dynamic managingSourceName;
@end

