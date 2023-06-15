//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HKNotificationInstruction, HKObject, NSString;

@protocol HKNotificationSyncStoreServer <NSObject>
- (void)remote_sendNewDeviceNotificationWithMessageKind:(long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_obliterateNotificationInstructionsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_fakeReceivedNotificationInstruction:(HKNotificationInstruction *)arg1 sendingDeviceInfo:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_notificationHoldInstructionsWithCompletion:(void (^)(NSSet *, NSError *))arg1;
- (void)remote_sendNotificationInstruction:(HKNotificationInstruction *)arg1 savingObjectAsExistsCriteria:(HKObject *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_sendNotificationInstruction:(HKNotificationInstruction *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

