//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface CUIMutableCommonAssetStorage
{
    NSMutableDictionary *_bitmapInfo;
    unsigned int _useBitmapIndex:1;
    unsigned int _enableLargeCarKeyWorkaround:1;
}

- (_Bool)writeToDisk;
- (_Bool)writeToDiskAndCompact:(_Bool)arg1;
- (_Bool)_writeOutKeyFormatWithWorkaround;
- (_Bool)_saveBitmapInfo;
- (void)setZeroCodeBezelInformation:(CDStruct_c0454aff)arg1 forKey:(const void *)arg2 withLength:(unsigned long long)arg3;
- (void)setZeroCodeGlyphInformation:(CDStruct_c0454aff)arg1 forKey:(const void *)arg2 withLength:(unsigned long long)arg3;
- (void)_setZeroCodeInfo:(CDStruct_c0454aff)arg1 forKey:(const void *)arg2 withLength:(unsigned long long)arg3 inTree:(const void *)arg4;
- (void)setRenditionKey:(const struct _renditionkeytoken *)arg1 hotSpot:(struct CGPoint)arg2 forName:(const char *)arg3;
- (void)removeAssetForKey:(const void *)arg1 withLength:(unsigned long long)arg2;
- (void)removeAssetForKey:(id)arg1;
- (void)setExternalTags:(id)arg1;
- (void)setFontSize:(float)arg1 forFontSizeSelector:(id)arg2;
- (void)setFontName:(id)arg1 baselineOffset:(float)arg2 forFontSelector:(id)arg3;
- (void)setColor:(struct _rgbquad)arg1 forName:(const char *)arg2 excludeFromFilter:(_Bool)arg3;
- (void)updateBitmapInfo;
- (void)setCatalogGlobalData:(id)arg1;
- (void)setAsset:(id)arg1 forKey:(const void *)arg2 withLength:(unsigned long long)arg3;
- (void)setAsset:(id)arg1 forKey:(id)arg2;
- (void)setAuthoringTool:(id)arg1;
- (void)setDeploymentPlatformVersion:(id)arg1;
- (void)setDeploymentPlatform:(id)arg1;
- (void)setThinningArguments:(id)arg1;
- (void)_allocateExtendedMetadata;
- (void)setEnableLargeCarKeyWorkaround:(_Bool)arg1;
- (void)setColorSpaceID:(unsigned int)arg1;
- (void)setAssociatedChecksum:(unsigned int)arg1;
- (void)setUuid:(id)arg1;
- (void)setRenditionCount:(unsigned int)arg1;
- (void)setSchemaVersion:(unsigned int)arg1;
- (void)setVersionString:(const char *)arg1;
- (void)setStorageVersion:(unsigned int)arg1;
- (void)setKeySemantics:(int)arg1;
- (void)setKeyFormatData:(id)arg1;
@property(nonatomic) _Bool useBitmapIndex;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end
