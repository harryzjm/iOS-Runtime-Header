//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFItemManager.h>

@class HFItem, HFTimeRangeCondition;

@interface HUTriggerTimeConditionDetailEditorItemManager : HFItemManager
{
    HFItem *_startConditionPickerItem;
    HFItem *_endConditionPickerItem;
    HFTimeRangeCondition *_rangeCondition;
}

@property(retain, nonatomic) HFTimeRangeCondition *rangeCondition; // @synthesize rangeCondition=_rangeCondition;
@property(retain, nonatomic) HFItem *endConditionPickerItem; // @synthesize endConditionPickerItem=_endConditionPickerItem;
@property(retain, nonatomic) HFItem *startConditionPickerItem; // @synthesize startConditionPickerItem=_startConditionPickerItem;
- (void).cxx_destruct;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (void)setPrimitiveCondition:(id)arg1 forPickerItem:(id)arg2;
- (id)primitiveConditionForPickerItem:(id)arg1;
- (id)initWithDelegate:(id)arg1 rangeCondition:(id)arg2;

@end

