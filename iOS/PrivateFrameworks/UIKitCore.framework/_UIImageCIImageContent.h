//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage;

__attribute__((visibility("hidden")))
@interface _UIImageCIImageContent
{
    CIImage *_ciImage;
}

- (void).cxx_destruct;
- (void)_drawWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 effect:(id)arg4;
- (void)_prepareForDrawingWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (struct CGSize)sizeInPixels;
- (_Bool)canScaleImageToTargetResolution;
- (_Bool)isCIImage;
- (id)CIImage;
- (id)typeName;
- (id)initWithScale:(double)arg1;
- (id)initWithCIImage:(id)arg1 scale:(double)arg2;

@end

