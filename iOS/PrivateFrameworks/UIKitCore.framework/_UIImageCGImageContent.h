//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIImageCGImageContent
{
    _Atomic struct CGImage *_imageRef;
}

- (_Bool)optimizeContentForImageSize:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)contentOptimizedForImageSize:(struct CGSize)arg1;
- (_Bool)prepareContentForDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)contentPreparedForDisplay;
- (id)contentWithCGImage:(struct CGImage *)arg1;
- (void)_drawWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 effect:(id)arg4;
- (struct CGImage *)_provideCGImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)renditionApplyingEffect:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (struct CGSize)sizeInPixels;
- (struct CGImage *)CGImage;
- (_Bool)hasExtendedDynamicRange;
- (_Bool)hasCGImage;
- (_Bool)isCGImage;
- (id)typeName;
- (void)dealloc;
- (id)initWithCGImageSource:(struct CGImageSource *)arg1 scale:(double)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2;

@end

