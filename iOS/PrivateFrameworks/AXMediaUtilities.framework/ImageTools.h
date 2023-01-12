//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ImageTools : NSObject
{
}

+ (long long)createRGB8BufferFrom420Y8BiPlanarBuffer:(void *)arg1 withBytesPerRowLuma:(unsigned long long)arg2 andFrom420CbCr8Buffer:(void *)arg3 withBytesPerRowChroma:(unsigned long long)arg4 andWithWidth:(int)arg5 andWithHeight:(int)arg6 andAlphaFirst:(_Bool)arg7 toRGB8Buffer:(void *)arg8 withBytesPerRowDst:(unsigned long long)arg9;
+ (long long)createRGB8BufferFrom420Y8PlanarBuffer:(void *)arg1 withBytesPerRowY:(unsigned long long)arg2 andFrom420Cb8Buffer:(void *)arg3 withBytesPerRowCb:(unsigned long long)arg4 andFrom420Cr8Buffer:(void *)arg5 withBytesPerRowCr:(unsigned long long)arg6 andWithWidth:(int)arg7 andWithHeight:(int)arg8 andAlphaFirst:(_Bool)arg9 toRGB8Buffer:(void *)arg10 withBytesPerRowDst:(unsigned long long)arg11;
+ (long long)create420YCbCr8BufferFromRGB8Buffer:(void *)arg1 withWidth:(int)arg2 andWithHeight:(int)arg3 andWithBytesPerRow:(unsigned long long)arg4 andAlphaFirst:(_Bool)arg5 toLumaBuffer:(void *)arg6 withBytesPerRowLuma:(unsigned long long)arg7 andToChromaBuffer:(void *)arg8 withBytesPerRowChroma:(unsigned long long)arg9;
+ (long long)create420YCbCr8BufferFromPlanar8Buffer:(void *)arg1 withWidth:(int)arg2 andWithHeight:(int)arg3 andWithBytesPerRow:(unsigned long long)arg4 toLumaBuffer:(void *)arg5 withBytesPerRowLuma:(unsigned long long)arg6 andToChromaBuffer:(void *)arg7 withBytesPerRowChroma:(unsigned long long)arg8;
+ (long long)extractLumaFromBGRA8Buffer:(void *)arg1 withWidth:(int)arg2 andWithHeight:(int)arg3 andWithBytesPerRow:(unsigned long long)arg4 toBuffer:(void *)arg5 withBytesPerRow:(unsigned long long)arg6;
+ (struct vImage_Buffer)getVImageBufferFromCGImage:(struct CGImage *)arg1 error:(id *)arg2;
+ (struct vImage_Buffer)getVImageBufferFromCGImageLuma:(struct CGImage *)arg1 error:(id *)arg2;
+ (struct vImage_Buffer)getVImageBufferFromCVPixelBuffer:(struct __CVBuffer *)arg1 channel:(int)arg2 error:(id *)arg3;
+ (id)saveRawBuffer:(void *)arg1 withWidth:(unsigned int)arg2 andHeight:(unsigned int)arg3 andRowBytes:(unsigned int)arg4 withName:(id)arg5 inFolder:(id)arg6 error:(id *)arg7;
+ (id)saveCGImage:(const struct CGImage *)arg1 withName:(id)arg2 inFolder:(id)arg3 error:(id *)arg4;
+ (id)saveVImageBufferRGBA8:(const struct vImage_Buffer *)arg1 withName:(id)arg2 inFolder:(id)arg3 error:(id *)arg4;
+ (_Bool)writeImage:(struct CGImage *)arg1 toFile:(id)arg2 error:(id *)arg3;
+ (id)saveVImageBufferRGBA8ToData:(const struct vImage_Buffer *)arg1 deriveTypeFromFileName:(id)arg2 error:(id *)arg3;
+ (id)saveVImageBufferRGBA8ToJPEGData:(const struct vImage_Buffer *)arg1 withCompressionQuality:(float)arg2 error:(id *)arg3;
+ (id)writeImageToData:(struct CGImage *)arg1 type:(struct __CFString *)arg2 error:(id *)arg3;
+ (struct CGImage *)newCGImageFromRGBA8VImageBuffer:(const struct vImage_Buffer *)arg1 error:(id *)arg2;
+ (id)saveVImageBufferPlanar8:(const struct vImage_Buffer *)arg1 withName:(id)arg2 inFolder:(id)arg3 error:(id *)arg4;
+ (id)saveVImageBufferPlanar8ToData:(const struct vImage_Buffer *)arg1 deriveTypeFromFileName:(id)arg2 error:(id *)arg3;
+ (id)saveVImageBufferPlanar8ToJPEGData:(const struct vImage_Buffer *)arg1 withCompressionQuality:(float)arg2 error:(id *)arg3;
+ (struct CGImage *)newCGImageFromPlanar8VImageBuffer:(const struct vImage_Buffer *)arg1 error:(id *)arg2;
+ (id)saveCVPixelBuffer420YpCbCr8:(struct __CVBuffer *)arg1 withName:(id)arg2 inFolder:(id)arg3 error:(id *)arg4;
+ (id)saveCVPixelBufferRGBA8:(struct __CVBuffer *)arg1 withName:(id)arg2 inFolder:(id)arg3 error:(id *)arg4;
+ (id)saveCVPixelBufferPlane8:(int)arg1 from:(struct __CVBuffer *)arg2 withName:(id)arg3 inFolder:(id)arg4 error:(id *)arg5;
+ (struct __CVBuffer *)loadCVPixelBuffer420YpCbCr8FromURL:(id)arg1 error:(id *)arg2;
+ (struct __CVBuffer *)loadCVPixelBufferARGB8FromURL:(id)arg1 error:(id *)arg2;
+ (struct vImage_Buffer *)loadVImageBufferEXIFRotatedFromData:(id)arg1 error:(id *)arg2;
+ (struct vImage_Buffer *)loadVImageBufferEXIFRotatedFromURL:(id)arg1 error:(id *)arg2;
+ (struct vImage_Buffer *)loadVImageBufferFromURL:(id)arg1 lumaOnly:(_Bool)arg2 error:(id *)arg3;
+ (struct vImage_Buffer *)loadVImageBufferFromData:(id)arg1 isRaw:(_Bool)arg2 lumaOnly:(_Bool)arg3 error:(id *)arg4;
+ (id)numberOfChannelsInImageData:(id)arg1 error:(id *)arg2;
+ (void *)loadRawBufferFromURL:(id)arg1 width:(unsigned int *)arg2 height:(unsigned int *)arg3 rowBytes:(unsigned int *)arg4 error:(id *)arg5;
+ (void *)loadRawBufferFromData:(id)arg1 width:(unsigned int *)arg2 height:(unsigned int *)arg3 rowBytes:(unsigned int *)arg4 error:(id *)arg5;
+ (struct CGImage *)loadCGImageEXIFRotatedFromData:(id)arg1 error:(id *)arg2;
+ (struct CGImage *)loadCGImageEXIFRotatedFromURL:(id)arg1 error:(id *)arg2;
+ (struct CGImage *)loadCGImageEXIFRotatedFromSource:(struct CGImageSource *)arg1 error:(id *)arg2;
+ (struct CGImage *)loadCGImageFromURL:(id)arg1 error:(id *)arg2;
+ (struct CGContext *)createARGBBitmapContextWithImage:(struct CGImage *)arg1;
+ (struct CGImage *)rotateImage:(struct CGImage *)arg1 accordingToEXIFOrientation:(int)arg2;
+ (struct CGImage *)rotateImage:(struct CGImage *)arg1 withAngle:(float)arg2 andXFlip:(_Bool)arg3 andYFlip:(_Bool)arg4;
+ (id)getValueForTag:(id)arg1 inObject:(id)arg2 depth:(int)arg3 parent:(id)arg4;
+ (id)getValueForTag:(id)arg1 inObject:(id)arg2;
+ (struct __CFString *)guessType:(id)arg1;

@end
