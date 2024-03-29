//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PSDataUsageStatisticsCache, PSSpecifier;
@protocol PSBillingPeriodSource;

__attribute__((visibility("hidden")))
@interface PSUITotalCellularUsageSubgroup : NSObject
{
    id <PSBillingPeriodSource> _billingPeriodSource;
    PSDataUsageStatisticsCache *_statisticsCache;
    PSSpecifier *_totalUsageSpecifier;
    PSSpecifier *_totalRoamingUsageSpecifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PSSpecifier *totalRoamingUsageSpecifier; // @synthesize totalRoamingUsageSpecifier=_totalRoamingUsageSpecifier;
@property(retain, nonatomic) PSSpecifier *totalUsageSpecifier; // @synthesize totalUsageSpecifier=_totalUsageSpecifier;
@property(retain, nonatomic) PSDataUsageStatisticsCache *statisticsCache; // @synthesize statisticsCache=_statisticsCache;
@property(nonatomic) __weak id <PSBillingPeriodSource> billingPeriodSource; // @synthesize billingPeriodSource=_billingPeriodSource;
- (id)getLogger;
- (id)totalRoamingDataUsageForSpecifier:(id)arg1;
- (id)totalDataUsageForSpecifier:(id)arg1;
- (id)totalRoamingBytesUsed;
- (id)totalBytesUsed;
- (id)specifiers;
- (id)initWithStatisticsCache:(id)arg1 andBillingPeriodSource:(id)arg2;

@end

