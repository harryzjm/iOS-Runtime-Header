//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, TSCH3DTexturePool;

@interface TSCH3DSphericalEnvironmentShaderEffect
{
    NSArray *_materials;
    TSCH3DTexturePool *_pool;
}

+ (id)effectWithMaterials:(id)arg1 pool:(id)arg2;
+ (Class)stateClass;
- (void).cxx_destruct;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;
- (void)updateState:(id)arg1 effectsStates:(id)arg2;
- (void)injectCommonShaderInto:(id)arg1 context:(id)arg2;
- (void)addVariables:(id)arg1;
- (id)textureVariablesArray;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)count;
- (id)initWithMaterials:(id)arg1 pool:(id)arg2;

@end

