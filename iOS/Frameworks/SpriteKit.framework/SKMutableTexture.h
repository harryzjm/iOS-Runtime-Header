//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SKMutableTexture
{
    void *_ioSurface;
    _Bool _ioSurfaceBacked;
    struct CGSize _textureSize;
    void *_pixelData;
    unsigned long long _pixelDataLength;
    int _pixelFormat;
}

+ (id)mutableTextureWithSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)description;
- (shared_ptr_bb77cfd9)_backingTexture;
- (void)modifyPixelDataWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithSize:(struct CGSize)arg1 pixelFormat:(int)arg2;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithSize:(struct CGSize)arg1 ioSurfaceBacked:(_Bool)arg2 pixelFormat:(int)arg3;

@end

