//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NTKZeusAnalogFace
{
}

+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1 forDevice:(id)arg2;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)arg1;
+ (id)fixedComplicationSlotsForDevice:(id)arg1;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_customEditModes;
- (id)_localizedNameForComplicationSlot:(id)arg1;
- (id)_orderedComplicationSlots;
- (id)_complicationSlotDescriptors;
- (id)_complicationMigrationPaths;
- (long long)_editModeForOldEncodingIndex:(long long)arg1;

@end

