//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IBICGraphicsFeatureSet, IBICIdiom, IBICMemoryClass;

@interface IBICModelSetRepSlot
{
    IBICIdiom *_idiom;
    IBICMemoryClass *_memory;
    IBICGraphicsFeatureSet *_graphicsFeatureSet;
}

+ (id)orderedComponentClasses;
+ (id)slotWithIdiom:(id)arg1 memory:(id)arg2 graphicsFeatureSet:(id)arg3;
+ (id)slotWithIdiom:(id)arg1;
+ (id)genesisSlotsForSlots:(id)arg1;
+ (id)slotFilterWithIdiomFilter:(id)arg1 memoryFilter:(id)arg2 graphicsFeatureSetFilter:(id)arg3;
+ (id)slotFilterWithNilMatching:(long long)arg1 idioms:(id)arg2 memoryClasses:(id)arg3 graphicsFeatureSets:(id)arg4;
+ (id)slotFilterUnionedWithStandardUniversalCounterpart:(_Bool)arg1 idioms:(id)arg2 memoryClasses:(id)arg3 graphicsFeatureSets:(id)arg4;
+ (Class)assetRepClass;
+ (Class)assetSetClass;
- (void).cxx_destruct;
@property(readonly) IBICGraphicsFeatureSet *graphicsFeatureSet; // @synthesize graphicsFeatureSet=_graphicsFeatureSet;
@property(readonly) IBICMemoryClass *memory; // @synthesize memory=_memory;
@property(readonly) IBICIdiom *idiom; // @synthesize idiom=_idiom;
- (id)outputFileNameGivenBaseName:(id)arg1 andExtension:(id)arg2;
- (id)detailAreaPath;
- (long long)compareDisplayOrder:(id)arg1;
- (id)shortDisplayNameConsideringCounterparts:(id)arg1;
- (void)captureComponents;

@end

