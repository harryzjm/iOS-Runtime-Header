//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFBulletinRegistrationDatabaseID, NSArray, NSDate, NSSet, NSString, NSUUID;
@protocol MKFHome, MKFUser;

__attribute__((visibility("hidden")))
@interface _MKFBulletinRegistration
{
}

+ (id)backingModelProtocol;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;
+ (id)fetchRequest;
- (void)removeConditionsObject:(id)arg1;
- (void)addConditionsObject:(id)arg1;
- (id)findConditionsRelationOfTypeTimePeriodBulletinConditionWithModelID:(id)arg1;
- (id)createConditionsRelationOfTypeTimePeriodBulletinConditionWithModelID:(id)arg1;
- (id)materializeOrCreateConditionsRelationOfTypeTimePeriodBulletinConditionWithModelID:(id)arg1 createdNew:(_Bool *)arg2;
- (id)findConditionsRelationOfTypePresenceBulletinConditionWithModelID:(id)arg1;
- (id)createConditionsRelationOfTypePresenceBulletinConditionWithModelID:(id)arg1;
- (id)materializeOrCreateConditionsRelationOfTypePresenceBulletinConditionWithModelID:(id)arg1 createdNew:(_Bool *)arg2;
- (id)createConditionsRelationOfType:(id)arg1 modelID:(id)arg2;
- (id)materializeOrCreateConditionsRelationOfType:(id)arg1 modelID:(id)arg2 createdNew:(_Bool *)arg3;
@property(readonly, retain, nonatomic) NSArray *conditions;
@property(readonly) id <MKFHome> home;
- (id)castIfBulletinRegistration;
@property(readonly, copy, nonatomic) MKFBulletinRegistrationDatabaseID *databaseID;
- (void)residentSyncContextualizeConditions:(id)arg1 userContext:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSSet *conditions_; // @dynamic conditions_;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *deviceIdsDestination; // @dynamic deviceIdsDestination;
@property(copy, nonatomic) NSUUID *deviceIdsIdentifier; // @dynamic deviceIdsIdentifier;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) id <MKFUser> user; // @dynamic user;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end

