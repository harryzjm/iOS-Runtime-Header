//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock;
@protocol MTLBlitCommandEncoder, MTLCommandBuffer, MTLDevice, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MTKTextureUploader : NSObject
{
    id <MTLDevice> _device;
    id <MTLCommandBuffer> _commandBuffer;
    id <MTLBlitCommandEncoder> _blit;
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *_notifyQueue;
}

- (void)finishWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)newTextureWithData:(id)arg1 options:(id)arg2;
- (void)copyTexture:(id)arg1 toTexture:(id)arg2;
- (void)copyBytes:(const void *)arg1 toTexture:(id)arg2 bitsPerPixel:(unsigned long long)arg3 pixelComponents:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6 region:(CDStruct_4c83c94d)arg7 slice:(unsigned long long)arg8 level:(unsigned long long)arg9 flipVertically:(_Bool)arg10;
- (void)generateMipmapsForTexture:(id)arg1;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 commandQueue:(id)arg2 notifyQueue:(id)arg3;

@end

