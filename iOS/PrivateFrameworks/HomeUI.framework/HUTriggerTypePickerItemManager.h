//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

@class HFStaticItem, HUInstructionsItem;

@interface HUTriggerTypePickerItemManager : HFItemManager
{
    HFStaticItem *_leavingLocationTriggerItem;
    HFStaticItem *_arrivingAtLocationTriggerItem;
    HFStaticItem *_timerTriggerItem;
    HFStaticItem *_characteristicTriggerItem;
    HFStaticItem *_alarmTriggerItem;
    HUInstructionsItem *_instructionsItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HUInstructionsItem *instructionsItem; // @synthesize instructionsItem=_instructionsItem;
@property(retain, nonatomic) HFStaticItem *alarmTriggerItem; // @synthesize alarmTriggerItem=_alarmTriggerItem;
@property(retain, nonatomic) HFStaticItem *characteristicTriggerItem; // @synthesize characteristicTriggerItem=_characteristicTriggerItem;
@property(retain, nonatomic) HFStaticItem *timerTriggerItem; // @synthesize timerTriggerItem=_timerTriggerItem;
@property(retain, nonatomic) HFStaticItem *arrivingAtLocationTriggerItem; // @synthesize arrivingAtLocationTriggerItem=_arrivingAtLocationTriggerItem;
@property(retain, nonatomic) HFStaticItem *leavingLocationTriggerItem; // @synthesize leavingLocationTriggerItem=_leavingLocationTriggerItem;
- (_Bool)_hasMinimumRequiredTriggerableServices:(unsigned long long)arg1;
- (_Bool)_hasMinimumRequiredTriggeringServices:(long long)arg1;
- (id)_createCharacteristicItemForSource:(unsigned long long)arg1;
- (id)_createLocationItemForType:(unsigned long long)arg1;
- (id)_createTimeItem;
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_identifierForSection:(unsigned long long)arg1;
- (unsigned long long)_numberOfSections;
- (id)_buildItemProvidersForHome:(id)arg1;

@end
