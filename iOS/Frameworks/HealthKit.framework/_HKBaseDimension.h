//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKBaseUnit, HKUnit, NSString;

__attribute__((visibility("hidden")))
@interface _HKBaseDimension
{
    NSString *_name;
    HKBaseUnit *_reducibleBaseUnit;
    HKUnit *_reducedUnit;
    double _reductionCoefficient;
}

+ (id)_uniquedDefinedDimensionWithName:(id)arg1;
+ (id)_uniquedDimensionWithName:(id)arg1 configuration:(CDUnknownBlockType)arg2;
+ (id)nullDimension;
+ (id)illuminance;
+ (id)angle;
+ (id)prismDiopter;
+ (id)diopter;
+ (id)power;
+ (id)electricPotentialDifference;
+ (id)titer;
+ (id)soundPressureLevel;
+ (id)hearingSensitivity;
+ (id)equivalents;
+ (id)nonConvertibleIU;
+ (id)nonConvertibleMole;
+ (id)frequency;
+ (id)conductance;
+ (id)changeInTemperature;
+ (id)temperature;
+ (id)time;
+ (id)energy;
+ (id)pressure;
+ (id)volume;
+ (id)length;
+ (id)mass;
- (void).cxx_destruct;
@property(nonatomic) double reductionCoefficient; // @synthesize reductionCoefficient=_reductionCoefficient;
@property(retain, nonatomic) HKUnit *reducedUnit; // @synthesize reducedUnit=_reducedUnit;
@property(retain, nonatomic) HKBaseUnit *reducibleBaseUnit; // @synthesize reducibleBaseUnit=_reducibleBaseUnit;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)_baseDimensions;
- (id)_initWithName:(id)arg1;
- (id)dimension;
- (id)unitString;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)canBeReduced;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

