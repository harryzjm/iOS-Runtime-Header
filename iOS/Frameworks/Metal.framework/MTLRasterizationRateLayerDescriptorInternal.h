//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLRasterizationRateSampleArrayInternal;

@interface MTLRasterizationRateLayerDescriptorInternal
{
    float *_data;
    CDStruct_da2e99ad _size;
    MTLRasterizationRateSampleArrayInternal *_horizontal;
    MTLRasterizationRateSampleArrayInternal *_vertical;
}

- (id)vertical;
- (id)horizontal;
- (float *)verticalSampleStorage;
- (float *)horizontalSampleStorage;
- (CDStruct_da2e99ad)sampleCount;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithSampleCount:(CDStruct_da2e99ad)arg1 horizontal:(const float *)arg2 vertical:(const float *)arg3;
- (id)initWithSampleCount:(CDStruct_da2e99ad)arg1;
- (id)init;

@end
