//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IBICIdiom, IBICLuminosityAppearance, IBICScale, IBICSize;

@interface IBICSidebarIconSetRepSlot
{
    IBICIdiom *_idiom;
    IBICSize *_size;
    IBICScale *_scale;
    IBICLuminosityAppearance *_luminosityAppearance;
}

+ (id)orderedComponentClasses;
+ (id)slotWithIdiom:(id)arg1 size:(id)arg2 scale:(id)arg3 luminosity:(id)arg4;
+ (id)genesisSlotsForSlots:(id)arg1;
+ (id)fileProviderSidebarIconSizes;
+ (id)slotFilterWithIdiomFilter:(id)arg1 sizeFilter:(id)arg2 scaleFilter:(id)arg3 luminosityFilter:(id)arg4;
+ (Class)assetRepClass;
+ (Class)assetSetClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) IBICLuminosityAppearance *luminosityAppearance; // @synthesize luminosityAppearance=_luminosityAppearance;
@property(readonly, nonatomic) IBICScale *scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) IBICSize *size; // @synthesize size=_size;
@property(readonly, nonatomic) IBICIdiom *idiom; // @synthesize idiom=_idiom;
- (id)outputFileNameGivenBaseName:(id)arg1 andExtension:(id)arg2;
- (id)detailAreaPath;
- (id)requiredPixelSize;
- (long long)compareDisplayOrder:(id)arg1;
- (id)shortDisplayNameConsideringCounterparts:(id)arg1;
- (_Bool)anyExplicitValuesForSlotComponentClass:(Class)arg1 amongCounterparts:(id)arg2;
- (void)captureComponents;

@end
