//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PNGRenderer
{
    struct __CFURL *fullURL;
    struct CGColor *background;
    struct CGColorSpace *colorSpace;
}

- (struct CGImage *)cgimage;
- (void)flushRender;
- (_Bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (void)setFileURL:(id)arg1;
- (void)dealloc;
- (id)init;

@end
