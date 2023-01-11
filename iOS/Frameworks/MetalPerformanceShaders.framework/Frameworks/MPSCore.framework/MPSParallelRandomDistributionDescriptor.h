//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MPSCore/NSCopying-Protocol.h>

@interface MPSParallelRandomDistributionDescriptor : NSObject <NSCopying>
{
    float _minimum;
    float _maximum;
    float _mean;
    float _standardDeviation;
    unsigned long long _distributionType;
}

+ (id)defaultDistributionDescriptor;
+ (id)uniformDistributionDescriptorWithMinimum:(float)arg1 maximum:(float)arg2;
@property(nonatomic) float standardDeviation; // @synthesize standardDeviation=_standardDeviation;
@property(nonatomic) float mean; // @synthesize mean=_mean;
@property(nonatomic) float maximum; // @synthesize maximum=_maximum;
@property(nonatomic) float minimum; // @synthesize minimum=_minimum;
@property(nonatomic) unsigned long long distributionType; // @synthesize distributionType=_distributionType;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
