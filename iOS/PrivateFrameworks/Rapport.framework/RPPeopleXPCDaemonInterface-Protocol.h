//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RPPeopleDiscovery;

@protocol RPPeopleXPCDaemonInterface
- (void)xpcPeopleDiscoveryUpdate:(RPPeopleDiscovery *)arg1;
- (void)xpcPeopleDiscoveryActivate:(RPPeopleDiscovery *)arg1 completion:(void (^)(NSError *))arg2;
@end
