//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLRenderPassStencilAttachmentDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLRenderPassStencilAttachmentDescriptorInternal : MTLRenderPassStencilAttachmentDescriptor
{
    struct MTLRenderPassAttachmentDescriptorPrivate _private;
}

+ (id)attachmentDescriptor;
- (const struct MTLRenderPassAttachmentDescriptorPrivate *)_descriptorPrivate;
- (void)setStoreActionOptions:(unsigned long long)arg1;
- (unsigned long long)storeActionOptions;
- (void)setStoreAction:(unsigned long long)arg1;
- (unsigned long long)storeAction;
- (void)setLoadAction:(unsigned long long)arg1;
- (unsigned long long)loadAction;
- (_Bool)yInvert;
- (void)setYInvert:(_Bool)arg1;
- (unsigned long long)resolveDepthPlane;
- (void)setResolveDepthPlane:(unsigned long long)arg1;
- (unsigned long long)resolveSlice;
- (void)setResolveSlice:(unsigned long long)arg1;
- (unsigned long long)resolveLevel;
- (void)setResolveLevel:(unsigned long long)arg1;
- (void)setStencilResolveFilter:(unsigned long long)arg1;
- (unsigned long long)stencilResolveFilter;
- (unsigned int)clearStencil;
- (void)setClearStencil:(unsigned int)arg1;
- (unsigned long long)depthPlane;
- (void)setDepthPlane:(unsigned long long)arg1;
- (unsigned long long)slice;
- (void)setSlice:(unsigned long long)arg1;
- (unsigned long long)level;
- (void)setLevel:(unsigned long long)arg1;
- (id)resolveTexture;
- (void)setResolveTexture:(id)arg1;
- (id)texture;
- (void)setTexture:(id)arg1;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

