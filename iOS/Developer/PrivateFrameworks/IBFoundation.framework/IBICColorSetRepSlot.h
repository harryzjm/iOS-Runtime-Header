//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IBICColorSpace, IBICIdiom;

@interface IBICColorSetRepSlot
{
    IBICIdiom *_idiom;
    IBICColorSpace *_colorSpace;
}

+ (id)detailAreaGroupPathForIdiom:(id)arg1 colorSpace:(id)arg2;
+ (id)genesisSlotsForSlots:(id)arg1;
+ (id)slotWithIdiom:(id)arg1 colorSpace:(id)arg2;
+ (id)orderedComponentClasses;
+ (id)slotFilterWithIdiomFilter:(id)arg1 colorSpaceFilter:(id)arg2;
+ (id)slotFilterWithNilMatching:(long long)arg1 idioms:(id)arg2 colorSpaces:(id)arg3;
+ (id)slotFilterUnionedWithStandardUniversalCounterpart:(_Bool)arg1 idioms:(id)arg2 colorSpaces:(id)arg3;
+ (Class)assetRepClass;
+ (Class)assetSetClass;
@property(readonly) IBICColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(readonly) IBICIdiom *idiom; // @synthesize idiom=_idiom;
- (void).cxx_destruct;
- (id)detailAreaPath;
- (long long)compareDisplayOrder:(id)arg1;
- (id)shortDisplayName;
- (void)captureComponents;

@end
