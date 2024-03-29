//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSCH3DMaterialShaderVariables, TSCH3DTexturePool, TSCH3DTexturesMaterial;

@interface TSCH3DMaterialShaderEffect
{
    TSCH3DTexturePool *_pool;
    TSCH3DTexturesMaterial *_material;
    TSCH3DMaterialShaderVariables *_variables;
}

+ (id)effectWithPool:(id)arg1 material:(id)arg2 variables:(id)arg3;
+ (id)stateSharingID;
- (void).cxx_destruct;
- (void)affectStates:(id)arg1;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;
- (void)updateState:(id)arg1 effectsStates:(id)arg2;
- (void)addVariables:(id)arg1;
- (id)stateSharingID;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPool:(id)arg1 material:(id)arg2 variables:(id)arg3;

@end

