//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFChildServiceFilter, HMService;

@interface HFChildServiceControlItem
{
    HMService *_parentService;
    HFChildServiceFilter *_childServiceFilter;
}

+ (Class)valueClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) HFChildServiceFilter *childServiceFilter; // @synthesize childServiceFilter=_childServiceFilter;
@property(readonly, nonatomic) HMService *parentService; // @synthesize parentService=_parentService;
- (_Bool)supportsItemRepresentingServices:(id)arg1;
- (id)normalizedValueForValue:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithBaseValueSource:(id)arg1 parentService:(id)arg2 childServiceFilter:(id)arg3 displayResults:(id)arg4;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;

@end
