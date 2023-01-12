//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class HKQuantitySample, NSDate, NSUUID;

__attribute__((visibility("hidden")))
@interface _HKQuantitySeriesSampleQueryServerConfiguration : HKQueryServerConfiguration
{
    HKQuantitySample *_quantitySample;
    long long _seriesAnchor;
    long long _mode;
    unsigned long long _options;
    NSDate *_maximumStartDate;
    NSUUID *_latestUUID;
    NSDate *_latestSampleStartDate;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *latestSampleStartDate; // @synthesize latestSampleStartDate=_latestSampleStartDate;
@property(copy, nonatomic) NSUUID *latestUUID; // @synthesize latestUUID=_latestUUID;
@property(copy, nonatomic) NSDate *maximumStartDate; // @synthesize maximumStartDate=_maximumStartDate;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) long long seriesAnchor; // @synthesize seriesAnchor=_seriesAnchor;
@property(copy, nonatomic) HKQuantitySample *quantitySample; // @synthesize quantitySample=_quantitySample;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

