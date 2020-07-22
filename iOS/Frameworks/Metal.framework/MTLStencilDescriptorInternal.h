//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MTLStencilDescriptorInternal
{
    struct MTLStencilDescriptorPrivate _private;
}

- (void)setWriteMask:(unsigned int)arg1;
- (unsigned int)writeMask;
- (void)setReadMask:(unsigned int)arg1;
- (unsigned int)readMask;
- (void)setDepthStencilPassOperation:(unsigned long long)arg1;
- (unsigned long long)depthStencilPassOperation;
- (void)setDepthFailureOperation:(unsigned long long)arg1;
- (unsigned long long)depthFailureOperation;
- (void)setStencilFailureOperation:(unsigned long long)arg1;
- (unsigned long long)stencilFailureOperation;
- (void)setStencilCompareFunction:(unsigned long long)arg1;
- (unsigned long long)stencilCompareFunction;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
@property(readonly) const struct MTLStencilDescriptorPrivate *stencilPrivate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

