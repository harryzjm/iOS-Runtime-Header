//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableSet, TSCH3DContext, TSCH3DDocumentDataCache, TSCH3DGPUSharegroup, TSCH3DResourceCache;

@interface TSCH3DSession : NSObject
{
    _Bool _interactiveCanvas;
    unsigned long long _failures;
    TSCH3DContext *_context;
    TSCH3DResourceCache *_cache;
    TSCH3DGPUSharegroup *_sharegroup;
    NSMutableSet *_activeResourceSet;
    NSMutableSet *_allResourceSet;
    NSCountedSet *_scopeProtectedResourceSet;
    long long _virtualScreen;
    TSCH3DDocumentDataCache *_dataCache;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TSCH3DDocumentDataCache *dataCache; // @synthesize dataCache=_dataCache;
- (void)p_unlock;
- (void)p_lock;
@property(nonatomic) int performance;
@property(nonatomic) long long virtualScreen;
- (void)setIfIsMoreDemandingPerformance:(int)arg1;
- (void)endFrameWithSharegroupDelegate:(id)arg1;
- (void)beginFrameWithSharegroupDelegate:(id)arg1;
- (id)shaderForShaderContext:(id)arg1 initializeProgramBlock:(CDUnknownBlockType)arg2;
- (void)forceFlushResources:(id)arg1;
- (void)flushResources:(id)arg1;
- (void)flushTrackedResources;
- (void)resetTrackingToActiveResources;
- (void)flushMemoryForResources:(id)arg1;
- (_Bool)isProtectedResource:(id)arg1;
- (void)unprotectResource:(id)arg1 clearOnFailProtection:(_Bool)arg2;
- (void)protectResource:(id)arg1 unprotectOnFail:(_Bool)arg2;
- (_Bool)hasEnoughFreeMemoryOfBytes:(unsigned long long)arg1;
- (void)garbageCollectAllUnretainedResources;
- (void)flushResourcesIfNecessary;
- (void)trackResourcesInBlock:(CDUnknownBlockType)arg1;
- (id)loadResource:(id)arg1 reload:(_Bool)arg2 withLoader:(id)arg3 config:(id)arg4;
- (void)addActiveResource:(id)arg1;
- (id)handleOfResource:(id)arg1 loader:(id)arg2;
- (void)p_setContext:(id)arg1;
@property(readonly, nonatomic) TSCH3DContext *context;
- (id)p_contextOrNil;
@property(readonly, nonatomic) _Bool mustRunOnMainThread;
@property(readonly, nonatomic) _Bool isOneShot;
@property(readonly, nonatomic) _Bool hasFailed;
- (void)resetFailures;
- (void)setFailed;
@property(readonly, nonatomic) TSCH3DContext *sharegroupContext;
- (void)dealloc;
- (id)initWithSharegroupToken:(id)arg1 dataCache:(id)arg2;
- (id)init;

@end

