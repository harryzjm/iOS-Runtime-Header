//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, OS_dispatch_group, UIImage;
@protocol TSAssetDataProviderType;

@protocol TSAssetHandleType
- (void)downloadWithGroup:(OS_dispatch_group *)arg1;
@property(nonatomic, readonly) NSString *uniqueKey;
@property(nonatomic, readonly) UIImage *fallbackImage;
@property(nonatomic, readonly) NSString *filePath;

@optional
@property(nonatomic, readonly) id <TSAssetDataProviderType> assetDataProvider;
@end
