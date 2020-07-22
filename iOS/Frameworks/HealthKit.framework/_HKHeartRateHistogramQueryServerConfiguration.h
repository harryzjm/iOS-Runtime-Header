//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKQuantity, NSDate, NSDateComponents;

__attribute__((visibility("hidden")))
@interface _HKHeartRateHistogramQueryServerConfiguration <NSSecureCoding>
{
    NSDate *_startDate;
    NSDate *_endDate;
    long long _contextStyle;
    NSDate *_anchorDate;
    NSDateComponents *_intervalComponents;
    HKQuantity *_histogramAnchor;
    HKQuantity *_histogramBucketSize;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) HKQuantity *histogramBucketSize; // @synthesize histogramBucketSize=_histogramBucketSize;
@property(retain, nonatomic) HKQuantity *histogramAnchor; // @synthesize histogramAnchor=_histogramAnchor;
@property(retain, nonatomic) NSDateComponents *intervalComponents; // @synthesize intervalComponents=_intervalComponents;
@property(retain, nonatomic) NSDate *anchorDate; // @synthesize anchorDate=_anchorDate;
@property(nonatomic) long long contextStyle; // @synthesize contextStyle=_contextStyle;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
