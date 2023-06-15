//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMCore/NSObject-Protocol.h>

@class IMNickname, NSArray, NSData, NSDictionary, NSError, NSSet, NSString;

@protocol IMDaemonListenerAccountsProtocol <NSObject>
- (void)simSubscriptionsDidChange;
- (void)updatePersonalNickname:(IMNickname *)arg1;
- (void)updateIgnoredNicknameRecords:(NSDictionary *)arg1;
- (void)updateActiveNicknameRecords:(NSDictionary *)arg1;
- (void)updateTransitionedNicknameHandles:(NSSet *)arg1;
- (void)updateNicknameHandlesForSharing:(NSSet *)arg1 blocked:(NSSet *)arg2;
- (void)updatePendingNicknameUpdates:(NSDictionary *)arg1 handledNicknames:(NSDictionary *)arg2 archivedNicknames:(NSDictionary *)arg3;
- (void)nicknameRequestResponse:(NSString *)arg1 encodedNicknameData:(NSData *)arg2;
- (void)didUpdateSettingsKeys:(NSArray *)arg1;
- (void)didAttemptToDisableAllDevicesResult:(_Bool)arg1;
- (void)didPerformAdditionalStorageRequiredCheckWithSuccess:(_Bool)arg1 additionalStorageRequired:(unsigned long long)arg2 forAccountId:(NSString *)arg3 error:(NSError *)arg4;
- (void)didAttemptToSetEnabledTo:(_Bool)arg1 result:(_Bool)arg2;
- (void)updateCloudKitProgressWithDictionary:(NSDictionary *)arg1;
- (void)updateCloudKitStateWithDictionary:(NSDictionary *)arg1;
- (void)updateCloudKitState;
@end

