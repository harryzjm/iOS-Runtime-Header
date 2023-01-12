//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GPUToolsCapture/MTLCommandEncoderSPI-Protocol.h>
#import <GPUToolsCapture/MTLResourceStateCommandEncoder-Protocol.h>

@protocol MTLBuffer, MTLTexture;

@protocol MTLResourceStateCommandEncoderSPI <MTLCommandEncoderSPI, MTLResourceStateCommandEncoder>

@optional
- (void)copyMappingStateFromTexture:(id <MTLTexture>)arg1 mipLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 toBuffer:(id <MTLBuffer>)arg4 offset:(unsigned long long)arg5 numTiles:(unsigned long long)arg6;
@end

