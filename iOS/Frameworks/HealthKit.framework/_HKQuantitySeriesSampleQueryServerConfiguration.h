//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKQuantitySample;

__attribute__((visibility("hidden")))
@interface _HKQuantitySeriesSampleQueryServerConfiguration
{
    HKQuantitySample *_quantitySample;
    long long _seriesAnchor;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long seriesAnchor; // @synthesize seriesAnchor=_seriesAnchor;
@property(copy, nonatomic) HKQuantitySample *quantitySample; // @synthesize quantitySample=_quantitySample;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

