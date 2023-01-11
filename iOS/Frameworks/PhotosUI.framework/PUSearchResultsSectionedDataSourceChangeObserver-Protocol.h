//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSIndexPath, PUSearchResultsSectionedDataSource, PUSearchResultsValue, PUSearchTopAssetsResult;

@protocol PUSearchResultsSectionedDataSourceChangeObserver <NSObject>
- (void)searchResultsDataSource:(PUSearchResultsSectionedDataSource *)arg1 didChangeThumbnailAssetsForSearchResult:(PUSearchTopAssetsResult *)arg2;
- (void)searchResultsDataSource:(PUSearchResultsSectionedDataSource *)arg1 didFetchAssetsForSearchResult:(PUSearchResultsValue *)arg2 indexPath:(NSIndexPath *)arg3;
- (void)searchResultsDataSourceHasPendingChanges:(PUSearchResultsSectionedDataSource *)arg1;
@end

