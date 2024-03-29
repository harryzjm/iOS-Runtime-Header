//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMUserIdentityCache, NSMutableDictionary, NSString;
@protocol MCMChildParentMapCache, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MCMContainerCache : NSObject
{
    NSMutableDictionary *_queue_cache;
    MCMUserIdentityCache *_userIdentityCache;
    id <MCMChildParentMapCache> _childParentMapCache;
    NSObject<OS_dispatch_queue> *_queue;
    Class _cacheEntryClass;
    Class _classCacheClass;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) Class classCacheClass; // @synthesize classCacheClass=_classCacheClass;
@property(readonly, nonatomic) Class cacheEntryClass; // @synthesize cacheEntryClass=_cacheEntryClass;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) id <MCMChildParentMapCache> childParentMapCache; // @synthesize childParentMapCache=_childParentMapCache;
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // @synthesize userIdentityCache=_userIdentityCache;
- (void)_queue_setContainerClassCache:(id)arg1;
- (id)_containerClassPathForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 transient:(_Bool)arg3;
- (id)_queue_containerClassCacheForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 transient:(_Bool)arg3;
- (id)_queue_containerClassCacheForContainerClassPath:(id)arg1;
- (void)_queue_flushCacheForContainerClassPath:(id)arg1;
- (void)_queue_invalidateUserIdentity:(id)arg1;
- (void)userIdentityCache:(id)arg1 didAddUserIdentity:(id)arg2;
- (void)userIdentityCache:(id)arg1 didInvalidateUserIdentity:(id)arg2;
- (void)invalidateUserIdentity:(id)arg1;
- (void)flushCacheForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 transient:(_Bool)arg3;
- (_Bool)removeContainerForUserIdentity:(id)arg1 contentClass:(unsigned long long)arg2 identifier:(id)arg3 transient:(_Bool)arg4 error:(id *)arg5;
- (id)addContainerMetadata:(id)arg1 error:(id *)arg2;
- (id)entriesForUserIdentities:(id)arg1 contentClass:(unsigned long long)arg2 transient:(_Bool)arg3 error:(id *)arg4;
- (long long)countContainersForOtherUserIdentitiesWithIdentity:(id)arg1 error:(id *)arg2;
- (id)entryForContainerIdentity:(id)arg1 error:(id *)arg2;
- (id)entryForContainerIdentity:(id)arg1 classCache:(id)arg2 error:(id *)arg3;
- (id)classCacheForContainerIdentity:(id)arg1;
- (void)setContainerClassCache:(id)arg1;
- (id)initWithUserIdentityCache:(id)arg1 childParentMapCache:(id)arg2 classCacheClass:(Class)arg3 cacheEntryClass:(Class)arg4 error:(id *)arg5;
- (id)initWithUserIdentityCache:(id)arg1 childParentMapCache:(id)arg2 classCacheClass:(Class)arg3 cacheEntryClass:(Class)arg4 queue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

