//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CTCarrierSpace/NSSecureCoding-Protocol.h>

@class CTCarrierSpaceDataPlanMetricsItem, NSDate, NSNumber;

@interface CTCarrierSpaceDataPlanMetrics : NSObject <NSSecureCoding>
{
    NSDate *_billingCycleEndDate;
    CTCarrierSpaceDataPlanMetricsItem *_domestic;
    long long _regStatus;
    NSNumber *_domesticCapacity;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *domesticCapacity; // @synthesize domesticCapacity=_domesticCapacity;
@property(nonatomic) long long regStatus; // @synthesize regStatus=_regStatus;
@property(retain, nonatomic) CTCarrierSpaceDataPlanMetricsItem *domestic; // @synthesize domestic=_domestic;
@property(retain, nonatomic) NSDate *billingCycleEndDate; // @synthesize billingCycleEndDate=_billingCycleEndDate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end

