//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/PXSectionedDataSourceManagerObserver-Protocol.h>

@class PXAssetsDataSourceManager;

@protocol PXAssetsDataSourceManagerObserver <PXSectionedDataSourceManagerObserver>

@optional
- (void)assetsDataSourceManagerDidFinishLoadingInitialDataSource:(PXAssetsDataSourceManager *)arg1;
- (void)assetsDataSourceManagerDidFinishBackgroundFetching:(PXAssetsDataSourceManager *)arg1;
@end

