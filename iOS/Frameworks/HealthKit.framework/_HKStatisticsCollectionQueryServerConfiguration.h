//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class HKStatisticsCollectionCacheSettings, NSDate, NSDateComponents, NSDateInterval;

__attribute__((visibility("hidden")))
@interface _HKStatisticsCollectionQueryServerConfiguration : HKQueryServerConfiguration
{
    NSDate *_anchorDate;
    unsigned long long _options;
    NSDateComponents *_intervalComponents;
    unsigned long long _mergeStrategy;
    NSDateInterval *_dateInterval;
    HKStatisticsCollectionCacheSettings *_cacheSettings;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) HKStatisticsCollectionCacheSettings *cacheSettings; // @synthesize cacheSettings=_cacheSettings;
@property(copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(nonatomic) unsigned long long mergeStrategy; // @synthesize mergeStrategy=_mergeStrategy;
@property(copy, nonatomic) NSDateComponents *intervalComponents; // @synthesize intervalComponents=_intervalComponents;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(copy, nonatomic) NSDate *anchorDate; // @synthesize anchorDate=_anchorDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

