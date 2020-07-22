//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <Weather/WFTemperatureUnitObserver-Protocol.h>

@class NSArray, NSMutableArray, NSString, NSURL, UIStackView, UIView, WATodayHeaderView, WATodayModel, WFURLComponents;

@interface WAWeatherPlatterViewController : UIViewController <WFTemperatureUnitObserver>
{
    long long _status;
    NSURL *_commitURL;
    WFURLComponents *_URLComponents;
    WATodayModel *_model;
    WATodayHeaderView *_headerView;
    UIView *_dividerLineView;
    NSArray *_hourlyForecastViews;
    UIStackView *_hourlyBeltView;
    NSMutableArray *_constraints;
}

@property(retain, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UIStackView *hourlyBeltView; // @synthesize hourlyBeltView=_hourlyBeltView;
@property(retain, nonatomic) NSArray *hourlyForecastViews; // @synthesize hourlyForecastViews=_hourlyForecastViews;
@property(retain, nonatomic) UIView *dividerLineView; // @synthesize dividerLineView=_dividerLineView;
@property(retain, nonatomic) WATodayHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) WATodayModel *model; // @synthesize model=_model;
@property(retain, nonatomic) WFURLComponents *URLComponents; // @synthesize URLComponents=_URLComponents;
@property(copy, nonatomic) NSURL *commitURL; // @synthesize commitURL=_commitURL;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)_updateStatus:(long long)arg1;
- (void)_buildModelForLocation:(id)arg1;
- (void)_kickoffLoadingWithLocation:(id)arg1 orPerhapsALocationString:(id)arg2;
- (void)_contentSizeDidUpdate:(id)arg1;
- (void)_updateViewContent;
- (void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnitTo:(int)arg2;
- (void)viewDidLoad;
- (id)initWithURLComponents:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithLocation:(id)arg1;
- (id)initWithLocationString:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

