//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL, SUIKSearchResultsCollectionViewController, UIImage, UIScrollView;

@protocol SUIKSearchResultsCollectionViewControllerDelegate
- (UIImage *)searchResultsCollectionViewController:(SUIKSearchResultsCollectionViewController *)arg1 iconForCategory:(NSString *)arg2;
- (long long)searchResultsCollectionViewController:(SUIKSearchResultsCollectionViewController *)arg1 sortCategory1:(NSString *)arg2 sortCategory2:(NSString *)arg3;
- (void)searchResultsCollectionViewController:(SUIKSearchResultsCollectionViewController *)arg1 didSelectURL:(NSURL *)arg2;

@optional
- (void)searchResultsCollectionViewController:(SUIKSearchResultsCollectionViewController *)arg1 didScrollResultsInScrollView:(UIScrollView *)arg2;
- (_Bool)searchResultsCollectionViewController:(SUIKSearchResultsCollectionViewController *)arg1 shouldShowCategory:(NSString *)arg2;
@end

