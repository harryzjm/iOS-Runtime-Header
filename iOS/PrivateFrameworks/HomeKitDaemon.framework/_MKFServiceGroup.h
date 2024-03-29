//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFServiceGroupDatabaseID, NSArray, NSDate, NSSet, NSString, NSUUID;
@protocol MKFApplicationData, MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFServiceGroup
{
}

+ (id)backingModelProtocol;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
- (void)removeServicesObject:(id)arg1;
- (void)addServicesObject:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *services;
- (id)materializeOrCreateApplicationDataRelation:(_Bool *)arg1;
- (id)castIfServiceGroup;
@property(readonly, copy, nonatomic) MKFServiceGroupDatabaseID *databaseID;

// Remaining properties
@property(retain, nonatomic) id <MKFApplicationData> applicationData; // @dynamic applicationData;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, retain, nonatomic) id <MKFHome> home; // @dynamic home;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSSet *services_; // @dynamic services_;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end

