//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKSQLite.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface CKDMetadataCache : CKSQLite
{
    NSObject<OS_dispatch_queue> *_cacheQueue;
}

+ (id)dbFileName;
+ (id)sharedCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
- (void).cxx_destruct;
- (void)removeContainerID:(id)arg1;
- (void)setContainerInfo:(id)arg1 forContainerID:(id)arg2;
- (id)containerInfoForContainerID:(id)arg1;
- (id)inlock_containerInfoForContainerID:(id)arg1;
- (void)setGlobalConfiguration:(id)arg1;
- (id)globalConfiguration;
- (void)removeKnownApplicationBundleID:(id)arg1;
- (id)knownApplicationBundleIDs;
- (void)setApplicationMetadata:(id)arg1 forApplicationBundleID:(id)arg2 sourceApplicationBundleID:(id)arg3;
- (id)applicationMetadataForApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2;
- (id)inlock_applicationMetadataForApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2;
- (void)setDateOfLastTokenUpdate:(id)arg1;
- (void)inlock_setDateOfLastTokenUpdate:(id)arg1;
- (id)dateOfLastTokenUpdate;
- (void)setAppContainerIntersectionMetadata:(id)arg1 forAppContainerTuple:(id)arg2;
- (id)appContainerIntersectionMetadataForAppContainerTuple:(id)arg1;
- (id)knownAppContainerTuples;
- (void)setPushToken:(id)arg1 forAppContainerTuple:(id)arg2;
- (id)pushTokenForAppContainerTuple:(id)arg1;
- (void)expungeWithCurrentAccountIdentifier:(id)arg1 forceRemove:(_Bool)arg2;
- (id)init;

@end

