//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMClientIdentity, MCMUserIdentityCache, NSString;
@protocol MCMContainerCache;

__attribute__((visibility("hidden")))
@interface MCMContainerFactory : NSObject
{
    id <MCMContainerCache> _cache;
    MCMClientIdentity *_clientIdentity;
    MCMUserIdentityCache *_userIdentityCache;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // @synthesize userIdentityCache=_userIdentityCache;
@property(readonly, nonatomic) MCMClientIdentity *clientIdentity; // @synthesize clientIdentity=_clientIdentity;
@property(readonly, nonatomic) id <MCMContainerCache> cache; // @synthesize cache=_cache;
- (id)_containerPathIdentifierForContainerIdentity:(id)arg1;
- (id)_generateConcreteContainerIdentityFromContainerIdentity:(id)arg1 error:(id *)arg2;
- (id)_createContainerForContainerIdentity:(id)arg1 error:(id *)arg2;
- (_Bool)deleteURL:(id)arg1 forUserIdentity:(id)arg2 reclaimSoon:(_Bool)arg3 error:(id *)arg4;
- (_Bool)deleteURL:(id)arg1 forUserIdentity:(id)arg2 error:(id *)arg3;
- (id)containerForContainerIdentity:(id)arg1 createIfNecessary:(_Bool)arg2 error:(id *)arg3;
- (id)createStagedContainerForContainerIdentity:(id)arg1 finalContainerPath:(id *)arg2 dataProtectionClass:(int)arg3 error:(id *)arg4;
- (id)initWithContainerCache:(id)arg1 clientIdentity:(id)arg2 userIdentityCache:(id)arg3;
- (_Bool)upgradeContainer:(id)arg1 clientIdentity:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

