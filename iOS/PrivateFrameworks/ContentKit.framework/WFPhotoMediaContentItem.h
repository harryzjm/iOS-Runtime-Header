//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContentKit/WFContentItemClass-Protocol.h>

@class PHAsset, WFFileType;

@interface WFPhotoMediaContentItem <WFContentItemClass>
{
    long long _library;
    WFFileType *_preferredFileType;
}

+ (id)defaultSourceForRepresentation:(id)arg1;
+ (_Bool)isAvailableOnPlatform:(long long)arg1;
+ (_Bool)hasLibrary;
+ (id)pluralFilterDescription;
+ (id)filterDescription;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)ownedPasteboardTypes;
+ (id)ownedTypes;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)remoteItemWithAssetIdentifier:(id)arg1 named:(id)arg2;
+ (id)propertyBuilders;
+ (id)photoAlbums;
+ (void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 attributionSet:(id)arg4;
+ (id)fetchOptionsForLibrary:(long long)arg1;
+ (id)itemsWithBurstIdentifier:(id)arg1;
+ (id)itemWithAssetIdentifier:(id)arg1 library:(long long)arg2 assetFile:(id)arg3 nameIfKnown:(id)arg4 attributionSet:(id)arg5;
+ (id)itemWithAssetIdentifier:(id)arg1 library:(long long)arg2 assetFile:(id)arg3 nameIfKnown:(id)arg4;
+ (id)itemWithAssetIdentifier:(id)arg1 library:(long long)arg2 assetFile:(id)arg3;
+ (id)itemWithAssetIdentifier:(id)arg1 library:(long long)arg2;
+ (id)itemWithAssetIdentifier:(id)arg1 assetFile:(id)arg2;
+ (id)itemWithAssetIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WFFileType *preferredFileType; // @synthesize preferredFileType=_preferredFileType;
@property(nonatomic) long long library; // @synthesize library=_library;
- (id)outputTypes;
- (id)intermediaryTypesForCoercionToItemClass:(Class)arg1;
- (id)assetRepresentationTypes;
- (id)fullSizeAssetResourcesInResources:(id)arg1;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithName:(id)arg1 zone:(struct _NSZone *)arg2;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateObjectRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateAVAsset:(CDUnknownBlockType)arg1 networkAccessAllowed:(_Bool)arg2;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (id)preferredAssetResourceForType:(id)arg1;
- (void)retrieveFileWithImageManager:(CDUnknownBlockType)arg1 forType:(id)arg2;
- (void)retrieveAssetResource:(id)arg1 withNetworkAccess:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getThumbnail:(CDUnknownBlockType)arg1 ofSize:(struct CGSize)arg2;
@property(readonly, nonatomic) PHAsset *asset;
- (id)orientation;
- (_Bool)isScreenshot;
- (id)mediaType;
- (id)isFavorite;
- (id)isHidden;
- (id)isLivePhoto;
- (id)isBurst;
- (id)photoTypes;
- (_Bool)isPhotoType:(id)arg1;
- (id)height;
- (id)width;
- (id)model;
- (id)make;
- (struct CGSize)size;
- (id)metadataIfLocallyAvailable;
- (void)getFrameRate:(CDUnknownBlockType)arg1;
- (void)getMetadata:(CDUnknownBlockType)arg1;
- (id)assetResourceManager;
- (id)imageManager;
- (id)duration;
- (void)getPreferredFileExtension:(CDUnknownBlockType)arg1;
- (void)getPreferredFileSize:(CDUnknownBlockType)arg1;
- (id)additionalRepresentationsForSerialization;
- (_Bool)getListThumbnail:(CDUnknownBlockType)arg1 forSize:(struct CGSize)arg2;
- (_Bool)getListSubtitle:(CDUnknownBlockType)arg1;

@end
