//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSString, NSTimer, UIPageControl, UIScrollView;

__attribute__((visibility("hidden")))
@interface UIKBTutorialMultipageView : UIView
{
    UIScrollView *_pageScrollView;
    NSArray *_pageViews;
    UIPageControl *_pageControl;
    NSTimer *_nextPageScrollTimer;
    double _pagingInterval;
}

- (void).cxx_destruct;
@property(nonatomic) double pagingInterval; // @synthesize pagingInterval=_pagingInterval;
@property(retain, nonatomic) NSTimer *nextPageScrollTimer; // @synthesize nextPageScrollTimer=_nextPageScrollTimer;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) NSArray *pageViews; // @synthesize pageViews=_pageViews;
@property(retain, nonatomic) UIScrollView *pageScrollView; // @synthesize pageScrollView=_pageScrollView;
- (void)resetPageScrolling;
- (void)scrollToNextPage;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)configMediaView;
- (void)layoutSubviews;
- (id)initWithPageViews:(id)arg1 pagingInterval:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

