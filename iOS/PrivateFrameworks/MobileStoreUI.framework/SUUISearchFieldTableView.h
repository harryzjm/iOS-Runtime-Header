//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableView.h>

@class SUUITrendingSearchPage, SUUITrendingSearchPageView, SUUITrendingSearchProvider;
@protocol SUUITrendingSearchPageViewDelegate;

__attribute__((visibility("hidden")))
@interface SUUISearchFieldTableView : UITableView
{
    SUUITrendingSearchPage *_page;
    SUUITrendingSearchPageView *_pageView;
    _Bool _trendingSearchesVisible;
    SUUITrendingSearchProvider *_trendingSearchProvider;
    id <SUUITrendingSearchPageViewDelegate> _trendingSearchDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool trendingSearchesVisible; // @synthesize trendingSearchesVisible=_trendingSearchesVisible;
@property(nonatomic) __weak id <SUUITrendingSearchPageViewDelegate> trendingSearchDelegate; // @synthesize trendingSearchDelegate=_trendingSearchDelegate;
@property(retain, nonatomic) SUUITrendingSearchProvider *trendingSearchProvider; // @synthesize trendingSearchProvider=_trendingSearchProvider;
- (void)_reloadView;
- (void)_setTrendingResponse:(id)arg1 error:(id)arg2;
- (void)_reloadData;
- (void)layoutSubviews;

@end

