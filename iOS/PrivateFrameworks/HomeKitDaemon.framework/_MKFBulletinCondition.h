//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFBulletinConditionDatabaseID, NSDate, NSString, NSUUID;
@protocol MKFBulletinRegistration, MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFBulletinCondition
{
}

+ (id)backingModelProtocol;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;
+ (id)fetchRequest;
@property(readonly) id <MKFHome> home;
- (id)castIfBulletinCondition;
@property(readonly, copy, nonatomic) MKFBulletinConditionDatabaseID *databaseID;

// Remaining properties
@property(readonly, retain, nonatomic) id <MKFBulletinRegistration> bulletinRegistration; // @dynamic bulletinRegistration;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end

