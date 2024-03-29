//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMIExternalPersonManager, HMIHomePersonManager, HMIPersonManager, NSObject, NSString;
@protocol HMDPersonDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomeAIPersonDataInterface : HMFObject
{
    HMIPersonManager *_personManager;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <HMDPersonDataSource> _dataSource;
}

- (void).cxx_destruct;
@property __weak id <HMDPersonDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMIPersonManager *personManager; // @synthesize personManager=_personManager;
- (void)handleUpdatedIsDataSyncInProgress:(_Bool)arg1;
- (void)handleUpdatedIsCurrentDeviceAvailableResident:(_Bool)arg1;
- (void)handleRemovedFaceprintWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)handleRemovedFaceCropWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)handleRemovedPersonWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)handleUpdatedFaceprint:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)handleUpdatedPersonFaceCrop:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)handleUpdatedPerson:(id)arg1 mirrorOutputFuture:(id)arg2;
- (void)configureWithDataSource:(id)arg1 home:(id)arg2;
- (void)performCloudPullWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllFaceprintsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchFaceCropsForPersonsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllPersonFaceCropsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchPersonsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllPersonsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPersonManager:(id)arg1 workQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) HMIHomePersonManager *homePersonManager;
@property(readonly) HMIExternalPersonManager *photosPersonManager;
@property(readonly) Class superclass;

@end

