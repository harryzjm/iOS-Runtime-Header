//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNTorsoprintGenerator
{
}

+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
+ (id)configurationOptionKeysForDetectorKey;
+ (float)_magnifiedBBoxScaleFactor;
+ (float)_minimumTorsoInsideInputImageThreshold;
+ (struct CGSize)_torsoprintDescriptorSize;
+ (struct CGSize)_torsoprintInputImageSizeForFaceOrientation:(int)arg1;
- (_Bool)_calculateTorsoBBoxFromFaceBBox:(struct CGRect)arg1 insideImageWithSize:(struct CGSize)arg2 faceOrientationRelativeToUpright:(int)arg3 torsoBBox:(struct CGRect *)arg4 error:(id *)arg5;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)_runTorsoprintModelOnImageBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (_Bool)supportsProcessingDevice:(id)arg1;

@end
