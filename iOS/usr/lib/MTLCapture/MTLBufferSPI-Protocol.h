//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GPUToolsCapture/MTLBuffer-Protocol.h>
#import <GPUToolsCapture/MTLResourceSPI-Protocol.h>

@class MTLTextureDescriptor;
@protocol MTLTexture;

@protocol MTLBufferSPI <MTLResourceSPI, MTLBuffer>
@property(readonly) struct __IOSurface *iosurface;
- (struct __IOSurface *)_aneIOSurface;
- (id <MTLTexture>)newLinearTextureWithDescriptor:(MTLTextureDescriptor *)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4;
- (void)didModifyRange:(struct _NSRange)arg1;

@optional
@property(nonatomic) unsigned long long parentGPUSize;
@property(nonatomic) unsigned long long parentGPUAddress;
@property(readonly, nonatomic) unsigned long long resourceIndex;
@end

