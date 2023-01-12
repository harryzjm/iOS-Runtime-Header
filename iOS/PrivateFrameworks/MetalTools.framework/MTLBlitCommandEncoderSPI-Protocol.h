//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLBlitCommandEncoder-Protocol.h>
#import <MetalTools/MTLCommandEncoderSPI-Protocol.h>

@protocol MTLBuffer, MTLTexture;

@protocol MTLBlitCommandEncoderSPI <MTLCommandEncoderSPI, MTLBlitCommandEncoder>
- (void)fillTexture:(id <MTLTexture>)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 color:(CDStruct_d2b197d1)arg5 pixelFormat:(unsigned long long)arg6;
- (void)fillTexture:(id <MTLTexture>)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 color:(CDStruct_d2b197d1)arg5;
- (void)fillTexture:(id <MTLTexture>)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 bytes:(const void *)arg5 length:(unsigned long long)arg6;
- (void)fillBuffer:(id <MTLBuffer>)arg1 range:(struct _NSRange)arg2 pattern4:(unsigned int)arg3;
- (void)invalidateCompressedTexture:(id <MTLTexture>)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
- (void)invalidateCompressedTexture:(id <MTLTexture>)arg1;
- (void)copyFromTexture:(id <MTLTexture>)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id <MTLTexture>)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9 options:(unsigned long long)arg10;
@end

