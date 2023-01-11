//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IBICIdiom;

@interface IBICARImageSetRepSlot
{
    IBICIdiom *_idiom;
}

+ (id)genesisSlotsForSlots:(id)arg1;
+ (id)orderedComponentClasses;
+ (id)slotWithIdiom:(id)arg1;
+ (id)slot;
+ (id)slotFilter;
+ (Class)assetRepClass;
+ (Class)assetSetClass;
@property(readonly, nonatomic) IBICIdiom *idiom; // @synthesize idiom=_idiom;
- (void).cxx_destruct;
- (id)outputFileNameGivenBaseName:(id)arg1 andExtension:(id)arg2;
- (id)detailAreaPath;
- (long long)compareDisplayOrder:(id)arg1;
- (id)shortDisplayNameConsideringCounterparts:(id)arg1;
- (void)captureComponents;

@end
