//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccount.h>

@interface ACAccount (BRAdditions)
- (_Bool)br_isCloudDocsMigrationComplete;
- (void)br_setCloudDocsMigrationComplete:(_Bool)arg1;
- (void)br_setCloudDocsMigrated:(_Bool)arg1;
- (_Bool)br_isCloudDocsMigrated;
- (_Bool)br_isiCloudAccount;
- (_Bool)br_isPrimaryiCloudAccount;
- (_Bool)br_isPrimaryAccount;
- (_Bool)br_isManagedAppleID;
- (id)br_displayName;
- (id)br_lastName;
- (id)br_firstName;
- (_Bool)br_isEnabledForUbiquity;
- (_Bool)br_isEnabledForCloudDocs;
- (_Bool)br_isEnabledForDesktopSync;
- (_Bool)br_isEnabledForiCloudDesktop;
- (void)br_setEnabledForiCloudDesktop:(_Bool)arg1;
- (id)br_dsid;
@end
