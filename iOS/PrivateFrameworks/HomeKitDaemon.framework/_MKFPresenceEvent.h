//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFPresenceEventDatabaseID, NSArray, NSDate, NSNumber, NSSet, NSString, NSUUID;
@protocol MKFEventTrigger, MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFPresenceEvent
{
}

+ (id)backingModelProtocol;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
- (void)removeUsersObject:(id)arg1;
- (void)addUsersObject:(id)arg1;
- (_Bool)synchronizeUsersRelationWith:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *users;
@property(readonly) id <MKFHome> home;
- (id)castIfPresenceEvent;
@property(readonly, copy, nonatomic) MKFPresenceEventDatabaseID *databaseID;
- (_Bool)validateForInsertOrUpdate:(id *)arg1;

// Remaining properties
@property(copy, nonatomic) NSNumber *activation; // @dynamic activation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSNumber *endEvent;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(copy, nonatomic) NSString *presenceType; // @dynamic presenceType;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) id <MKFEventTrigger> trigger;
@property(retain, nonatomic) NSSet *users_; // @dynamic users_;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

