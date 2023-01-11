//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CIImage;

@interface CRImage : NSObject
{
    struct __CVBuffer *_pixelBuffer;
    _Bool _isFullRange;
    _Bool _vImageDataIsCopy;
    int _colorSpace;
    CIImage *_ciImage;
    struct CGImage *_cgImage;
    struct vImage_Buffer _vImage;
}

+ (void)drawVerticalLineAtXOffset:(double)arg1 image:(id)arg2;
+ (_Bool)convertVImage:(const struct vImage_Buffer *)arg1 inColorSpace:(int)arg2 toVImage:(struct vImage_Buffer *)arg3 toColorSpace:(int)arg4;
+ (struct vImage_Buffer)applyEXIFTransformsOnImage:(const struct vImage_Buffer *)arg1 inColorSpace:(int)arg2 properties:(id)arg3;
+ (void)cgOrientation:(unsigned int)arg1 toVImageRotationMode:(char *)arg2 andReflection:(int *)arg3;
+ (id)nameForColorSpace:(int)arg1;
+ (unsigned long long)channelsForColorSpace:(int)arg1;
+ (unsigned long long)bytesPerPixelForColorSpace:(int)arg1;
+ (struct vImage_Buffer)allocateVImageBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 colorSpace:(int)arg3;
+ (struct vImage_Buffer)allocateVImageBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 bytesPerPixel:(int)arg3;
@property(nonatomic) _Bool vImageDataIsCopy; // @synthesize vImageDataIsCopy=_vImageDataIsCopy;
@property(nonatomic) struct CGImage *cgImage; // @synthesize cgImage=_cgImage;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property(retain, nonatomic) CIImage *ciImage; // @synthesize ciImage=_ciImage;
@property(readonly) _Bool isFullRange; // @synthesize isFullRange=_isFullRange;
@property(readonly) int colorSpace; // @synthesize colorSpace=_colorSpace;
@property(readonly) struct vImage_Buffer vImage; // @synthesize vImage=_vImage;
- (void).cxx_destruct;
- (id)initWithVImageBuffer:(struct vImage_Buffer)arg1;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 properties:(id)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithCIImage:(id)arg1;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1;
- (id)imageByOverlayingRects:(struct CGRect *)arg1 count:(long long)arg2;
- (id)imageByOverlayingImage:(id)arg1 opacity:(float)arg2;
- (id)imageByConvertingToColorSpace:(int)arg1;
- (id)initWithContentsOfURL:(id)arg1 toColorSpace:(int)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1 properties:(id)arg2 toColorSpace:(int)arg3;
- (id)initWithCGImage:(struct CGImage *)arg1 toColorSpace:(int)arg2;
- (id)imageByInvertingIntensity;
- (void)dealloc;
- (void)writeToFile:(id)arg1;
- (id)imageByCroppingRectangle:(struct CGRect)arg1 toHeight:(unsigned long long)arg2 andWidth:(unsigned long long)arg3 withRotationAngle:(float)arg4;
- (id)imageByCroppingRectangle:(struct CGRect)arg1 textFeaturePoints:(id)arg2 radians:(float)arg3 rotatedRoi:(struct CGRect *)arg4;
- (id)imageByCroppingRectangle:(struct CGRect)arg1;
- (id)initWithMat:(const struct Mat *)arg1;
- (id)initWithVImageBuffer:(struct vImage_Buffer)arg1 inColorSpace:(int)arg2;
- (id)initWithVImageBuffer:(struct vImage_Buffer)arg1 inColorSpace:(int)arg2 toColorSpace:(int)arg3;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 colorSpace:(int)arg3;
- (unsigned long long)numChannels;
- (unsigned long long)bytesPerPixel;
- (id)imageByApplyingBinaryMask:(id)arg1;
- (id)imageByDilating;
- (id)imageByPaddingX:(unsigned long long)arg1 paddingY:(unsigned long long)arg2;
- (id)imageByPaddingToRatioAndScalingToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 alignCenter:(_Bool)arg3;
- (id)imageByPaddingToRatioAndScalingToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)imageByScalingToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)imageByCorrectingFromOrientation:(unsigned int)arg1;
- (id)imageByRotating180;
- (id)imageByRotating90CW;
- (id)imageByCroppingTextFeature:(id)arg1 correctedBoundingBox:(id)arg2 padding:(struct CGPoint)arg3 networkInputSize:(struct CGSize)arg4;
- (id)imageByApplyingHistogramCorrection;
- (struct vImage_Buffer)createFloatBuffer;
- (struct __CVBuffer *)pixelBufferWithScale:(double)arg1 paddedToSize:(struct CGSize)arg2 adjustedToSize:(struct CGSize *)arg3 mask:(struct CGImage *)arg4;
- (struct __CVBuffer *)pixelBufferWithScale:(double)arg1 paddedToSize:(struct CGSize)arg2 adjustedToSize:(struct CGSize *)arg3;
- (struct __CVBuffer *)pixelBufferWithScale:(double)arg1 paddedToSize:(struct CGSize)arg2;
- (void)runBlockWithARGB8888Image:(CDUnknownBlockType)arg1 blockOwnsMemory:(_Bool)arg2;
- (id)initWithCIImage:(id)arg1 toColorSpace:(int)arg2;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 toColorSpace:(int)arg2;
- (id)initAYUV8888WithCVPixelBuffer:(struct __CVBuffer *)arg1;
- (id)initYUV888WithCVPixelBuffer:(struct __CVBuffer *)arg1;
- (id)initARGB8888WithCVPixelBuffer:(struct __CVBuffer *)arg1;
- (id)initY8WithCVPixelBuffer:(struct __CVBuffer *)arg1;
@property(readonly) unsigned long long height;
@property(readonly) unsigned long long width;

@end
