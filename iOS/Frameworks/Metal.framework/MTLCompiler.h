//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString, _MTLDevice;
@protocol OS_dispatch_queue;

@interface MTLCompiler : NSObject
{
    _MTLDevice *_device;
    NSString *_pluginPath;
    NSObject<OS_dispatch_queue> *_compilerQueue;
    struct MTLCompilerConnectionManager *_compilerConnectionManager;
    unsigned int _compilerId;
    unsigned long long _compilerFlags;
    struct MTLCompilerCache *_shaderCache;
}

@property(readonly) unsigned long long compilerFlags; // @synthesize compilerFlags=_compilerFlags;
@property(readonly) unsigned int compilerId; // @synthesize compilerId=_compilerId;
@property(readonly) struct MTLCompilerConnectionManager *compilerConnectionManager; // @synthesize compilerConnectionManager=_compilerConnectionManager;
@property(readonly) NSObject<OS_dispatch_queue> *compilerQueue; // @synthesize compilerQueue=_compilerQueue;
@property(readonly, copy) NSString *pluginPath; // @synthesize pluginPath=_pluginPath;
- (void)reflectionWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)compileFunction:(id)arg1 stateData:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)compileFragmentFunction:(id)arg1 serializedPixelFormat:(id)arg2 stateData:(id)arg3 options:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)compileVertexFunction:(id)arg1 serializedPipelineDescriptorData:(id)arg2 stateData:(id)arg3 options:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)compileFunction:(id)arg1 serializedData:(id)arg2 stateData:(id)arg3 options:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)compileFunction:(id)arg1 frameworkData:(id)arg2 driverKeyData:(id)arg3 options:(unsigned long long)arg4 pipelineCache:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)compileFunction:(id)arg1 serializedPipelineData:(id)arg2 stateData:(id)arg3 linkDataSize:(unsigned long long)arg4 frameworkLinking:(_Bool)arg5 options:(unsigned int)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)compileFunction:(id)arg1 frameworkData:(id)arg2 driverKeyData:(id)arg3 frameworkLinking:(_Bool)arg4 linkDataSize:(unsigned long long)arg5 pipelineCache:(id)arg6 options:(unsigned int)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)compileRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)compileRequest:(id)arg1 pipelineCache:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (CDStruct_c0454aff)pipelineCacheStats;
- (CDStruct_c0454aff)libraryCacheStats;
- (void *)getShaderCacheKeys;
- (void)unloadShaderCaches;
- (id)initWithTargetData:(id)arg1 cacheUUID:(CDStruct_41a22ec7 *)arg2 pluginPath:(id)arg3 device:(id)arg4 compilerFlags:(unsigned long long)arg5;

@end

