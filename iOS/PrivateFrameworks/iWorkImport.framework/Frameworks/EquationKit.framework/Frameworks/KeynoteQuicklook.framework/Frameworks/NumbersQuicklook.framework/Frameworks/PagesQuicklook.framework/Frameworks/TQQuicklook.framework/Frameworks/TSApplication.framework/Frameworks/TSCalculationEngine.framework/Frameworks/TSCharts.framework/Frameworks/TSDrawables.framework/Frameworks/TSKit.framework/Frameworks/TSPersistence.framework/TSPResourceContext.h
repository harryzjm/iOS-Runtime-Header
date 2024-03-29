//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable, NSSet, TSPDocumentResourceCache, TSPDocumentResourceLegacyRegistry, TSPDocumentResourceRegistry;
@protocol OS_dispatch_queue;

@interface TSPResourceContext : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_progressAggregationQueue;
    NSHashTable *_accessQueue_resourceRequests;
    NSMapTable *_accessQueue_resourceRequestTable;
    TSPDocumentResourceCache *_documentResourceCache;
    TSPDocumentResourceRegistry *_documentResourceRegistry;
    TSPDocumentResourceLegacyRegistry *_sageDocumentResourceLegacyRegistry;
    TSPDocumentResourceLegacyRegistry *_tangierDocumentResourceLegacyRegistry;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TSPDocumentResourceLegacyRegistry *tangierDocumentResourceLegacyRegistry; // @synthesize tangierDocumentResourceLegacyRegistry=_tangierDocumentResourceLegacyRegistry;
@property(readonly, nonatomic) TSPDocumentResourceLegacyRegistry *sageDocumentResourceLegacyRegistry; // @synthesize sageDocumentResourceLegacyRegistry=_sageDocumentResourceLegacyRegistry;
@property(readonly, nonatomic) TSPDocumentResourceRegistry *documentResourceRegistry; // @synthesize documentResourceRegistry=_documentResourceRegistry;
@property(readonly, nonatomic) TSPDocumentResourceCache *documentResourceCache; // @synthesize documentResourceCache=_documentResourceCache;
- (id)newDataStorageForDocumentResourceInfo:(id)arg1 createResourceRequestIfNeeded:(_Bool)arg2 error:(id *)arg3;
- (id)performResourceAccessUsingQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)conditionallyBeginAccessingResourcesWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeResourceRequests:(id)arg1;
- (void)accessQueue_addResourceRequest:(id)arg1;
- (void)addResourceRequests:(id)arg1;
@property(readonly) NSSet *resourceRequests;
- (id)initWithDocumentResourceCache:(id)arg1 documentResourceRegistry:(id)arg2 sageDocumentResourceLegacyRegistry:(id)arg3 tangierDocumentResourceLegacyRegistry:(id)arg4;
- (id)init;

@end

