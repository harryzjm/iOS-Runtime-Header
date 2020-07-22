//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, TSCH3DShaderEffectsStates, TSCH3DShaderHandle;

__attribute__((visibility("hidden")))
@interface TSCH3DShaderProgramHandle
{
    TSCH3DShaderHandle *mVertexShader;
    TSCH3DShaderHandle *mFragmentShader;
    TSCH3DShaderEffectsStates *mCurrentEffectsStates;
    NSMutableDictionary *mUniformLocations;
    NSMutableDictionary *mAttributeLocations;
}

@property(readonly, nonatomic) NSMutableDictionary *attributeLocations; // @synthesize attributeLocations=mAttributeLocations;
@property(readonly, nonatomic) NSMutableDictionary *uniformLocations; // @synthesize uniformLocations=mUniformLocations;
@property(readonly, nonatomic) TSCH3DShaderEffectsStates *currentEffectsStates; // @synthesize currentEffectsStates=mCurrentEffectsStates;
@property(readonly, nonatomic) TSCH3DShaderHandle *fragmentShader; // @synthesize fragmentShader=mFragmentShader;
@property(readonly, nonatomic) TSCH3DShaderHandle *vertexShader; // @synthesize vertexShader=mVertexShader;
- (void)destroyResourcesInContext:(id)arg1;
- (void)dealloc;
- (id)initWithGLHandle:(unsigned int)arg1;

@end
