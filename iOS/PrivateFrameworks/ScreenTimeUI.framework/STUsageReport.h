//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScreenTimeUI/NSSecureCoding-Protocol.h>

@class NSArray, NSCache, NSDate, NSDateInterval, NSDictionary, NSString, STUsageInsights, STUsageReportGraphDataSet;

@interface STUsageReport : NSObject <NSSecureCoding>
{
    NSDateInterval *_maxPickupsDateInterval;
    STUsageReportGraphDataSet *_notificationsDataSet;
    STUsageReportGraphDataSet *_pickupsDataSet;
    STUsageReportGraphDataSet *_appAndWebUsageDataSet;
    STUsageReportGraphDataSet *_categoryUsageDataSet;
    NSString *_displayName;
    unsigned long long _type;
    NSDateInterval *_reportDateInterval;
    NSDate *_lastUpdatedDate;
    NSArray *_dateIntervals;
    double _totalScreenTime;
    double _screenTimeDeltaFromHistoricalAverage;
    unsigned long long _totalPickups;
    NSDictionary *_pickupsByBundleIdentifier;
    double _pickupFrequency;
    unsigned long long _maxPickups;
    unsigned long long _totalNotifications;
    NSDictionary *_notificationsByBundleIdentifier;
    NSArray *_notifications;
    double _notificationFrequency;
    NSDictionary *_appUsageByBundleIdentifier;
    NSDictionary *_webUsageByDomain;
    NSArray *_appAndWebUsages;
    NSDictionary *_categoryUsageByCategorydentifier;
    NSArray *_categoryUsages;
    STUsageInsights *_insights;
    double _maxScreenTime;
    NSDictionary *_screenTimeByStartOfDateInterval;
    NSDictionary *_pickupsByStartOfDateInterval;
    NSDictionary *_pickupsByStartOfDateIntervalByBundleIdentifier;
    unsigned long long _maxPickupDateIntervalIndex;
    NSDictionary *_notificationsByStartOfDateInterval;
    NSDictionary *_notificationsByStartOfDateIntervalByBundleIdentifier;
    double _totalAppUsage;
    NSDictionary *_appUsageByStartOfDateInterval;
    NSDictionary *_appUsageByStartOfDateIntervalByBundleIdentifier;
    NSArray *_appUsages;
    double _totalWebUsage;
    NSDictionary *_webUsageByStartOfDateInterval;
    NSDictionary *_webUsageByStartOfDateIntervalByDomain;
    NSArray *_webUsages;
    double _totalCategoryUsage;
    NSDictionary *_categoryUsageByStartOfDateInterval;
    NSDictionary *_categoryUsageByStartOfDateIntervalByCategoryIdentifier;
    NSCache *_dataSetByUsageIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSCache *dataSetByUsageIdentifier; // @synthesize dataSetByUsageIdentifier=_dataSetByUsageIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *categoryUsageByStartOfDateIntervalByCategoryIdentifier; // @synthesize categoryUsageByStartOfDateIntervalByCategoryIdentifier=_categoryUsageByStartOfDateIntervalByCategoryIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *categoryUsageByStartOfDateInterval; // @synthesize categoryUsageByStartOfDateInterval=_categoryUsageByStartOfDateInterval;
@property(readonly, nonatomic) double totalCategoryUsage; // @synthesize totalCategoryUsage=_totalCategoryUsage;
@property(readonly, copy, nonatomic) NSArray *webUsages; // @synthesize webUsages=_webUsages;
@property(readonly, copy, nonatomic) NSDictionary *webUsageByStartOfDateIntervalByDomain; // @synthesize webUsageByStartOfDateIntervalByDomain=_webUsageByStartOfDateIntervalByDomain;
@property(readonly, copy, nonatomic) NSDictionary *webUsageByStartOfDateInterval; // @synthesize webUsageByStartOfDateInterval=_webUsageByStartOfDateInterval;
@property(readonly, nonatomic) double totalWebUsage; // @synthesize totalWebUsage=_totalWebUsage;
@property(readonly, copy, nonatomic) NSArray *appUsages; // @synthesize appUsages=_appUsages;
@property(readonly, copy, nonatomic) NSDictionary *appUsageByStartOfDateIntervalByBundleIdentifier; // @synthesize appUsageByStartOfDateIntervalByBundleIdentifier=_appUsageByStartOfDateIntervalByBundleIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *appUsageByStartOfDateInterval; // @synthesize appUsageByStartOfDateInterval=_appUsageByStartOfDateInterval;
@property(readonly, nonatomic) double totalAppUsage; // @synthesize totalAppUsage=_totalAppUsage;
@property(readonly, copy, nonatomic) NSDictionary *notificationsByStartOfDateIntervalByBundleIdentifier; // @synthesize notificationsByStartOfDateIntervalByBundleIdentifier=_notificationsByStartOfDateIntervalByBundleIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *notificationsByStartOfDateInterval; // @synthesize notificationsByStartOfDateInterval=_notificationsByStartOfDateInterval;
@property(readonly, nonatomic) unsigned long long maxPickupDateIntervalIndex; // @synthesize maxPickupDateIntervalIndex=_maxPickupDateIntervalIndex;
@property(readonly, copy, nonatomic) NSDictionary *pickupsByStartOfDateIntervalByBundleIdentifier; // @synthesize pickupsByStartOfDateIntervalByBundleIdentifier=_pickupsByStartOfDateIntervalByBundleIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *pickupsByStartOfDateInterval; // @synthesize pickupsByStartOfDateInterval=_pickupsByStartOfDateInterval;
@property(readonly, copy, nonatomic) NSDictionary *screenTimeByStartOfDateInterval; // @synthesize screenTimeByStartOfDateInterval=_screenTimeByStartOfDateInterval;
@property(readonly, nonatomic) double maxScreenTime; // @synthesize maxScreenTime=_maxScreenTime;
@property(readonly, nonatomic) STUsageInsights *insights; // @synthesize insights=_insights;
@property(readonly, copy, nonatomic) NSArray *categoryUsages; // @synthesize categoryUsages=_categoryUsages;
@property(readonly, copy, nonatomic) NSDictionary *categoryUsageByCategorydentifier; // @synthesize categoryUsageByCategorydentifier=_categoryUsageByCategorydentifier;
@property(readonly, copy, nonatomic) NSArray *appAndWebUsages; // @synthesize appAndWebUsages=_appAndWebUsages;
@property(readonly, copy, nonatomic) NSDictionary *webUsageByDomain; // @synthesize webUsageByDomain=_webUsageByDomain;
@property(readonly, copy, nonatomic) NSDictionary *appUsageByBundleIdentifier; // @synthesize appUsageByBundleIdentifier=_appUsageByBundleIdentifier;
@property(readonly, nonatomic) double notificationFrequency; // @synthesize notificationFrequency=_notificationFrequency;
@property(readonly, copy, nonatomic) NSArray *notifications; // @synthesize notifications=_notifications;
@property(readonly, copy, nonatomic) NSDictionary *notificationsByBundleIdentifier; // @synthesize notificationsByBundleIdentifier=_notificationsByBundleIdentifier;
@property(readonly, nonatomic) unsigned long long totalNotifications; // @synthesize totalNotifications=_totalNotifications;
@property(readonly, nonatomic) unsigned long long maxPickups; // @synthesize maxPickups=_maxPickups;
@property(readonly, nonatomic) double pickupFrequency; // @synthesize pickupFrequency=_pickupFrequency;
@property(readonly, copy, nonatomic) NSDictionary *pickupsByBundleIdentifier; // @synthesize pickupsByBundleIdentifier=_pickupsByBundleIdentifier;
@property(readonly, nonatomic) unsigned long long totalPickups; // @synthesize totalPickups=_totalPickups;
@property(readonly, nonatomic) double screenTimeDeltaFromHistoricalAverage; // @synthesize screenTimeDeltaFromHistoricalAverage=_screenTimeDeltaFromHistoricalAverage;
@property(readonly, nonatomic) double totalScreenTime; // @synthesize totalScreenTime=_totalScreenTime;
@property(readonly, copy, nonatomic) NSArray *dateIntervals; // @synthesize dateIntervals=_dateIntervals;
@property(readonly, copy, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
@property(readonly, copy, nonatomic) NSDateInterval *reportDateInterval; // @synthesize reportDateInterval=_reportDateInterval;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)_timedDataSetForItemType:(unsigned long long)arg1 budgetItemIdentifier:(id)arg2;
- (id)_timedDataSetForItemType:(unsigned long long)arg1;
- (id)_countedDataSetForItemType:(unsigned long long)arg1 budgetItemIdentifier:(id)arg2;
- (id)_dataSetForItemType:(unsigned long long)arg1 budgetItemIdentifier:(id)arg2;
- (id)dataSetWithUsageItem:(id)arg1;
@property(readonly, nonatomic) STUsageReportGraphDataSet *categoryUsageDataSet; // @synthesize categoryUsageDataSet=_categoryUsageDataSet;
@property(readonly, nonatomic) STUsageReportGraphDataSet *appAndWebUsageDataSet; // @synthesize appAndWebUsageDataSet=_appAndWebUsageDataSet;
@property(readonly, nonatomic) STUsageReportGraphDataSet *pickupsDataSet; // @synthesize pickupsDataSet=_pickupsDataSet;
@property(readonly, nonatomic) STUsageReportGraphDataSet *notificationsDataSet; // @synthesize notificationsDataSet=_notificationsDataSet;
- (id)topUsageItemsWithMaxCount:(unsigned long long)arg1 type:(unsigned long long)arg2 includeAggregateItem:(_Bool)arg3 nonAggregateItems:(id *)arg4 darkColors:(_Bool)arg5;
@property(readonly, copy, nonatomic) NSDateInterval *maxPickupsDateInterval; // @synthesize maxPickupsDateInterval=_maxPickupsDateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReportType:(unsigned long long)arg1 startDate:(id)arg2 lastUpdatedDate:(id)arg3 usageItems:(id)arg4;

@end

