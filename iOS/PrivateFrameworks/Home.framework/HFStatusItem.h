//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMHome, HMRoom;
@protocol HFCharacteristicValueSource;

@interface HFStatusItem
{
    HMRoom *_room;
    HMHome *_home;
    id <HFCharacteristicValueSource> _valueSource;
}

@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) HMRoom *room; // @synthesize room=_room;
- (void).cxx_destruct;
- (id)init;
- (id)initWithHome:(id)arg1 room:(id)arg2;
- (id)initWithHome:(id)arg1 room:(id)arg2 valueSource:(id)arg3;
- (id)standardResultsForBatchReadResponse:(id)arg1 serviceTypes:(id)arg2;
- (id)_filteredServicesOfTypes:(id)arg1 containingCharacteristicTypes:(id)arg2;
- (id)filteredServicesOfTypes:(id)arg1 containingCharacteristicTypes:(id)arg2;
- (id)filteredServicesOfTypes:(id)arg1;
- (id)filteredServices;

@end
