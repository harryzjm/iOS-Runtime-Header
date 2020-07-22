//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFPrimaryStateWriter-Protocol.h>

@class NSSet, NSString;

@interface HFPowerStateControlItem <HFPrimaryStateWriter>
{
    NSSet *_auxiliaryTargetValueTuples;
}

+ (id)_powerStateTargetValues;
+ (Class)valueClass;
@property(readonly, nonatomic) NSSet *auxiliaryTargetValueTuples; // @synthesize auxiliaryTargetValueTuples=_auxiliaryTargetValueTuples;
- (void).cxx_destruct;
- (id)_allTargetValues;
- (_Bool)supportsItemRepresentingServices:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)toggleValue;
- (id)togglePrimaryState;
- (id)writePrimaryState:(long long)arg1;
- (id)copyWithCharacteristicTypes:(id)arg1 valueSource:(id)arg2;
- (_Bool)canCopyWithCharacteristicTypeSubset:(id)arg1;
- (id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 displayResults:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

