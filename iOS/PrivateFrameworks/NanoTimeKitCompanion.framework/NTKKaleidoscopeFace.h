//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NTKKaleidoscopeFace
{
}

+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1 forDevice:(id)arg2;
+ (_Bool)_customEditMode:(long long)arg1 hasActionForOption:(id)arg2 forDevice:(id)arg3;
- (void)_updateForResourceDirectoryChange:(id)arg1;
- (Class)_optionClassForCustomEditMode:(long long)arg1 resourceDirectoryExists:(_Bool)arg2;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_customEditModes;
- (id)_orderedComplicationSlots;
- (id)_complicationSlotDescriptors;

@end

