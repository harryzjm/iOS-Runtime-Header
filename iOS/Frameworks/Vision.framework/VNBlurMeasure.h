//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNBlurMeasure : NSObject
{
}

+ (_Bool)computeApproximateBlurScore:(float *)arg1 onRGBAImage:(struct __CVBuffer *)arg2 sampledPixelsCount:(int)arg3 insetFactor:(float)arg4 error:(id *)arg5;
+ (_Bool)computeApproximateBlurScore:(float *)arg1 onGrayscaleImage:(struct __CVBuffer *)arg2 sampledPixelsCount:(int)arg3 insetFactor:(float)arg4 error:(id *)arg5;
+ (_Bool)computeEdgeWidthBlurScore:(float *)arg1 onGrayscaleImage:(struct __CVBuffer *)arg2 error:(id *)arg3;
+ (_Bool)computeBlurScore:(float *)arg1 usingBlurSignature:(id)arg2 insetFactor:(float)arg3 imageROI:(struct CGRect)arg4 error:(id *)arg5;
+ (_Bool)computeBlurScore:(float *)arg1 onGrayscaleImage:(struct __CVBuffer *)arg2 insetFactor:(float)arg3 error:(id *)arg4;
+ (_Bool)computeBlurScore:(float *)arg1 onGrayscaleImage:(struct __CVBuffer *)arg2 andWithRegionOfInterestInImageCoordinates:(struct CGRect)arg3 andRegionOfInterestInsetFactor:(float)arg4 error:(id *)arg5;

@end

