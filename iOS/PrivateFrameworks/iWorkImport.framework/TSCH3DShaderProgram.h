//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSMutableString, NSString, TSCH3DGLVersion;

__attribute__((visibility("hidden")))
@interface TSCH3DShaderProgram : NSObject
{
    NSMutableDictionary *mLinks;
    NSMutableArray *mDeclarationSection;
    NSMutableArray *mTemporarySection;
    NSMutableArray *mStatementSection;
    NSMutableArray *mResolutionSection;
    NSMutableArray *mOutcomeSection;
    NSMutableArray *mConclusionSection;
    NSMutableArray *mSections[6];
    NSMutableArray *mFunctions;
    NSMutableSet *mFunctionNames;
    NSMutableString *mAccumulator;
    _Bool mIsLinked;
    NSString *mVertex;
    NSString *mFragment;
    TSCH3DGLVersion *mVersion;
}

@property(readonly, nonatomic) TSCH3DGLVersion *version; // @synthesize version=mVersion;
- (id)usedAttributeNameForVariable:(id)arg1;
- (id)usedUniformNameForVariable:(id)arg1;
- (id)usedNameForVariable:(id)arg1 type:(struct TSCH3DShaderType)arg2 scope:(struct TSCH3DShaderVariableScopeType)arg3;
@property(readonly, nonatomic) NSString *fragment;
@property(readonly, nonatomic) NSString *vertex;
- (id)p_generateType:(struct TSCH3DShaderType)arg1;
- (void)p_generatePreprocessorDefinitionsForType:(struct TSCH3DShaderType)arg1;
- (void)p_addCompatibilityFunctions;
- (void)p_generateSection:(id)arg1 type:(struct TSCH3DShaderType)arg2;
- (void)p_generateGlobalsForType:(struct TSCH3DShaderType)arg1;
- (void)p_generateType:(struct TSCH3DShaderType)arg1 globalType:(struct TSCH3DShaderVariableScopeType)arg2 storageQualifier:(id)arg3;
- (void)link;
- (unsigned long long)processSection:(id)arg1 accumulate:(id)arg2 conclusions:(id)arg3;
- (void)accumulateSection:(id)arg1 intoArray:(id)arg2;
- (_Bool)hasFunction:(id)arg1;
- (void)addFunctionString:(id)arg1 name:(id)arg2;
- (void)addFragmentConclusionWithFormat:(id)arg1;
- (void)addVertexConclusionWithFormat:(id)arg1;
- (void)addConclusionWithSpace:(id)arg1 statement:(id)arg2;
- (void)addConclusion:(id)arg1;
- (void)addConclusion:(id)arg1 type:(struct TSCH3DShaderType)arg2;
- (void)addFragmentConclusion:(id)arg1;
- (void)addVertexConclusion:(id)arg1;
- (void)addFragmentConclusion:(id)arg1 space:(id)arg2 statement:(id)arg3;
- (void)addConclusion:(id)arg1 type:(struct TSCH3DShaderType)arg2 statement:(id)arg3;
- (void)addFragmentConclusion:(id)arg1 statement:(id)arg2;
- (void)addVertexConclusion:(id)arg1 space:(id)arg2 statement:(id)arg3;
- (void)addVertexConclusion:(id)arg1 statement:(id)arg2;
- (void)addConclusion:(id)arg1 space:(id)arg2 statement:(id)arg3;
- (void)addConclusion:(id)arg1 statement:(id)arg2;
- (void)addConclusion:(id)arg1 space:(id)arg2 type:(struct TSCH3DShaderType)arg3 format:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
- (void)addFragmentOutcomeWithFormat:(id)arg1;
- (void)addVertexOutcomeWithFormat:(id)arg1;
- (void)addOutcomeWithSpace:(id)arg1 statement:(id)arg2;
- (void)addOutcome:(id)arg1;
- (void)addOutcome:(id)arg1 type:(struct TSCH3DShaderType)arg2;
- (void)addFragmentOutcome:(id)arg1;
- (void)addVertexOutcome:(id)arg1;
- (void)addFragmentOutcome:(id)arg1 space:(id)arg2 statement:(id)arg3;
- (void)addOutcome:(id)arg1 type:(struct TSCH3DShaderType)arg2 statement:(id)arg3;
- (void)addFragmentOutcome:(id)arg1 statement:(id)arg2;
- (void)addVertexOutcome:(id)arg1 space:(id)arg2 statement:(id)arg3;
- (void)addVertexOutcome:(id)arg1 statement:(id)arg2;
- (void)addOutcome:(id)arg1 space:(id)arg2 statement:(id)arg3;
- (void)addOutcome:(id)arg1 statement:(id)arg2;
- (void)addOutcome:(id)arg1 space:(id)arg2 type:(struct TSCH3DShaderType)arg3 format:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
- (void)addFragmentResolutionWithFormat:(id)arg1;
- (void)addVertexResolutionWithFormat:(id)arg1;
- (void)addResolutionWithSpace:(id)arg1 statement:(id)arg2;
- (void)addResolution:(id)arg1;
- (void)addResolution:(id)arg1 type:(struct TSCH3DShaderType)arg2;
- (void)addFragmentResolution:(id)arg1;
- (void)addVertexResolution:(id)arg1;
- (void)addFragmentResolution:(id)arg1 space:(id)arg2 statement:(id)arg3;
- (void)addResolution:(id)arg1 type:(struct TSCH3DShaderType)arg2 statement:(id)arg3;
- (void)addFragmentResolution:(id)arg1 statement:(id)arg2;
- (void)addVertexResolution:(id)arg1 space:(id)arg2 statement:(id)arg3;
- (void)addVertexResolution:(id)arg1 statement:(id)arg2;
- (void)addResolution:(id)arg1 space:(id)arg2 statement:(id)arg3;
- (void)addResolution:(id)arg1 statement:(id)arg2;
- (void)addResolution:(id)arg1 space:(id)arg2 type:(struct TSCH3DShaderType)arg3 format:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
- (void)addFragmentStatementWithFormat:(id)arg1;
- (void)addVertexStatementWithFormat:(id)arg1;
- (void)addStatementWithSpace:(id)arg1 statement:(id)arg2;
- (void)addStatement:(id)arg1;
- (void)addStatement:(id)arg1 type:(struct TSCH3DShaderType)arg2;
- (void)addFragmentStatement:(id)arg1;
- (void)addVertexStatement:(id)arg1;
- (void)addFragmentStatement:(id)arg1 space:(id)arg2 statement:(id)arg3;
- (void)addStatement:(id)arg1 type:(struct TSCH3DShaderType)arg2 statement:(id)arg3;
- (void)addFragmentStatement:(id)arg1 statement:(id)arg2;
- (void)addVertexStatement:(id)arg1 space:(id)arg2 statement:(id)arg3;
- (void)addVertexStatement:(id)arg1 statement:(id)arg2;
- (void)addStatement:(id)arg1 space:(id)arg2 statement:(id)arg3;
- (void)addStatement:(id)arg1 statement:(id)arg2;
- (void)addStatement:(id)arg1 space:(id)arg2 type:(struct TSCH3DShaderType)arg3 format:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
- (void)addFragmentTemporaryWithFormat:(id)arg1;
- (void)addVertexTemporaryWithFormat:(id)arg1;
- (void)addTemporaryWithSpace:(id)arg1 statement:(id)arg2;
- (void)addTemporary:(id)arg1;
- (void)addTemporary:(id)arg1 type:(struct TSCH3DShaderType)arg2;
- (void)addFragmentTemporary:(id)arg1;
- (void)addVertexTemporary:(id)arg1;
- (void)addFragmentTemporary:(id)arg1 space:(id)arg2 statement:(id)arg3;
- (void)addTemporary:(id)arg1 type:(struct TSCH3DShaderType)arg2 statement:(id)arg3;
- (void)addFragmentTemporary:(id)arg1 statement:(id)arg2;
- (void)addVertexTemporary:(id)arg1 space:(id)arg2 statement:(id)arg3;
- (void)addVertexTemporary:(id)arg1 statement:(id)arg2;
- (void)addTemporary:(id)arg1 space:(id)arg2 statement:(id)arg3;
- (void)addTemporary:(id)arg1 statement:(id)arg2;
- (void)addTemporary:(id)arg1 space:(id)arg2 type:(struct TSCH3DShaderType)arg3 format:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
- (void)addFragmentDeclarationWithFormat:(id)arg1;
- (void)addVertexDeclarationWithFormat:(id)arg1;
- (void)addDeclarationWithSpace:(id)arg1 statement:(id)arg2;
- (void)addDeclaration:(id)arg1;
- (void)addDeclaration:(id)arg1 type:(struct TSCH3DShaderType)arg2;
- (void)addFragmentDeclaration:(id)arg1;
- (void)addVertexDeclaration:(id)arg1;
- (void)addFragmentDeclaration:(id)arg1 space:(id)arg2 statement:(id)arg3;
- (void)addDeclaration:(id)arg1 type:(struct TSCH3DShaderType)arg2 statement:(id)arg3;
- (void)addFragmentDeclaration:(id)arg1 statement:(id)arg2;
- (void)addVertexDeclaration:(id)arg1 space:(id)arg2 statement:(id)arg3;
- (void)addVertexDeclaration:(id)arg1 statement:(id)arg2;
- (void)addDeclaration:(id)arg1 space:(id)arg2 statement:(id)arg3;
- (void)addDeclaration:(id)arg1 statement:(id)arg2;
- (void)addDeclaration:(id)arg1 space:(id)arg2 type:(struct TSCH3DShaderType)arg3 format:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
- (void)assignVariable:(id)arg1 statement:(id)arg2 substitutes:(id)arg3 type:(struct TSCH3DShaderType)arg4 toSection:(int)arg5;
- (void)addToSection:(id)arg1 statement:(id)arg2 type:(struct TSCH3DShaderType)arg3;
- (void)addToSection:(id)arg1 variable:(id)arg2 space:(id)arg3 type:(struct TSCH3DShaderType)arg4 format:(id)arg5 arguments:(struct __va_list_tag [1])arg6;
- (void)p_addToSection:(id)arg1 variable:(id)arg2 space:(id)arg3 type:(struct TSCH3DShaderType)arg4 format:(id)arg5 substitutes:(id)arg6;
- (void)addAttributeVariable:(id)arg1;
- (void)addUniformVariable:(id)arg1;
- (struct TSCH3DShaderType)uniformLinkageFor:(id)arg1;
- (_Bool)isSamplerVariable:(id)arg1;
- (id)linkageOfVariable:(id)arg1;
- (pair_64bf96b1)resultLinkageOfVariable:(id)arg1;
- (id)existingLinkageOfVariable:(id)arg1;
- (void)dealloc;
- (id)initWithVersion:(id)arg1;
- (id)init;

@end
