//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKInteractiveChartCurrentValueViewDataSource-Protocol.h>

@class HKDateCache, HKDisplayCategoryController, HKDisplayType, HKHealthStore, HKSelectedRangeFormatter, NSArray, NSString, UIColor, UIFont;
@protocol HKCurrentValueViewDataSourceValueRangeFormatter;

@interface HKCurrentValueViewDataSource : NSObject <HKInteractiveChartCurrentValueViewDataSource>
{
    _Bool _pendingData;
    NSArray *_selectedRangeData;
    id <HKCurrentValueViewDataSourceValueRangeFormatter> _valueRangeFormatter;
    UIColor *_titleColor;
    HKSelectedRangeFormatter *_selectedRangeFormatter;
    HKDateCache *_dateCache;
    HKHealthStore *_healthStore;
    HKDisplayCategoryController *_displayCategoryController;
    HKDisplayType *_displayType;
    NSString *_dateIntervalString;
    UIColor *_valueColor;
    UIFont *_majorFont;
    UIFont *_minorFont;
}

+ (id)defaultStringForValueRange:(id)arg1 timeScope:(long long)arg2;
@property(retain, nonatomic) UIFont *minorFont; // @synthesize minorFont=_minorFont;
@property(retain, nonatomic) UIFont *majorFont; // @synthesize majorFont=_majorFont;
@property(retain, nonatomic) UIColor *valueColor; // @synthesize valueColor=_valueColor;
@property(retain, nonatomic) NSString *dateIntervalString; // @synthesize dateIntervalString=_dateIntervalString;
@property(retain, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) HKDisplayCategoryController *displayCategoryController; // @synthesize displayCategoryController=_displayCategoryController;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(retain, nonatomic) HKDateCache *dateCache; // @synthesize dateCache=_dateCache;
@property(retain, nonatomic) HKSelectedRangeFormatter *selectedRangeFormatter; // @synthesize selectedRangeFormatter=_selectedRangeFormatter;
@property(nonatomic) _Bool pendingData; // @synthesize pendingData=_pendingData;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) __weak id <HKCurrentValueViewDataSourceValueRangeFormatter> valueRangeFormatter; // @synthesize valueRangeFormatter=_valueRangeFormatter;
@property(retain, nonatomic) NSArray *selectedRangeData; // @synthesize selectedRangeData=_selectedRangeData;
- (void).cxx_destruct;
- (id)_selectedRangeDataForColumnAtIndex:(long long)arg1;
- (_Bool)_isMenstruationDisplayType;
- (_Bool)_isAudioExposureDisplayType;
- (_Bool)_isDataMinMax;
- (long long)_numberOfColumns;
- (id)secondaryTextColorForCurrentValueView:(id)arg1;
- (id)textColorForCurrentValueView:(id)arg1;
- (id)secondaryStringForCurrentValueView:(id)arg1;
- (id)attributedValueStringForCurrentValueView:(id)arg1;
- (_Bool)_rangeDataIsMenstruation:(id)arg1;
- (_Bool)_rangeDataIsSleep:(id)arg1;
- (_Bool)_rangeDataIsBloodPressure:(id)arg1;
- (id)_dividerForRangeData:(id)arg1 font:(id)arg2 foregroundColor:(id)arg3;
- (id)attributedTitleStringForCurrentValueView:(id)arg1;
- (void)updateDataSourceWithGraphView:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;
- (id)initWithDateCache:(id)arg1 displayCategoryController:(id)arg2 healthStore:(id)arg3 selectedRangeFormatter:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
