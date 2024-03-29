//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMapTable, SCNMTLLibrary;
@protocol MTLDevice, MTLLibrary, OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SCNMTLLibraryManager : NSObject
{
    id <MTLDevice> _device;
    SCNMTLLibrary *_frameworkLibrary;
    SCNMTLLibrary *_defaultLibrary;
    struct __C3DEngineStats *__engineStats;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    NSObject<OS_dispatch_group> *_shaderCompilationGroup;
    id <MTLLibrary> _commonProfileCacheLibrary;
    NSDictionary *_commonProfilePrecompiledFunctions;
    NSMapTable *_availableLibraries;
    struct __CFDictionary *_availableCompiledLibraries;
    struct os_unfair_lock_s _availableCompiledLibrariesLock;
}

+ (id)hashCodeForSource:(id)arg1 macros:(id)arg2;
- (void)libraryForProgramDesc:(CDStruct_d1b5de43)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)libraryForSourceCode:(id)arg1 options:(id)arg2;
- (id)libraryForFile:(id)arg1;
- (id)deviceQueue;
- (void)_setEngineStats:(struct __C3DEngineStats *)arg1;
- (void)waitForShadersCompilation;
- (id)shaderCompilationGroup;
- (id)commonProfileCacheLibrary;
- (id)defaultLibrary;
- (id)frameworkLibrary;
- (void)clearCompiledLibraries;
- (id)device;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;

@end

