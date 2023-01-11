//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NTKFaceComplicationPreviewable-Protocol.h>

@class NSString;

@interface NTKWhistlerSubdialsFace <NTKFaceComplicationPreviewable>
{
}

+ (id)_richComplicationSlotsForDevice:(id)arg1;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1 forDevice:(id)arg2;
+ (id)_orderedComplicationSlots;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)arg1;
+ (id)_initialDefaultComplicationForSlot:(id)arg1 forDevice:(id)arg2;
+ (id)_complicationSlotDescriptors;
- (void)applyPreviewConfigurationWithFamily:(long long)arg1 faceColor:(long long)arg2;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_customEditModes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
