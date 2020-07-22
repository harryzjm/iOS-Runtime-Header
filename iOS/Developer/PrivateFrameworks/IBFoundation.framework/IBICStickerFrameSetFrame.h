//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface IBICStickerFrameSetFrame
{
    NSData *_assetData;
    NSString *_uniqueIdentifier;
}

+ (_Bool)itemNameIsFileNameWithoutCatalogExtension;
+ (id)keyPathsForValuesAffectingIbInspectedItemName;
+ (Class)requiredParentClass;
+ (_Bool)fileNameIsIdentifier;
+ (id)catalogItemFileExtension;
+ (id)contentReferenceTypeName;
+ (id)classNameComponents;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(_Bool)arg2;
+ (id)createDefaultInstancesForUnitTesting;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)pixelSize;
- (id)imageIOProperties;
- (_Bool)matchesFileType:(id)arg1;
- (id)fileType;
- (void)setItemName:(id)arg1;
- (id)itemName;
- (id)parent;
- (void)replaceChildrenFromFileSystemSnapshot:(id)arg1 results:(id)arg2;
- (void)setAssetData:(id)arg1;
- (id)assetData;
- (id)fileWrapperRepresentationWithOptions:(unsigned long long)arg1;
- (id)identifier;
- (void)generateUniqueID;
- (id)init;

@end

