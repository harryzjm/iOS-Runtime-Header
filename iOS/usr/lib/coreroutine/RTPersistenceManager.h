//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <coreroutine/RTPersistenceContextDelegate-Protocol.h>
#import <coreroutine/RTPersistenceModelProvider-Protocol.h>

@class NSArray, NSManagedObjectModel, NSString, NSURL, RTPersistenceContainer, RTPersistenceStore;
@protocol RTPersistenceDelegate, RTPersistenceMirroringDelegate;

@interface RTPersistenceManager <RTPersistenceModelProvider, RTPersistenceContextDelegate>
{
    RTPersistenceStore *_stores[3];
    NSURL *_modelsDirectory;
    NSURL *_storesDirectory;
    NSArray *_sortedModelNames;
    RTPersistenceContainer *_container;
    NSManagedObjectModel *_latestModel;
    unsigned long long _availability;
    id <RTPersistenceDelegate> _delegate;
    id <RTPersistenceMirroringDelegate> _mirroringDelegate;
}

+ (id)defaultStoresDirectory;
+ (id)defaultModelsDirectory;
@property(nonatomic) __weak id <RTPersistenceMirroringDelegate> mirroringDelegate; // @synthesize mirroringDelegate=_mirroringDelegate;
@property(nonatomic) __weak id <RTPersistenceDelegate> delegate; // @synthesize delegate=_delegate;
@property unsigned long long availability; // @synthesize availability=_availability;
- (void).cxx_destruct;
- (void)_onCoreDataResetSync:(id)arg1;
- (void)onCoreDataResetSync:(id)arg1;
- (void)performZoneResetMirroringRequestWithQualityOfService:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)performExportMirroringRequestWithQualityOfService:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)performImportMirroringRequestWithQualityOfService:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)performMirroringRequestOfType:(long long)arg1 qualityOfService:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)persistenceContextPerformedSave:(id)arg1;
- (void)persistenceContext:(id)arg1 encounteredError:(id)arg2;
- (id)modelNamed:(id)arg1;
- (id)sortedModelNames;
- (id)modelFollowingModel:(id)arg1;
- (id)latestModel;
- (void)_updateStoreAvailability:(unsigned long long)arg1;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (id)storeDescriptionForStoreWithType:(unsigned long long)arg1;
- (id)persistenceStoreConfigurations;
- (unsigned long long)storeTypeForURL:(id)arg1;
- (id)URLForStoreType:(unsigned long long)arg1;
- (void)tearDownPersistenceStack:(CDUnknownBlockType)arg1;
- (_Bool)_setupPersistenceContainers;
- (void)setupPersistenceContainers:(CDUnknownBlockType)arg1;
- (void)setContainer:(id)arg1;
- (id)waitForPersistenceContext;
- (id)managedObjectContext;
- (void)createManagedObjectContext:(CDUnknownBlockType)arg1;
- (_Bool)initializeContainer;
- (void)dealloc;
- (id)initWithModelsDirectory:(id)arg1 storesDirectory:(id)arg2;
- (id)init;
- (void)performZoneResetMirroringRequest:(CDUnknownBlockType)arg1;
- (void)performExportMirroringRequest:(CDUnknownBlockType)arg1;
- (void)performImportMirroringRequest:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

