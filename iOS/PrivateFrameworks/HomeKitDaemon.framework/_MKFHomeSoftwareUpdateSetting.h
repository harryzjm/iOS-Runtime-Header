//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFHomeSoftwareUpdateSettingDatabaseID, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFHomeSoftwareUpdateSetting
{
}

+ (id)backingModelProtocol;
+ (id)modelIDForParentRelationshipTo:(id)arg1;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
- (id)castIfHomeSoftwareUpdateSetting;
@property(readonly, copy, nonatomic) MKFHomeSoftwareUpdateSettingDatabaseID *databaseID;

// Remaining properties
@property(copy, nonatomic) NSNumber *automaticSoftwareUpdateEnabled; // @dynamic automaticSoftwareUpdateEnabled;
@property(copy, nonatomic) NSNumber *automaticThirdPartyAccessorySoftwareUpdateEnabled; // @dynamic automaticThirdPartyAccessorySoftwareUpdateEnabled;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, retain, nonatomic) id <MKFHome> home;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

