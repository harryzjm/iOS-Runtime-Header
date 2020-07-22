//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/_HKDynamicAchievementDefinitionLoading-Protocol.h>

@class HDKeyValueDomain, HDProfile, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface HDDynamicAchievementDefinitionDataStore : NSObject <HDDatabaseProtectedDataObserver, _HKDynamicAchievementDefinitionLoading>
{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_deferredReads;
    NSMutableArray *_deferredWrites;
    HDKeyValueDomain *_identifierToDataDomain;
}

@property(retain, nonatomic) HDKeyValueDomain *identifierToDataDomain; // @synthesize identifierToDataDomain=_identifierToDataDomain;
- (void).cxx_destruct;
- (void)_keyValueStoreDidSyncNotification:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)_queue_flushDeferredRequests;
- (void)_postDefinitionsChangedExternally;
- (void)removeAchievementDefinitionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_writeDeferringIfDataIsProtected:(CDUnknownBlockType)arg1;
- (void)addAchievementDefinition:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchDynamicDefinitionsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

