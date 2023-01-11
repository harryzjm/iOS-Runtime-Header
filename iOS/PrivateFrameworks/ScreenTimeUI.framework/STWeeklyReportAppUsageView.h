//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableDictionary, STUsageReport, UILabel, UIStackView;

@interface STWeeklyReportAppUsageView : UIView
{
    UILabel *_titleLabel;
    UIStackView *_appImageStackView;
    STUsageReport *_report;
    NSMutableArray *_topEightImageItems;
    NSMutableDictionary *_dimensionByUsageItem;
}

@property(retain, nonatomic) NSMutableDictionary *dimensionByUsageItem; // @synthesize dimensionByUsageItem=_dimensionByUsageItem;
@property(retain, nonatomic) NSMutableArray *topEightImageItems; // @synthesize topEightImageItems=_topEightImageItems;
@property(retain, nonatomic) STUsageReport *report; // @synthesize report=_report;
@property(retain, nonatomic) UIStackView *appImageStackView; // @synthesize appImageStackView=_appImageStackView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)_appImageSubviewWithImage:(id)arg1 dimension:(double)arg2;
- (void)_didFetchIcon:(id)arg1;
- (void)_registerForIconCacheNotifications;
- (id)initWithUsageReport:(id)arg1;

@end
