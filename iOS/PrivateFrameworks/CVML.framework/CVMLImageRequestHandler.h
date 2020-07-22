//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CVMLImageBuffer, NSDictionary;

@interface CVMLImageRequestHandler
{
    CVMLImageBuffer *_imageBuffer;
    NSDictionary *_properties;
}

+ (id)handlerForData:(id)arg1 options:(id)arg2;
+ (id)handlerForURL:(id)arg1 options:(id)arg2;
+ (id)handlerForCIImage:(id)arg1 options:(id)arg2;
+ (id)handlerForCGImage:(struct CGImage *)arg1 options:(id)arg2;
+ (id)handlerForBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;
@property(readonly) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly) CVMLImageBuffer *imageBuffer; // @synthesize imageBuffer=_imageBuffer;
- (void).cxx_destruct;
- (_Bool)useFullImageBufferForFaces:(id)arg1;
- (void)releaseOriginalBuffer;
- (void)dealloc;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)initWithCIImage:(id)arg1 options:(id)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1 options:(id)arg2;
- (id)initWithBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;

@end

