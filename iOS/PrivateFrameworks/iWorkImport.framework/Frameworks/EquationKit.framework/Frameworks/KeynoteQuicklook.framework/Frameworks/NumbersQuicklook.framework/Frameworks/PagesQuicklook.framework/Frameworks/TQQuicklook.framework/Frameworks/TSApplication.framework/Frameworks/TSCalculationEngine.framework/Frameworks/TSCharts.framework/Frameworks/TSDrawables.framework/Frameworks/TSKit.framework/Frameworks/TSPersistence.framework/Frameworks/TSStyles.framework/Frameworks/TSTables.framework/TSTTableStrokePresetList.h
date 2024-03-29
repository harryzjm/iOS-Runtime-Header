//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPointerArray;

@interface TSTTableStrokePresetList : NSObject
{
    unsigned long long mCount;
    NSPointerArray *_presets;
}

+ (id)instanceWithArchive:(const void *)arg1 unarchiver:(id)arg2;
+ (id)strokePresetListForDefaultPropertyMapWithFatStroke:(id)arg1 andThinStroke:(id)arg2;
+ (id)strokePresetListForDefaultPropertyMapWithHorizontalStroke:(id)arg1 verticalStroke:(id)arg2 exteriorStroke:(id)arg3;
+ (id)strokePresetListForDefaultPropertyMapForTablePresetID:(unsigned long long)arg1 colors:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSPointerArray *presets; // @synthesize presets=_presets;
- (void)setStroke:(id)arg1 forPresetIndex:(unsigned long long)arg2;
- (unsigned int)maskForStrokePresets:(id)arg1;
- (unsigned int)maskForStrokePreset:(unsigned long long)arg1;
- (id)exteriorStrokeForStrokePreset:(unsigned long long)arg1;
- (id)verticalStrokeForStrokePreset:(unsigned long long)arg1;
- (id)horizontalStrokeForStrokePreset:(unsigned long long)arg1;
- (void)saveToArchive:(void *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const void *)arg1 unarchiver:(id)arg2;
- (void)setStrokePreset:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)presetAtIndex:(unsigned long long)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)count;
- (id)init;

@end

