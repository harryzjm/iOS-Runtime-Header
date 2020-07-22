//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSTCellDiffing-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSTCellStyle <TSTCellDiffing, TSDMixing>
{
}

+ (void)initDefaultPropertyMap:(id)arg1 forTableArea:(unsigned long long)arg2 presetID:(unsigned long long)arg3 colors:(id)arg4 alternate:(int)arg5;
+ (void)p_initFooterRowRegionPropertyMap:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (void)p_initHeaderColumnRegionPropertyMap:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (void)p_initHeaderRowRegionPropertyMap:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (void)p_initBodyRegionPropertyMap:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (id)textStyleIDForPreset:(unsigned long long)arg1 andTableArea:(unsigned long long)arg2;
+ (id)styleIDForPreset:(unsigned long long)arg1 andTableArea:(unsigned long long)arg2;
+ (id)regionStringForTableArea:(unsigned long long)arg1;
+ (id)nonEmphasisCellProperties;
+ (id)propertiesAllowingNSNull;
+ (id)properties;
+ (id)cellDiffProperties;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)upgradeIfNecessary;
- (void)dealloc;
- (void)validate;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveCellStyleToArchive:(struct CellStyleArchive *)arg1 archiver:(id)arg2;
- (void)loadCellStyleFromArchive:(const struct CellStyleArchive *)arg1 unarchiver:(id)arg2;
- (void)saveCellStylePropertiesToArchive:(struct CellStylePropertiesArchive *)arg1 archiver:(id)arg2;
- (void)loadCellStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct CellStylePropertiesArchive *)arg2 unarchiver:(id)arg3;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4;

@end
