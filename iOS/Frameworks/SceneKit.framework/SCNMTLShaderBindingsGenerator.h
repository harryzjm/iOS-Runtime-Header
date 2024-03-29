//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SCNMTLShaderBindingsGenerator : NSObject
{
    struct os_unfair_lock_s _generateLock;
    struct {
        int stage;
        NSArray *arguments;
        NSDictionary *customBlocks;
        struct __C3DFXPass *pass;
    } _current;
    NSMutableDictionary *_nodeBindings;
    NSMutableDictionary *_frameBindings;
    NSMutableDictionary *_shadableBindings;
    NSMutableDictionary *_passBindings;
    NSMutableDictionary *_lightBindings;
    CDStruct_21854d8c _sceneBuffer;
}

+ (void)registerShadableArgumentBindingBlockForBuffers:(CDUnknownBlockType)arg1 textures:(CDUnknownBlockType)arg2 samplers:(CDUnknownBlockType)arg3;
+ (void)registerUserBlockTrampoline:(CDUnknownBlockType)arg1;
+ (void)registerArgument:(id)arg1 frequency:(int)arg2 needsRenderResource:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
+ (void)registerArgument:(id)arg1 frequency:(int)arg2 block:(CDUnknownBlockType)arg3;
+ (void)registerSemantic:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)deallocateRegistry;
+ (void)allocateRegistry;
- (_Bool)addPassResourceBindingsForArgument:(id)arg1;
- (void)addResourceBindingsForArgument:(id)arg1 frequency:(int)arg2 needsRenderResource:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
- (void)_checkForAssociatedSamplerOnBinding:(id)arg1 argument:(id)arg2;
- (id)_dictionaryForFrequency:(int)arg1;
- (void)generateBindingsForPipeline:(id)arg1 withReflection:(id)arg2 program:(struct __C3DFXMetalProgram *)arg3 material:(struct __C3DMaterial *)arg4 geometry:(struct __C3DGeometry *)arg5 pass:(struct __C3DFXPass *)arg6;
- (void)_parseArguments:(id)arg1 function:(id)arg2 renderPipeline:(id)arg3;
- (long long)_searchArguments:(id)arg1 forArgumentNamed:(id)arg2 type:(unsigned long long)arg3;
- (void)dealloc;
- (id)init;

@end

