//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CTEnhancedDataLinkQualityMetric
{
    long long _metricType;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long metricType; // @synthesize metricType=_metricType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithType:(long long)arg1 enhancedLinkQuality:(id)arg2;

@end
