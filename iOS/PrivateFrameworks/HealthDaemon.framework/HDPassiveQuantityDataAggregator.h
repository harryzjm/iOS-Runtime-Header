//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKQuantityType;

@interface HDPassiveQuantityDataAggregator
{
    HKQuantityType *_quantityType;
}

@property(readonly, copy, nonatomic) HKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
- (void).cxx_destruct;
- (id)dataObjectsFromSensorDatum:(id)arg1 error:(id *)arg2;
- (Class)sensorDatumClass;
- (id)objectType;
- (id)initForQuantityType:(id)arg1 dataCollectionManager:(id)arg2;

@end
