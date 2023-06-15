//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Security/OTClique.h>

@interface OTClique (Framework)
+ (_Bool)preflightRecoverOctagonUsingRecoveryKey:(id)arg1 recoveryKey:(id)arg2 error:(id *)arg3;
+ (_Bool)recoverWithRecoveryKey:(id)arg1 recoveryKey:(id)arg2 error:(id *)arg3;
+ (_Bool)isRecoveryKeySet:(id)arg1 error:(id *)arg2;
+ (_Bool)isRecoveryKeySetInSOS:(id)arg1 error:(id *)arg2;
+ (_Bool)isRecoveryKeySetInOctagon:(id)arg1 error:(id *)arg2;
+ (_Bool)setRecoveryKeyWithContext:(id)arg1 recoveryKey:(id)arg2 error:(id *)arg3;
+ (id)createAndSetRecoveryKeyWithContext:(id)arg1 error:(id *)arg2;
+ (id)fetchAccountWideSettings:(id)arg1 error:(id *)arg2;
+ (id)fetchAccountWideSettingsDefaultWithForceFetch:(_Bool)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)fetchAccountWideSettingsWithForceFetch:(_Bool)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)_fetchAccountWideSettingsDefaultWithForceFetch:(_Bool)arg1 useDefault:(_Bool)arg2 configuration:(id)arg3 error:(id *)arg4;
+ (_Bool)invalidateEscrowCache:(id)arg1 error:(id *)arg2;
+ (id)performSilentEscrowRecovery:(id)arg1 cdpContext:(id)arg2 allRecords:(id)arg3 error:(id *)arg4;
+ (id)recordMatchingLabel:(id)arg1 allRecords:(id)arg2;
+ (id)performEscrowRecovery:(id)arg1 cdpContext:(id)arg2 escrowRecord:(id)arg3 error:(id *)arg4;
+ (id)handleRecoveryResults:(id)arg1 recoveredInformation:(id)arg2 record:(id)arg3 performedSilentBurn:(_Bool)arg4 recoverError:(id)arg5 error:(id *)arg6;
+ (id)fetchEscrowRecords:(id)arg1 error:(id *)arg2;
+ (id)fetchAllEscrowRecords:(id)arg1 error:(id *)arg2;
+ (id)fetchAndHandleEscrowRecords:(id)arg1 shouldFilter:(_Bool)arg2 error:(id *)arg3;
+ (id)filterRecords:(id)arg1;
+ (id)sortListPrioritizingiOSRecords:(id)arg1;
+ (id)filterViableSOSRecords:(id)arg1;
- (_Bool)removeRecoveryKey:(id)arg1 error:(id *)arg2;
- (_Bool)deliverAKDeviceListDelta:(id)arg1 error:(id *)arg2;
- (id)tlkRecoverabilityForEscrowRecord:(id)arg1 error:(id *)arg2;
- (_Bool)waitForPriorityViewKeychainDataRecovery:(id *)arg1;
- (id)fetchAccountSettings:(id *)arg1;
- (_Bool)setAccountSetting:(id)arg1 error:(id *)arg2;
- (id)fetchTrustedSecureElementIdentities:(id *)arg1;
- (_Bool)removeLocalSecureElementIdentityPeerID:(id)arg1 error:(id *)arg2;
- (_Bool)setLocalSecureElementIdentity:(id)arg1 error:(id *)arg2;
@end

