//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLResourceSPI-Protocol.h>
#import <MetalTools/MTLTexture-Protocol.h>

@protocol MTLTexture;

@protocol MTLTextureSPI <MTLTexture, MTLResourceSPI>
@property(readonly) _Bool isDrawable;
@property(readonly) unsigned long long numFaces;
@property(readonly) unsigned int swizzleKey;
@property(readonly) long long compressionFeedback;
@property(readonly) _Bool isCompressed;
@property(readonly) unsigned long long rotation;
@property(readonly) unsigned long long iosurfacePlane;
@property(readonly) struct __IOSurface *iosurface;

@optional
@property(readonly) unsigned long long sparseSurfaceDefaultValue;
@property(nonatomic) unsigned long long resourceIndex;
@property(readonly) unsigned long long uniqueIdentifier;
- (void)generateMipmapLevel:(unsigned long long)arg1 slice:(unsigned long long)arg2;
- (_Bool)canGenerateMipmapLevels;
- (id <MTLTexture>)newCompressedTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 level:(unsigned long long)arg3 slice:(unsigned long long)arg4;
- (void)replaceRegion:(CDStruct_1e3be3a8)arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void *)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6 options:(unsigned long long)arg7;
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(CDStruct_1e3be3a8)arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6 options:(unsigned long long)arg7;
@end
