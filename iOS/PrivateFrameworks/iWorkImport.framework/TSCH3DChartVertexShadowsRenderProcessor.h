//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSCH3DChartVertexShadowsRenderProcessor
{
    NSArray *mShadowsEffects;
}

- (void)submit:(const struct PrimitiveInfo *)arg1;
- (long long)texture:(id)arg1 attributes:(const struct TextureAttributes *)arg2;
- (long long)attribute:(id)arg1 resource:(id)arg2 specs:(const struct AttributeSpecs *)arg3;
- (void)dealloc;
- (id)init;
- (id)p_effects;

@end
