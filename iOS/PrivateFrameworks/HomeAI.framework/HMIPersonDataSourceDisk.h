//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/HMIPersonManagerDataSource-Protocol.h>

@class NSObject, NSString, NSURL, NSUUID;
@protocol OS_dispatch_queue;

@interface HMIPersonDataSourceDisk : HMFObject <HMIPersonManagerDataSource, HMFLogging>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSURL *_sourceURL;
    NSUUID *_homeUUID;
    NSUUID *_sourceUUID;
}

+ (id)logCategory;
+ (id)getStoragePath;
- (void).cxx_destruct;
@property(readonly) NSUUID *sourceUUID; // @synthesize sourceUUID=_sourceUUID;
@property(readonly) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(readonly) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)addFaceprints:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performCloudPullWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchPersonsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllPersonFaceCropsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAllFaceprintsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchFaceCropsForPersonsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllPersonsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithHomeUUID:(id)arg1 sourceUUID:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
