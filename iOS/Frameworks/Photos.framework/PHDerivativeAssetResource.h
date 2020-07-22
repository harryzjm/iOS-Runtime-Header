//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHCPLAssetResource-Protocol.h>

@class PHAsset, PLImageFormat;

@interface PHDerivativeAssetResource <PHCPLAssetResource>
{
    _Bool _tableFormat;
    unsigned long long _cplResourceType;
    PLImageFormat *_format;
    PHAsset *_asset;
}

+ (id)tableThumbnailDataForAsset:(id)arg1 assetResourceQualityClass:(id)arg2 dataSpecification:(struct PHAssetResourceTableDataSpecification *)arg3;
+ (id)assetResourceForAsset:(id)arg1 qualityClass:(id)arg2;
+ (id)thumbnailDerivativeAssetResourcesForAsset:(id)arg1;
+ (id)CPLDerivativeAssetResourcesForAsset:(id)arg1 managedAsset:(id)arg2;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) PLImageFormat *format; // @synthesize format=_format;
@property(readonly, nonatomic, getter=isTableFormat) _Bool tableFormat; // @synthesize tableFormat=_tableFormat;
@property(readonly, nonatomic) unsigned long long cplResourceType; // @synthesize cplResourceType=_cplResourceType;
- (void).cxx_destruct;
- (id)description;
- (id)assetLocalIdentifier;
- (long long)analysisType;
@property(readonly, nonatomic, getter=isVideo) _Bool video;
@property(readonly, nonatomic, getter=isCroppedToSquare) _Bool croppedToSquare;
@property(readonly, nonatomic, getter=isThumbnail) _Bool thumbnail;
- (_Bool)isTableThumbnail;
- (_Bool)fileExists;
- (id)initWithCloudResource:(id)arg1 forAsset:(id)arg2;
- (id)initWithThumbnailFormat:(id)arg1 forAsset:(id)arg2;
- (id)initWithQualityClass:(id)arg1 forAsset:(id)arg2;

@end

