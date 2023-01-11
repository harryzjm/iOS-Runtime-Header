//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKViewController.h>

@class UILabel, UIScrollView, UIView;

@interface HRAtrialFibrillationIntroViewController : HKViewController
{
    UIScrollView *_scrollView;
    UIView *_contentView;
    UIView *_heroView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIView *_learnMoreContentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *learnMoreContentView; // @synthesize learnMoreContentView=_learnMoreContentView;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *heroView; // @synthesize heroView=_heroView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (double)_bodyLastBaselineToContentBottom;
- (double)_titleLastBaselineToBodyFirstBaseline;
- (double)_titleTopToFirstBaselineLeading;
- (double)_assetImageBottomToTitleFirstBaseline;
- (id)_bodyFont;
- (id)_bodyFontTextStyle;
- (id)_titleFont;
- (id)_titleFontTextStyle;
- (id)_createHeroView;
- (void)setUpConstraints;
- (void)setUpUI;
- (void)viewDidLoad;

@end
