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

- (id)contentWithCGImage:(struct CGImage *)arg1;
- (void)_drawWithoutEffectInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)_prepareforDrawingInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (id)renditionApplyingEffect:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (struct CGSize)sizeInPixels;
- (struct CGImage *)CGImage;
- (_Bool)hasCGImage;
- (_Bool)isCGImage;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2;

@end
