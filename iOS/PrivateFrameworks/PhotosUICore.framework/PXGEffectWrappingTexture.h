//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGMetalSpriteTexture-Protocol.h>

@class MISSING_TYPE, NSIndexSet, NSString, PXGColorProgram, PXGImageTexture;
@protocol MTLTexture, PXGMetalSpriteTexture;

@interface PXGEffectWrappingTexture <PXGMetalSpriteTexture>
{
    id <PXGMetalSpriteTexture> _parent;
    PXGImageTexture *_imageTextureParent;
}

+ (id)createTexture;
+ (void)_reuseTexture:(id)arg1;
+ (id)_dequeueTexture;
+ (id)_reusableTextures;
- (void).cxx_destruct;
@property(readonly, nonatomic) PXGImageTexture *imageTextureParent; // @synthesize imageTextureParent=_imageTextureParent;
@property(retain, nonatomic) id <PXGMetalSpriteTexture> parent; // @synthesize parent=_parent;
- (MISSING_TYPE *)orientationTransform;
- (struct __CVBuffer *)sourceCVPixelBuffer;
- (struct CGImage *)sourceCGImage;
@property(readonly, nonatomic) struct CGImage *imageRepresentation;
@property(readonly, nonatomic) int presentationType;
@property(readonly, nonatomic) long long estimatedByteSize;
@property(readonly, nonatomic) struct CGSize pixelSize;
@property(readonly, nonatomic) int shaderFlags;
@property(readonly, nonatomic) _Bool isCaptureTexture;
@property(readonly, nonatomic) _Bool isOpaque;
@property(readonly, nonatomic) _Bool isAtlas;
@property(nonatomic) long long renderPipelineIndex;
- (void)cleanupAfterRender:(long long)arg1;
- (void)prepareForRender:(long long)arg1;
@property(readonly, nonatomic) PXGColorProgram *colorProgram;
- (void)getTextureInfos:(CDStruct_183601bc *)arg1 forSpriteIndexes:(unsigned int *)arg2 geometries:(const CDStruct_3ab912e1 *)arg3 spriteStyles:(const CDStruct_506f5052 *)arg4 spriteInfos:(const CDStruct_9d1ebe49 *)arg5 screenScale:(double)arg6 count:(unsigned int)arg7;
@property(readonly, nonatomic) id <MTLTexture> texture;
@property(readonly, nonatomic) id <MTLTexture> chromaTexture;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned int spriteCount;
@property(readonly, nonatomic) NSIndexSet *spriteIndexes;
@property(readonly) Class superclass;

@end
