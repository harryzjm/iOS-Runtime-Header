//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MKCollectionsCarouselView, MUPagingScrollContainerView, NSArray;
@protocol MKPlaceCollectionsDelegate;

__attribute__((visibility("hidden")))
@interface MUCuratedGuidesSectionView : UIView
{
    MUPagingScrollContainerView *_pagingContainerView;
    _Bool _isSingleCollection;
    NSArray *_visibleFocusItems;
    id <MKPlaceCollectionsDelegate> _collectionsDelegate;
    MKCollectionsCarouselView *_carouselView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MKCollectionsCarouselView *carouselView; // @synthesize carouselView=_carouselView;
@property(nonatomic) __weak id <MKPlaceCollectionsDelegate> collectionsDelegate; // @synthesize collectionsDelegate=_collectionsDelegate;
@property(copy, nonatomic) NSArray *visibleFocusItems; // @synthesize visibleFocusItems=_visibleFocusItems;
@property(readonly, nonatomic, getter=isShowingExploreGuides) _Bool showingExploreGuides;
- (void)refreshCollections;
- (void)displayCollectionsIfNeeded;
@property(readonly, nonatomic) long long carouselContext;
- (void)_setupSubviews;
- (id)initCollectionsCarouselViewWithPlaceCollections:(id)arg1 usingSyncCoordinator:(id)arg2 withRoutingDelegate:(id)arg3 withScrollViewDelegate:(id)arg4 withAnalyticsDelegate:(id)arg5 exploreGuides:(id)arg6;

@end

