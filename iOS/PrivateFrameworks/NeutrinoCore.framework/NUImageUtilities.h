//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NUImageUtilities : NSObject
{
}

+ (long long)alignedRowBytesForWidth:(long long)arg1 bytesPerPixel:(long long)arg2;
+ (void)renderImage:(id)arg1 toSurface:(id)arg2 atPoint:(CDStruct_912cb5d2)arg3 withContext:(id)arg4 andColorSpace:(id)arg5;
+ (void)copyTexture:(id)arg1 fromRect:(CDStruct_996ac03c)arg2 toSurfaceImage:(id)arg3 atPoint:(CDStruct_912cb5d2)arg4 withContext:(id)arg5;
+ (void)copySurface:(id)arg1 fromRect:(CDStruct_996ac03c)arg2 toSurfaceImage:(id)arg3 atPoint:(CDStruct_912cb5d2)arg4;
+ (void)copySurfaceImage:(id)arg1 toImage:(id)arg2;
+ (void)copyPixelsFromImage:(id)arg1 srcRect:(CDStruct_996ac03c)arg2 destImage:(id)arg3 destOrigin:(CDStruct_912cb5d2)arg4;
+ (void)fillPixelsInBuffer:(id)arg1 rect:(CDStruct_996ac03c)arg2 srcPixel:(const void *)arg3;
+ (void)fillPixelsInImage:(id)arg1 rect:(CDStruct_996ac03c)arg2 srcPixel:(const void *)arg3;
+ (void)copyPixelsToImage:(id)arg1 atPoint:(CDStruct_912cb5d2)arg2 fromBuffer:(id)arg3 inRect:(CDStruct_996ac03c)arg4;
+ (void)copyPixelsToImage:(id)arg1 rect:(CDStruct_996ac03c)arg2 srcPtr:(const void *)arg3 srcPtrRowBytes:(long long)arg4;
+ (void)copyPixelsFromSurfaceImage:(id)arg1 atPoint:(CDStruct_912cb5d2)arg2 toBuffer:(id)arg3;
+ (void)copyPixelsFromSurfaceImage:(id)arg1 rect:(CDStruct_996ac03c)arg2 destPtr:(void *)arg3 destPtrRowBytes:(long long)arg4;
+ (void)copyPixelsFromImage:(id)arg1 atPoint:(CDStruct_912cb5d2)arg2 toBuffer:(id)arg3;
+ (void)copyBuffer:(id)arg1 rect:(CDStruct_996ac03c)arg2 toBuffer:(id)arg3 atPoint:(CDStruct_912cb5d2)arg4;
+ (void)copyPixelsFromImage:(id)arg1 rect:(CDStruct_996ac03c)arg2 destPtr:(void *)arg3 destPtrRowBytes:(long long)arg4;

@end

