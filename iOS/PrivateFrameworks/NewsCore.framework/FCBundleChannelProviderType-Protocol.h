//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol FCBundleChannelProviderDelegate;

@protocol FCBundleChannelProviderType
@property(nonatomic) __weak id <FCBundleChannelProviderDelegate> delegate;
@property(readonly, nonatomic) NSArray *bundleChannelIDs;
- (void)loadInitialBundleChannelIDsWithCompletion:(void (^)(void))arg1;
@end
