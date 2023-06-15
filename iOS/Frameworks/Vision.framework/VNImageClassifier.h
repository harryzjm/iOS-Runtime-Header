//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNImageClassifier : NSObject
{
}

+ (_Bool)_dumpIntermediatesTiles:(id)arg1 imageURL:(id)arg2 requiredImageSource:(const struct __CVBuffer *)arg3 imageProcessingType:(int)arg4 allocatedTileCount:(unsigned int)arg5 imageTiles:(const void *)arg6 bytesPerPixel:(int)arg7 numTiles:(unsigned int)arg8 scaleFactor:(float)arg9 augmentationMode:(unsigned int)arg10 scalingImage:(_Bool)arg11 error:(id *)arg12;
+ (_Bool)_dumpIntermediatesFullImage:(id)arg1 imageURL:(id)arg2 requiredImageSource:(const struct __CVBuffer *)arg3 imageProcessingType:(int)arg4 error:(id *)arg5;
+ (id)classifyImageHierarchicallyWithDescriptors:(const void *)arg1 usingImageClassifier:(void *)arg2 hierarchicalClassifier:(struct ImageClassifier_HierarchicalModel *)arg3 minimumClassificationConfidence:(float)arg4 minimumClassificationConfidenceRatio:(float)arg5 maximumLeafLabels:(unsigned long long)arg6 maximumHierarchicalLabels:(unsigned long long)arg7 options:(id)arg8 metalContext:(id)arg9 error:(id *)arg10;
+ (id)classifyImageWithDescriptors:(const void *)arg1 usingImageClassifier:(void *)arg2 andMinConfidenceForClassification:(float)arg3 options:(id)arg4 metalContext:(id)arg5 error:(id *)arg6;
+ (_Bool)computeLabelsAndConfidence:(void *)arg1 usingDescriptorBuffer:(void *)arg2 populateLabelsAndConfidence:(void *)arg3 options:(id)arg4 metalContext:(id)arg5 error:(id *)arg6;
+ (_Bool)computeImageDescriptorsWithImage:(id)arg1 pixelBuffer:(const struct __CVBuffer *)arg2 regionOfInterest:(struct CGRect)arg3 usingDescriptorProcessor:(struct ImageDescriptorProcessorAbstract *)arg4 tileCount:(int)arg5 augmentationMode:(unsigned int)arg6 resultantDescriptorBuffer:(void *)arg7 options:(id)arg8 metalContext:(id)arg9 canceller:(id)arg10 tileColumns:(unsigned long long *)arg11 tileRows:(unsigned long long *)arg12 error:(id *)arg13;
+ (_Bool)computeImageCropWithImage:(id)arg1 regionOfInterest:(struct CGRect)arg2 usingDescriptorProcessor:(struct ImageDescriptorProcessorAbstract *)arg3 scalingImage:(_Bool)arg4 options:(id)arg5 pixelBuffer:(struct __CVBuffer **)arg6 error:(id *)arg7;

@end

