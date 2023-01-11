//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RMConfigurationStatusUpdater;
@protocol RMAssetResolver;

@protocol RMUnresolvedAsset
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)resolveWithAssetResolver:(id <RMAssetResolver>)arg1 statusUpdater:(RMConfigurationStatusUpdater *)arg2 completionHandler:(void (^)(RMResolvedAsset *))arg3;
@end
