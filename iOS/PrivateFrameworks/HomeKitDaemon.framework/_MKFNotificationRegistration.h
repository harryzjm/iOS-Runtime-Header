//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFNotificationRegistrationDatabaseID, NSDate, NSString, NSUUID;
@protocol MKFHome, MKFUser;

__attribute__((visibility("hidden")))
@interface _MKFNotificationRegistration
{
}

+ (id)backingModelProtocol;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;
+ (id)fetchRequest;
@property(readonly) id <MKFHome> home;
- (id)castIfNotificationRegistration;
@property(readonly, copy, nonatomic) MKFNotificationRegistrationDatabaseID *databaseID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *deviceIdsDestination; // @dynamic deviceIdsDestination;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSDate *lastModified; // @dynamic lastModified;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) id <MKFUser> user; // @dynamic user;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end

