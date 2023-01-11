//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/NSSecureCoding-Protocol.h>
#import <ActionKit/WFNaming-Protocol.h>
#import <ActionKit/WFStatisticsSampleProvider-Protocol.h>

@class HKQuantitySample, HKUnit, NSArray, NSString;

@interface WFHKQuantitySampleContainer : NSObject <NSSecureCoding, WFNaming, WFStatisticsSampleProvider>
{
    _Bool _canProvideDataSamples;
    HKUnit *_unit;
    double _value;
    NSArray *_subsamples;
    HKQuantitySample *_quantitySample;
    NSArray *_subcontainers;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *subcontainers; // @synthesize subcontainers=_subcontainers;
@property(retain, nonatomic) HKQuantitySample *quantitySample; // @synthesize quantitySample=_quantitySample;
@property(retain, nonatomic) NSArray *subsamples; // @synthesize subsamples=_subsamples;
@property(readonly, nonatomic) double value; // @synthesize value=_value;
@property(readonly, nonatomic) _Bool canProvideDataSamples; // @synthesize canProvideDataSamples=_canProvideDataSamples;
@property(retain, nonatomic) HKUnit *unit; // @synthesize unit=_unit;
- (void).cxx_destruct;
- (void)updateValue:(id)arg1 fromStatisticsOperation:(long long)arg2;
@property(readonly, nonatomic) NSArray *dataSamples;
@property(readonly, copy, nonatomic) NSString *wfName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasSubsamples;
- (double)normalizedValue;
@property(readonly, nonatomic) _Bool hasValue;
- (id)initWithSubsamples:(id)arg1 unit:(id)arg2;
- (id)initWithSample:(id)arg1 unit:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
