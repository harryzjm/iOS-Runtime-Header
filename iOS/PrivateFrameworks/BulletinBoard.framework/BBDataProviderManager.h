//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/BBDataProviderStoreDelegate-Protocol.h>

@class BBLocalDataProviderStore, BBRemoteDataProviderConnectionResolver, NSMutableDictionary, NSString;
@protocol BBDataProviderManagerDelegate, OS_dispatch_queue;

@interface BBDataProviderManager : NSObject <BBDataProviderStoreDelegate>
{
    id <BBDataProviderManagerDelegate> _delegate;
    BBLocalDataProviderStore *_localDataProviderStore;
    BBRemoteDataProviderConnectionResolver *_remoteDataProviderResolver;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _loadQueueSuspended;
    NSObject<OS_dispatch_queue> *_loadDataProviderQueue;
    NSMutableDictionary *_parentFactoriesBySectionID;
}

- (void).cxx_destruct;
- (id)_configureSectionInfo:(id)arg1 forDataProvider:(id)arg2;
- (id)_configureDataProvider:(id)arg1 performMigration:(_Bool)arg2;
- (void)dataProviderStore:(id)arg1 didRemoveDataProvider:(id)arg2;
- (void)dataProviderStore:(id)arg1 didAddDataProvider:(id)arg2 performMigration:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dataProviderStore:(id)arg1 didAddParentSectionFactory:(id)arg2;
- (id)_queue_getSectionInfoForSectionID:(id)arg1;
- (id)_queue_dataProviderForUniversalSectionID:(id)arg1;
- (id)universalSectionIDForSectionID:(id)arg1;
- (id)parentSectionDataProviderFactoryForSectionID:(id)arg1;
- (id)dataProviderForSectionID:(id)arg1;
- (void)performBlockOnDataProviders:(CDUnknownBlockType)arg1;
- (id)localSectionIdentifierFromDismissalSectionIdentifer:(id)arg1;
- (void)reloadIdentityForSectionID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)rebuildSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)noteSettingsChanged:(id)arg1 forSectionID:(id)arg2;
- (void)loadAllDataProvidersAndPerformMigration:(_Bool)arg1;
@property(readonly, copy) NSString *debugDescription;
- (id)debugDescriptionWithChildren:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

