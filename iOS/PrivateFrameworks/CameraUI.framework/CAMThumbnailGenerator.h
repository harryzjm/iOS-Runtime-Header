//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CAMThumbnailGenerator : NSObject
{
    NSObject<OS_dispatch_queue> *__generationQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_generationQueue; // @synthesize _generationQueue=__generationQueue;
- (struct CGImage *)newBGRAImageOfFormat:(long long)arg1 inOrientation:(long long)arg2 usingPixelBuffer:(struct __CVBuffer *)arg3;
- (struct CGImage *)newBGRAImageInOrientation:(long long)arg1 usingPixelBuffer:(struct __CVBuffer *)arg2;
- (id)newJPEGDataInOrientation:(long long)arg1 usingPixelBuffer:(struct __CVBuffer *)arg2;
- (struct CGImage *)newBGRAImageInOrientation:(long long)arg1 usingSurface:(void *)arg2;
- (struct CGImage *)newBGRAImageOfFormat:(long long)arg1 inOrientation:(long long)arg2 usingSurface:(void *)arg3;
- (id)_neededColorspacePropertiesFromMetadata:(id)arg1;
- (id)newJPEGDataInOrientation:(long long)arg1 usingSurface:(void *)arg2 withMetadata:(id)arg3;
- (id)newJPEGDataOfFormat:(long long)arg1 inOrientation:(long long)arg2 usingSurface:(void *)arg3 withMetadata:(id)arg4;
- (struct __CVBuffer *)_newRotatedPixelBuffer:(struct __CVBuffer *)arg1 withOrientation:(long long)arg2;
- (struct __CVBuffer *)_newThumbnailOfFormat:(long long)arg1 inOrientation:(long long)arg2 withPixelFormat:(unsigned int)arg3 usingPixelBuffer:(struct __CVBuffer *)arg4;
- (struct __CVBuffer *)_newThumbnailOfSize:(struct CGSize)arg1 inOrientation:(long long)arg2 withPixelFormat:(unsigned int)arg3 usingPixelBuffer:(struct __CVBuffer *)arg4;
- (void)dealloc;
- (id)init;

@end
