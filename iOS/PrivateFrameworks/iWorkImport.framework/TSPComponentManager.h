//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSPComponentDelegate-Protocol.h>
#import <iWorkImport/TSPObjectModifyDelegate-Protocol.h>

@class NSCache, NSHashTable, NSMapTable, NSString, TSPComponent, TSPObjectContext;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPComponentManager : NSObject <TSPComponentDelegate, TSPObjectModifyDelegate>
{
    _Atomic int _ignoreCachedObjectEvictionCount;
    _Bool _isTornDown;
    NSObject<OS_dispatch_queue> *_componentQueue;
    NSHashTable *_components;
    NSMapTable *_componentDictionary;
    NSCache *_componentCache;
    TSPComponent *_viewStateComponent;
    NSObject<OS_dispatch_queue> *_readFlushedComponentQueue;
    TSPObjectContext *_context;
    TSPComponent *_packageMetadataComponent;
}

+ (id)componentManagersPerformingCacheOperationOnCurrentThread;
@property(readonly, nonatomic) TSPComponent *packageMetadataComponent; // @synthesize packageMetadataComponent=_packageMetadataComponent;
@property(readonly, nonatomic) __weak TSPObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)didModifyFlushedComponent:(id)arg1 forObject:(id)arg2;
- (void)flushComponent:(id)arg1 isDiscardingContent:(_Bool)arg2;
- (void)cacheComponent:(id)arg1 isDiscardingContent:(_Bool)arg2;
- (id)objectForIdentifier:(long long)arg1;
- (void)evictAllCachedObjects;
- (void)performCacheOperationUsingBlock:(CDUnknownBlockType)arg1;
- (void)continueCacheOperationUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)isPerformingCacheOperation;
- (_Bool)shouldKeepAllCachedObjectsInMemory;
- (void)endIgnoringCachedObjectEviction;
- (void)beginIgnoringCachedObjectEviction;
- (void)traverseComponentTreeFromRoot:(id)arg1 accessor:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool isSupportComponentTreeModified;
@property(readonly, nonatomic) _Bool isDocumentComponentTreeModified;
- (void)discardOrphanedComponents;
- (id)rootComponentForPackageIdentifier:(unsigned char)arg1;
- (void)resumeLoadingModifiedFlushedComponents;
- (void)suspendLoadingModifiedFlushedComponentsAndWait;
- (void)dirtyAllComponentsForDocumentUpgradeInPackage:(unsigned char)arg1;
- (void)willModifyObject:(id)arg1 duringReadOperation:(_Bool)arg2 shouldCaptureSnapshot:(_Bool)arg3;
- (unsigned long long)objectTargetType;
- (void)componentForRootObjectOfLazyReference:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)componentForRootObjectOfLazyReference:(id)arg1;
- (id)componentForRootObjectOfLazyReferenceImpl:(id)arg1;
- (id)componentForRootObjectIdentifier:(long long)arg1;
- (void)componentForRootObjectIdentifier:(long long)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)retrieveOrCreateComponentForRootObject:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enumerateComponents:(CDUnknownBlockType)arg1;
@property(retain) TSPComponent *viewStateComponent;
@property(readonly, nonatomic) TSPComponent *supportMetadataComponent;
@property(readonly, nonatomic) TSPComponent *supportObjectContainerComponent;
@property(readonly, nonatomic) TSPComponent *supportComponent;
@property(readonly, nonatomic) TSPComponent *documentMetadataComponent;
@property(readonly, nonatomic) TSPComponent *documentObjectContainerComponent;
@property(readonly, nonatomic) TSPComponent *documentComponent;
- (id)supportComponentImpl;
- (id)documentComponentImpl;
- (id)rootComponentWithIdentifierImpl:(long long)arg1 locator:(id)arg2 packageIdentifier:(unsigned char)arg3;
- (void)loadFromPackage:(id)arg1 metadata:(id)arg2;
- (_Bool)isActive;
- (void)tearDown;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

