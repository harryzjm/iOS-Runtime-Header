//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MTLTileRenderPipelineColorAttachmentDescriptorInternal
{
    struct MTLTileRenderPipelineAttachmentDescriptorPrivate _private;
}

- (const struct MTLTileRenderPipelineAttachmentDescriptorPrivate *)_descriptorPrivate;
- (void)setPixelFormat:(unsigned long long)arg1;
- (unsigned long long)pixelFormat;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end
