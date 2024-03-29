//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class SUUITrendingSearchPage, SUUITrendingSearchView;
@protocol SUUITrendingSearchPageViewDelegate;

__attribute__((visibility("hidden")))
@interface SUUITrendingSearchPageView : UIView
{
    id <SUUITrendingSearchPageViewDelegate> _delegate;
    SUUITrendingSearchPage *_page;
    SUUITrendingSearchView *_trendingSearchView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SUUITrendingSearchPage *page; // @synthesize page=_page;
@property(nonatomic) __weak id <SUUITrendingSearchPageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_buttonAction:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
@property(nonatomic) struct UIEdgeInsets contentInset;
- (id)initWithFrame:(struct CGRect)arg1;

@end

