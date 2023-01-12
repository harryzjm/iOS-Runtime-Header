//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class HKQuantity, NSDate, NSDateComponents;

__attribute__((visibility("hidden")))
@interface _HKQuantityDistributionQueryServerConfiguration : HKQueryServerConfiguration
{
    NSDate *_startDate;
    NSDate *_endDate;
    long long _contextStyle;
    NSDate *_anchorDate;
    NSDateComponents *_intervalComponents;
    HKQuantity *_histogramAnchor;
    HKQuantity *_histogramBucketSize;
    unsigned long long _options;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(copy, nonatomic) HKQuantity *histogramBucketSize; // @synthesize histogramBucketSize=_histogramBucketSize;
@property(copy, nonatomic) HKQuantity *histogramAnchor; // @synthesize histogramAnchor=_histogramAnchor;
@property(copy, nonatomic) NSDateComponents *intervalComponents; // @synthesize intervalComponents=_intervalComponents;
@property(copy, nonatomic) NSDate *anchorDate; // @synthesize anchorDate=_anchorDate;
@property(nonatomic) long long contextStyle; // @synthesize contextStyle=_contextStyle;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

