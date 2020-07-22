//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NRDeviceCollectionDiff, NSString, NSUUID;

@protocol NanoRegistryPrivateDaemonDelegate
- (void)xpcGetLastMigrationRequestPhoneNameWithCompletion:(void (^)(NSString *))arg1;
- (void)xpcBeginMigrationWithDeviceID:(NSUUID *)arg1 passcode:(NSString *)arg2 withBlock:(void (^)(void))arg3;
- (void)xpcSetMigrationConsented:(_Bool)arg1 forDeviceID:(NSUUID *)arg2 withBlock:(void (^)(void))arg3;
- (void)xpcIsWatchSetupPushActiveWithBlock:(void (^)(_Bool))arg1;
- (void)xpcStopWatchSetupPushWithBlock:(void (^)(void))arg1;
- (void)xpcStartWatchSetupPushWithBlock:(void (^)(void))arg1;
- (void)xpcApplyDiff:(NRDeviceCollectionDiff *)arg1 block:(void (^)(void))arg2;
- (void)xpcPingActiveGizmoWithPriority:(long long)arg1 withMessageSize:(unsigned long long)arg2 withBlock:(void (^)(_Bool, double, double))arg3;
- (void)xpcSubmitServerRequestReportWithRequestType:(NSString *)arg1 duration:(double)arg2 errorCode:(unsigned int)arg3 block:(void (^)(void))arg4;
@end
