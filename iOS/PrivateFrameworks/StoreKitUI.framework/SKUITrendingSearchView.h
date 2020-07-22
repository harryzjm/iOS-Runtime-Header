//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@class NSArray, UIStackView, UIView;

@interface SKUITrendingSearchView : UIScrollView
{
    UIView *_trendingTitleView;
    NSArray *_trendingSearchViews;
    UIStackView *_trendingSearchesStackView;
    UIStackView *_titleStackView;
    NSArray *_verticalMarginRelatedConstraints;
}

@property(retain, nonatomic) NSArray *verticalMarginRelatedConstraints; // @synthesize verticalMarginRelatedConstraints=_verticalMarginRelatedConstraints;
@property(nonatomic) __weak UIStackView *titleStackView; // @synthesize titleStackView=_titleStackView;
@property(nonatomic) __weak UIStackView *trendingSearchesStackView; // @synthesize trendingSearchesStackView=_trendingSearchesStackView;
@property(copy, nonatomic) NSArray *trendingSearchViews; // @synthesize trendingSearchViews=_trendingSearchViews;
@property(copy, nonatomic) UIView *trendingTitleView; // @synthesize trendingTitleView=_trendingTitleView;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)commonInitWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

