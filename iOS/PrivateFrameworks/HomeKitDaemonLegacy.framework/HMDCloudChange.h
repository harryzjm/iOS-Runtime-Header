//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CKRecord, CKRecordID, HMDBackingStoreModelObject, HMDCloudRecord, NSArray, NSMutableSet, NSSet, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCloudChange : HMFObject
{
    HMDBackingStoreModelObject *_objectChange;
    HMDCloudRecord *_cloudRecord;
    HMDCloudRecord *_deletedCloudRecord;
    unsigned long long _changeType;
    unsigned long long _applyType;
    NSMutableSet *_rowIDsSet;
}

+ (id)shortDescription;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableSet *rowIDsSet; // @synthesize rowIDsSet=_rowIDsSet;
@property(nonatomic) unsigned long long applyType; // @synthesize applyType=_applyType;
@property(nonatomic) unsigned long long changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) HMDCloudRecord *deletedCloudRecord; // @synthesize deletedCloudRecord=_deletedCloudRecord;
@property(readonly, nonatomic) HMDCloudRecord *cloudRecord; // @synthesize cloudRecord=_cloudRecord;
@property(retain, nonatomic) HMDBackingStoreModelObject *objectChange; // @synthesize objectChange=_objectChange;
- (void)replayChange:(id)arg1 stagedChange:(id)arg2;
- (void)resetRecord;
- (void)updateChangeWithRecord:(id)arg1;
@property(readonly, nonatomic) CKRecordID *recordID;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) NSString *recordName;
@property(readonly, nonatomic) CKRecord *record;
- (void)updateWithObjectChange:(id)arg1;
- (void)updateDeletedCloudRecord:(id)arg1;
- (void)updateCloudRecord:(id)arg1;
- (void)forceChangeToInvalid;
- (void)forceChangeToDelete;
@property(readonly, nonatomic) NSArray *rowIDs;
@property(readonly, nonatomic, getter=isPushAfterApply) _Bool pushAfterApply;
@property(readonly, nonatomic, getter=isDropStagedAfterApply) _Bool dropStagedAfterApply;
@property(readonly, nonatomic, getter=isDropAfterApply) _Bool dropAfterApply;
@property(readonly, nonatomic, getter=isDropAndDoNotApply) _Bool dropAndDoNotApply;
@property(readonly, nonatomic, getter=isInvalid) _Bool invalidChange;
@property(readonly, nonatomic, getter=isDeleted) _Bool deleteChange;
@property(readonly, nonatomic, getter=isUpdated) _Bool updateChange;
@property(readonly, nonatomic, getter=isAdded) _Bool addChange;
@property(readonly, nonatomic) NSUUID *uuid;
@property(readonly, nonatomic) NSUUID *objectID;
@property(readonly, nonatomic) NSUUID *parentUuid;
@property(readonly, nonatomic) NSUUID *parentObjectID;
@property(readonly, nonatomic) NSSet *dependentUUIDs;
@property(readonly, nonatomic) HMDBackingStoreModelObject *change;
@property(readonly, copy) NSString *description;
- (id)shortDescription;
- (id)initWithCloudObjectRecord:(id)arg1;
- (id)initWithObjectChange:(id)arg1;
- (id)_initWithObjectChange:(id)arg1 cloudObjectRecord:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

