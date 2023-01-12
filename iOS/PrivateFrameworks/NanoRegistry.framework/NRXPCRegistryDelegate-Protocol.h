//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NRDeviceCollectionDiff, NSDictionary, NSSet, NSUUID;

@protocol NRXPCRegistryDelegate
- (void)xpcSetMigrationConsented:(_Bool)arg1 forDeviceID:(NSUUID *)arg2 withBlock:(void (^)(void))arg3;
- (void)xpcApplyDiff:(NRDeviceCollectionDiff *)arg1 withSecureProperties:(NSDictionary *)arg2 block:(void (^)(NSError *))arg3;
- (void)xpcClientInfo:(void (^)(NSArray *))arg1;
- (void)xpcDeviceIDAtSwitchIndex:(unsigned int)arg1 withBlock:(void (^)(NSUUID *, NSDate *))arg2;
- (void)xpcSwitchIndex:(void (^)(unsigned int))arg1;
- (void)xpcGetChangeHistoryWithBlock:(void (^)(NRDeviceCollectionHistory *))arg1;
- (void)xpcRetrieveSecureProperties:(NSSet *)arg1 block:(void (^)(NSDictionary *))arg2;
- (void)xpcGetDiffSinceTokenValue:(unsigned long long)arg1 getSecureProperties:(_Bool)arg2 withBlock:(void (^)(NRDeviceCollectionDiff *, NSDictionary *, _Bool, unsigned long long))arg3;
- (void)xpcGetDeviceCollectionWithBlock:(void (^)(NRMutableDeviceCollection *, NRSecureDevicePropertyStore *, unsigned long long, _Bool))arg1;
@end

