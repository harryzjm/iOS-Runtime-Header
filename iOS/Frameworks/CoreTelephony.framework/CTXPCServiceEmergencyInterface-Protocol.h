//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CTXPCServiceEmergencyInterface
- (void)getAllEmergencyNumbers:(void (^)(NSArray *, NSError *))arg1;
- (void)copyEmergencyMode:(void (^)(CTXPCServiceSubscriptionContext *, CTEmergencyMode *, NSError *))arg1;
@end

