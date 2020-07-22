//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableDictionary, NSString, SKUIClientContext, SKUIColorScheme, SKUIStarRatingControl, UIButton, UIControl, UIImageView, UILabel, UISegmentedControl;

@interface SKUIReviewsHistogramView : UIView
{
    UIButton *_appSupportButton;
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    UILabel *_countLabel;
    long long _numberOfUserRatings;
    NSMutableDictionary *_ratings;
    UISegmentedControl *_segmentedControl;
    SKUIStarRatingControl *_starRatingControl;
    UILabel *_starRatingControlLabel;
    UILabel *_titleLabel;
    double _userRating;
    UIImageView *_userRatingStarsView;
    NSString *_versionString;
    UIButton *_writeAReviewButton;
    UIView *_bottomSeparatorView;
    UIImageView *_histogramImageView;
    NSArray *_histogramValues;
}

@property(retain, nonatomic) NSArray *histogramValues; // @synthesize histogramValues=_histogramValues;
@property(readonly, nonatomic) UIControl *writeAReviewButton; // @synthesize writeAReviewButton=_writeAReviewButton;
@property(copy, nonatomic) NSString *versionString; // @synthesize versionString=_versionString;
@property(readonly, nonatomic) UIControl *starRatingControl; // @synthesize starRatingControl=_starRatingControl;
@property(nonatomic) long long numberOfUserRatings; // @synthesize numberOfUserRatings=_numberOfUserRatings;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(readonly, nonatomic) UIControl *appSupportButton; // @synthesize appSupportButton=_appSupportButton;
- (void).cxx_destruct;
- (id)_countLabelString;
- (id)_histogramImageForValues:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) double userRating;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) long long selectedSegmentIndex;
@property(copy, nonatomic) NSArray *segmentedControlTitles;
@property(nonatomic) long long personalStarRating;
@property(readonly, nonatomic) UIControl *segmentedControl;
- (id)initWithClientContext:(id)arg1;

@end
