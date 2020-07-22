//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NUColorSpace, NUImageLayout, NUPixelFormat;
@protocol NUMutablePurgeableImage, OS_dispatch_queue;

@interface NUImageAccumulationNode
{
    id <NUMutablePurgeableImage> _image;
    NSObject<OS_dispatch_queue> *_queue;
    NUPixelFormat *_pixelFormat;
    NUColorSpace *_colorSpace;
    NUImageLayout *_layout;
    CDStruct_d58201db _imageSize;
}

@property(readonly, nonatomic) NUImageLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(readonly, nonatomic) NUPixelFormat *pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(readonly, nonatomic) CDStruct_912cb5d2 imageSize; // @synthesize imageSize=_imageSize;
- (void).cxx_destruct;
- (id)_newImage;
- (id)_image;
@property(readonly, nonatomic) id <NUMutablePurgeableImage> image;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 pixelFormat:(id)arg2 colorSpace:(id)arg3 input:(id)arg4;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;

@end

