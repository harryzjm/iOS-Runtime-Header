//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VCPFaceUtils : NSObject
{
}

+ (int)configureVNRequest:(id *)arg1 withClass:(Class)arg2 andProcessingVersion:(int)arg3;
+ (id)resourceForFaceProcessingWithAsset:(id)arg1 allowStreaming:(_Bool)arg2;
+ (id)preferredResourcesForFaceProcessingWithAsset:(id)arg1;
+ (id)resourceForFaceProcessing:(id)arg1 allowStreaming:(_Bool)arg2;
+ (id)_firstLocallyAvailableResourceFromResources:(id)arg1;
+ (id)phFaceFromVCPPhotosFace:(id)arg1 withFetchOptions:(id)arg2;
+ (void)assignPropertiesOfVCPPhotosFace:(id)arg1 toPHFaceChangeRequest:(id)arg2;
+ (unsigned short)mad_PHValueFromVNFaceGazeDirection:(long long)arg1;
+ (id)mad_PHFaceGazeTypeDescription:(unsigned short)arg1;
+ (id)mad_VNFaceGazeDirectionDescription:(long long)arg1;
+ (id)_vnFaceGazeDirectionToPHFaceGazeType;
+ (unsigned short)mad_PHValueFromVNEthnicityCategoryLabel:(id)arg1;
+ (id)_vnFaceAttributeEthnicityToPHFaceEthnicityType;
+ (unsigned short)mad_PHValueFromVNSkintoneCategoryLabel:(id)arg1;
+ (id)_vnFaceAttributeSkintoneToPHFaceSkintoneType;
+ (unsigned short)mad_PHValueFromVNPoseCategoryLabel:(id)arg1;
+ (id)_vnFaceAttributePoseToPHFacePoseType;
+ (unsigned short)mad_PHValueFromVNFaceHairCategoryV2Label:(id)arg1;
+ (id)_vnFaceAttributeHairTypeToPHFaceHairType;
+ (unsigned short)mad_PHValueFromVNHeadgearCategoryLabel:(id)arg1;
+ (id)_vnFaceAttributeHeadGearToPHFaceHeadGearType;
+ (unsigned short)mad_PHValueFromVNExpressionCategoryLabel:(id)arg1;
+ (id)_vnFaceAttributeFacialHairToPHFaceExpressionType;
+ (unsigned short)mad_PHValueFromVNGlassesCategoryLabel:(id)arg1;
+ (id)_vnFaceAttributeGlassesToPHFaceGlassesTypeMap;
+ (unsigned short)mad_PHValueFromVNHairColorCategoryLabel:(id)arg1;
+ (id)_vnFaceAttributeHairColorToPHFaceHairColorTypeMap;
+ (unsigned short)mad_PHValueFromVNFaceHairCategoryLabel:(id)arg1;
+ (id)_vnFaceAttributeFacialHairToPHFacialHairTypeMap;
+ (unsigned short)mad_PHValueFromVNSmilingCategoryLabel:(id)arg1;
+ (id)_vnFaceAttributeSmileToPHFaceSmileTypeMap;
+ (unsigned short)mad_PHValueFromVNEyesCategoryLabel:(id)arg1;
+ (id)_vnFaceAttributeEyesToPHEyesStateMap;
+ (unsigned short)mad_PHValueFromVNSexCategoryLabel:(id)arg1;
+ (id)_vnFaceAttributeSexToPHFaceSexTypeMap;
+ (unsigned short)mad_PHValueFromVNAgeCategoryLabel:(id)arg1;
+ (id)_vnFaceAttributeAgeToPHFaceAgeTypeMap;
+ (id)phFacesFromVCPPhotosFaces:(id)arg1 withFetchOptions:(id)arg2;
+ (id)imageCreationOptions;
+ (id)vcpPhotosFaceFromPHFace:(id)arg1 copyPropertiesOption:(long long)arg2;
- (id)_vcpFacesArrayFromPHFetchResult:(id)arg1 copyPropertiesOption:(long long)arg2;

@end
