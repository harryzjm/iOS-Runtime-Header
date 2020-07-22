//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFTogglableControlItem-Protocol.h>

@class HFMultiStateValueSet, HFPowerStateControlItem, NSString;

@interface HFTargetModeControlItem <HFTogglableControlItem>
{
    NSString *_targetModeCharacteristicType;
    HFMultiStateValueSet *_targetModeValueSet;
    HFPowerStateControlItem *_primaryPowerStateControlItem;
}

@property(readonly, nonatomic) HFPowerStateControlItem *primaryPowerStateControlItem; // @synthesize primaryPowerStateControlItem=_primaryPowerStateControlItem;
@property(readonly, nonatomic) HFMultiStateValueSet *targetModeValueSet; // @synthesize targetModeValueSet=_targetModeValueSet;
@property(readonly, nonatomic) NSString *targetModeCharacteristicType; // @synthesize targetModeCharacteristicType=_targetModeCharacteristicType;
- (void).cxx_destruct;
- (id)toggleValue;
- (id)characteristicValuesForValue:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)updateWithOptions:(id)arg1;
- (id)copyWithCharacteristicTypes:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 possibleValueSet:(id)arg3 displayResults:(id)arg4;
- (id)initWithValueSource:(id)arg1 targetModeCharacteristicType:(id)arg2 targetModeValueSet:(id)arg3 primaryPowerStateControlItem:(id)arg4 displayResults:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

