//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BLPixelImageBuffer, UIImage;

@interface BLRetouchImageLayer
{
    BLPixelImageBuffer *_imageBuffer;
    UIImage *_image;
    double _imageScaleFactor;
}

@property(nonatomic) double imageScaleFactor; // @synthesize imageScaleFactor=_imageScaleFactor;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) BLPixelImageBuffer *imageBuffer; // @synthesize imageBuffer=_imageBuffer;
- (void).cxx_destruct;
- (struct CGContext *)newContextForRect:(struct CGRect)arg1 inDestRect:(struct CGRect)arg2 andScale:(double)arg3;
- (struct CGSize)imageSize;

@end
