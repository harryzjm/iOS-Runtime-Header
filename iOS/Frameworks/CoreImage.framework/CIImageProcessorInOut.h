//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLTexture;

__attribute__((visibility("hidden")))
@interface CIImageProcessorInOut : NSObject
{
    struct CGRect _region;
    struct __IOSurface *_surface;
    _Bool _usesSRGB;
    struct Context *_context;
    id <MTLTexture> _mtlTexture;
    _Bool _surfaceLocked;
}

@property(readonly, nonatomic) struct CGRect region; // @synthesize region=_region;
- (id)description;
@property(readonly, nonatomic) int format;
@property(readonly, nonatomic) unsigned long long bytesPerRow;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer;
@property(readonly, nonatomic) void *device;
@property(readonly, nonatomic) _Bool usesSRGBTransferFunction;
@property(readonly, nonatomic) struct __IOSurface *surface;
- (void)dealloc;
- (id)initWithSurface:(struct __IOSurface *)arg1 texture:(struct Texture)arg2 allowSRGB:(_Bool)arg3 bounds:(struct CGRect)arg4 context:(struct Context *)arg5;

@end

