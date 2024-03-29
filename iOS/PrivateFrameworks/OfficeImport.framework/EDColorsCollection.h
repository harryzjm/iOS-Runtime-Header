//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface EDColorsCollection
{
    unsigned long long mDefaultColorsCount;
}

+ (int)oadSchemeColorIdFromThemeIndex:(int)arg1;
+ (unsigned int)xlColorIndexFromTCSystemColorIDEnum:(int)arg1;
+ (int)systemColorIdFromIndex:(unsigned long long)arg1;
+ (_Bool)isSystemColorId:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (void)addPalette:(const unsigned int *)arg1 paletteSize:(unsigned int)arg2 paletteX:(const unsigned int *)arg3 paletteXSize:(unsigned int)arg4;
- (const unsigned int *)defaultPalette;
- (void)addColors:(const unsigned int *)arg1 count:(unsigned int)arg2 defaultColors:(const unsigned int *)arg3 defaultCount:(unsigned int)arg4;
- (void)addDefaultPalette;
- (unsigned long long)addOrEquivalentColorExcludingDefaults:(id)arg1;
- (id)colorWithIndex:(unsigned long long)arg1;
- (unsigned long long)defaultColorsCount;
- (id)initWithDefaultSetup:(_Bool)arg1;
- (void)setupDefaults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

