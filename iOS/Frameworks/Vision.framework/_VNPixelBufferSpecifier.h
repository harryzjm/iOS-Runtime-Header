//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _VNPixelBufferSpecifier
{
    struct __CVBuffer *_pixelBuffer;
}

- (id)newImageBufferWithOptions:(id)arg1 error:(id *)arg2;
- (id)description;
- (struct __CVBuffer *)pixelBuffer;
- (void)dealloc;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1;
- (id)observationsCacheKey;

@end

