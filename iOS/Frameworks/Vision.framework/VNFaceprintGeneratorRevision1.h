//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface VNFaceprintGeneratorRevision1
{
}

+ (float)magnifiedBBoxScaleFactor;
+ (CDUnknownFunctionPointerType)getFaceJunkClassifier;
+ (MISSING_TYPE *)frontalizer;
+ (struct __CVBuffer *)cropFaceBoundingBoxFrom:(id)arg1 cropBounds:(struct CGRect)arg2 error:(id *)arg3;
+ (struct CGRect)faceBoundingBox:(id)arg1;
+ (CDUnknownFunctionPointerType)faceDescriptorCreator;
+ (unsigned int)pixelFormat;
+ (int)imageType;
+ (unsigned long long)numberOfChannels;
+ (int)clusteringConfidence;
+ (id)modelPath;

@end
