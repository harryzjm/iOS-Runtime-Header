//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTXPCServiceSubscriptionContext, NSDictionary, NSString;

@protocol CTXPCServiceDeviceManagementInterface
- (void)listPersonalWallets:(void (^)(NSArray *, NSError *))arg1;
- (void)deletePersonalWallet:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getConfiguredApns:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)resetUIConfiguredApns:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getUIConfiguredApns:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)setUIConfiguredApns:(CTXPCServiceSubscriptionContext *)arg1 apns:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
@end

