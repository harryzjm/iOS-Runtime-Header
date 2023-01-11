//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFItem, HFTransformItem, NSArray;

@interface HUTriggerTimeConditionEditorSectionModule
{
    HFItem *_anyTimeOptionItem;
    HFTransformItem *_onlyDayOptionItem;
    HFTransformItem *_onlyNightOptionItem;
    HFTransformItem *_specificTimesOptionItem;
    HFTransformItem *_customOptionItem;
}

@property(retain, nonatomic) HFTransformItem *customOptionItem; // @synthesize customOptionItem=_customOptionItem;
@property(retain, nonatomic) HFTransformItem *specificTimesOptionItem; // @synthesize specificTimesOptionItem=_specificTimesOptionItem;
@property(retain, nonatomic) HFTransformItem *onlyNightOptionItem; // @synthesize onlyNightOptionItem=_onlyNightOptionItem;
@property(retain, nonatomic) HFTransformItem *onlyDayOptionItem; // @synthesize onlyDayOptionItem=_onlyDayOptionItem;
@property(retain, nonatomic) HFItem *anyTimeOptionItem; // @synthesize anyTimeOptionItem=_anyTimeOptionItem;
- (void).cxx_destruct;
- (id)_createConditionItemForType:(unsigned long long)arg1;
- (id)_conditionItemForType:(unsigned long long)arg1;
- (_Bool)doesOptionItemRequireInitialUserConfiguration:(id)arg1;
- (id)buildConditionOptionItems;
- (_Bool)conditionIsDisabled;
- (id)noConditionSummaryTitle;
- (id)conditionTitle;
- (id)preferredConditionFromConditions:(id)arg1;
- (id)selectOptionItemForCondition:(id)arg1;
- (id)conditionForOptionItem:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSArray *optionItems; // @dynamic optionItems;

@end
