//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFActionDatabaseID, NSDate, NSString, NSUUID;
@protocol MKFActionSet, MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFAction
{
}

+ (id)backingModelProtocol;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
@property(readonly) id <MKFHome> home;
- (id)castIfAction;
@property(readonly, copy, nonatomic) MKFActionDatabaseID *databaseID;

// Remaining properties
@property(readonly, retain, nonatomic) id <MKFActionSet> actionSet; // @dynamic actionSet;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end

