//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteManagement/NSObject-Protocol.h>

@class NSArray, RMAssetResolver, RMPolicyStore;

@protocol RMExtensionConfigurationApplicator <NSObject>

@optional
- (void)applyNewConfigurations:(NSArray *)arg1 updatedConfigurations:(NSArray *)arg2 removedPolicyKeys:(NSArray *)arg3 policyStore:(RMPolicyStore *)arg4 assetResolver:(RMAssetResolver *)arg5 completionHandler:(void (^)(void))arg6;
- (void)applyConfigurations:(NSArray *)arg1 completionHandler:(void (^)(void))arg2;
@end
