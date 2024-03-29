//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, UIImage, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UILegacyPageControlVisualProvider
{
    UIImage *_currentPageImage;
    UIImage *_pageImage;
    NSMutableArray *_currentPageImages;
    NSMutableArray *_pageImages;
    UIVisualEffectView *_backgroundVisualEffectView;
    NSMutableArray *_indicators;
}

- (void).cxx_destruct;
- (void)_cachePageIndicatorImages;
- (id)_pageIndicatorCurrentImageForPage:(long long)arg1;
- (id)_pageIndicatorImageForPage:(long long)arg1;
- (id)_cachedPageIndicatorCurrentImageForPage:(long long)arg1;
- (id)_cachedPageIndicatorImageForPage:(long long)arg1;
- (id)defaultActivePageIndicatorImage;
- (id)preferredIndicatorImage;
- (void)_drawModernIndicatorInView:(id)arg1 enabled:(_Bool)arg2;
- (id)_indicatorViewEnabled:(_Bool)arg1 index:(long long)arg2;
- (void)_transitionIndicator:(id)arg1 toEnabled:(_Bool)arg2 index:(long long)arg3;
- (_Bool)_hasCustomImageForPage:(long long)arg1 enabled:(_Bool)arg2;
- (id)_modernColorEnabled:(_Bool)arg1;
- (double)_modernCornerRadius;
- (struct CGRect)_modernBounds;
- (double)_indicatorSpacing;
- (struct CGRect)_indicatorFrameAtIndex:(long long)arg1;
- (void)_setDisplayedPage:(long long)arg1;
- (void)updateDisplayedPageToCurrentPage;
- (id)effectiveContentView;
- (void)invalidateIndicators;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeForNumberOfPages:(long long)arg1;
- (void)didEndTrackingWithTouch:(id)arg1;
- (void)didUpdatePageIndicatorTintColor;
- (void)didUpdateCurrentPageIndicatorTintColor;
- (void)didUpdateNumberOfPages;
- (void)pruneArchivedSubviews:(id)arg1;
- (void)prepare;

@end

