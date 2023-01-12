//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPFaceCropUtils : NSObject
{
}

+ (struct CGSize)faceCropDimensionsFromFaceCrop:(id)arg1 error:(id *)arg2;
+ (id)groupingIdentifierFromFaceCrop:(id)arg1 error:(id *)arg2;
+ (struct CGRect)cropBoundsInOriginalImageFromFaceCrop:(id)arg1 error:(id *)arg2;
+ (struct CGRect)faceBoundsFromFaceCrop:(id)arg1 error:(id *)arg2;
+ (_Bool)isValidFaceCrop:(id)arg1;
+ (id)newFaceCropFromImageData:(id)arg1 withFaceRect:(struct CGRect)arg2 groupingIdentifier:(id)arg3 error:(id *)arg4;
+ (id)newFaceCropFromImageURL:(id)arg1 withNormalizedFaceRect:(struct CGRect)arg2 groupingIdentifier:(id)arg3 error:(id *)arg4;
+ (id)newFaceCropFromCGImageSource:(const struct CGImageSource *)arg1 withFaceRect:(struct CGRect)arg2 groupingIdentifier:(id)arg3 error:(id *)arg4;
+ (id)imageCreationOptions;
+ (id)newDictionaryRepresentationOfFaceCropDataFromFaceBox:(struct CGRect)arg1 andCropRegion:(struct CGRect)arg2 andGroupingIdentifier:(id)arg3;
+ (id)newDictionaryPopulatedWithFaceCropDataFromImageData:(id)arg1;
+ (struct CGImageMetadata *)createOutputMetadataFromDictionary:(id)arg1;

@end

