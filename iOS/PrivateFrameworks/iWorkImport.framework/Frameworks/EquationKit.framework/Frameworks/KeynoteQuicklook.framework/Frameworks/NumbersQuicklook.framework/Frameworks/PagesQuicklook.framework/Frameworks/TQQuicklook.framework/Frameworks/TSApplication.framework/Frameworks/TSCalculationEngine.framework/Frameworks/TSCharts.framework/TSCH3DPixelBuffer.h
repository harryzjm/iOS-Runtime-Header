//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSCH3DPixelBuffer : NSObject
{
    tvec2_3b141483 _size;
    unsigned long long _components;
    struct CGContext *_bitmapContext;
}

+ (id)pixelBufferWithSize:(void *)arg1 components:(unsigned long long)arg2;
+ (id)pixelBufferFromFramebuffer:(id)arg1 processor:(id)arg2 session:(id)arg3 sourceRegion:(void *)arg4 components:(unsigned long long)arg5 flipped:(_Bool)arg6;
- (id).cxx_construct;
@property(readonly, nonatomic) struct CGContext *context; // @synthesize context=_bitmapContext;
@property(readonly, nonatomic) unsigned long long components; // @synthesize components=_components;
@property(readonly, nonatomic) tvec2_3b141483 size; // @synthesize size=_size;
- (void)flip;
- (void)copyPixelsFromSourceBuffer:(id)arg1 sourceRegion:(void *)arg2 targetRegion:(void *)arg3 flipped:(_Bool)arg4;
- (void)copyPixelsFromData:(const void *)arg1;
@property(readonly, nonatomic) char *buffer;
- (void *)data;
- (id)TSUImage;
@property(readonly, nonatomic) box_ce64ce81 bounds;
- (void)dealloc;
- (id)initWithSize:(void *)arg1 components:(unsigned long long)arg2;
- (_Bool)copyPixelsFromFramebuffer:(id)arg1 processor:(id)arg2 session:(id)arg3 sourceRegion:(void *)arg4 targetRegion:(void *)arg5 flipped:(_Bool)arg6;

@end

