//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFShortcutActionDatabaseID, NSData, NSDate, NSString, NSUUID;
@protocol MKFActionSet, MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFShortcutAction
{
}

+ (id)backingModelProtocol;
+ (id)modelIDForParentRelationshipTo:(id)arg1;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
@property(readonly) id <MKFHome> home;
- (id)castIfShortcutAction;
@property(readonly, copy, nonatomic) MKFShortcutActionDatabaseID *databaseID;

// Remaining properties
@property(readonly, retain, nonatomic) id <MKFActionSet> actionSet;
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

