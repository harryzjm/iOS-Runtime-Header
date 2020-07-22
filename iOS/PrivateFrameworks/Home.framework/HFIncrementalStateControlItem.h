//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFTogglableControlItem-Protocol.h>

@class HFControlItem, NSNumber, NSString;
@protocol HFPrimaryStateWriter;

@interface HFIncrementalStateControlItem <HFTogglableControlItem>
{
    HFControlItem<HFPrimaryStateWriter> *_primaryStateControlItem;
    NSString *_incrementalCharacteristicType;
}

+ (Class)valueClass;
@property(readonly, copy, nonatomic) NSString *incrementalCharacteristicType; // @synthesize incrementalCharacteristicType=_incrementalCharacteristicType;
@property(readonly, nonatomic) HFControlItem<HFPrimaryStateWriter> *primaryStateControlItem; // @synthesize primaryStateControlItem=_primaryStateControlItem;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *stepValue;
- (id)characteristicValuesForValue:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)valueForCharacteristicType:(id)arg1 inBatchReadResponse:(id)arg2;
- (id)updateWithOptions:(id)arg1;
- (id)writeValue:(id)arg1;
- (id)toggleValue;
- (id)togglePrimaryAndIncrementalState;
- (id)copyWithCharacteristicTypes:(id)arg1 valueSource:(id)arg2;
- (_Bool)canCopyWithCharacteristicTypeSubset:(id)arg1;
- (id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 incrementalAndPrimaryCharacteristicType:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 primaryStateControlItem:(id)arg2 incrementalCharacteristicType:(id)arg3 displayResults:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

