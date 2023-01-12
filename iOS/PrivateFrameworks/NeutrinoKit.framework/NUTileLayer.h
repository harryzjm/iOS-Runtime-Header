//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@protocol NUPurgeableSurfaceImage;

@interface NUTileLayer : CALayer
{
    id <NUPurgeableSurfaceImage> _image;
    CDStruct_996ac03c _imageRect;
}

- (void).cxx_destruct;
@property(readonly) id <NUPurgeableSurfaceImage> image; // @synthesize image=_image;
@property(readonly) CDStruct_996ac03c imageRect; // @synthesize imageRect=_imageRect;
- (void)dealloc;
- (id)initWithImage:(id)arg1 tile:(id)arg2;

@end
