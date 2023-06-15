//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFAnalysisEventBulletinRegistrationDatabaseID, NSArray, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFAccessory, MKFHome, MKFUser;

__attribute__((visibility("hidden")))
@interface _MKFAnalysisEventBulletinRegistration
{
}

+ (id)backingModelProtocol;
+ (id)modelIDForParentRelationshipTo:(id)arg1;
+ (id)fetchRequest;
@property(readonly) id <MKFHome> home;
- (id)castIfAnalysisEventBulletinRegistration;
@property(readonly, copy, nonatomic) MKFAnalysisEventBulletinRegistrationDatabaseID *databaseID;

// Remaining properties
@property(retain, nonatomic) id <MKFAccessory> accessory; // @dynamic accessory;
@property(copy, nonatomic) NSNumber *classifierOptions; // @dynamic classifierOptions;
@property(readonly, retain, nonatomic) NSArray *conditions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *deviceIdsDestination;
@property(copy, nonatomic) NSUUID *deviceIdsIdentifier;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) id <MKFUser> user;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

