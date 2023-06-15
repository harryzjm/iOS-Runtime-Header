//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHAssetResource.h>

@interface PHAssetResource (MediaAnalysis)
+ (CDUnknownBlockType)vcp_descendingSizeComparator;
+ (CDUnknownBlockType)vcp_ascendingSizeComparator;
+ (id)vcp_allAcceptableResourcesForAsset:(id)arg1;
+ (id)vcp_allResourcesForAsset:(id)arg1;
+ (id)vcp_allowedBundlesForSyndicationLibrary;
- (struct CGSize)vcp_size;
- (unsigned long long)vcp_fileSize;
- (_Bool)vcp_hasExtremeAbnormalDimensionForScene;
- (_Bool)vcp_isLocallyAvailable;
- (_Bool)vcp_isDecodable;
- (_Bool)vcp_isPhotoResourceUsable:(_Bool)arg1;
- (_Bool)vcp_isVideoResourceUsable:(_Bool)arg1;
- (_Bool)vcp_isPhoto;
- (_Bool)vcp_isMovie;
- (id)vcp_uniformTypeIdentifier;
- (id)vcp_avAsset;
@end

