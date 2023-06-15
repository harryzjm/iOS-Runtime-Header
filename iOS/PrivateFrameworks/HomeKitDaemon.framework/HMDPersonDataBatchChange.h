//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBLocalZoneLocalInput, NSMutableSet, NSString, NSUUID;
@protocol HMDPersonDataSource;

__attribute__((visibility("hidden")))
@interface HMDPersonDataBatchChange : HMFObject
{
    NSUUID *_UUID;
    id <HMDPersonDataSource> _dataSource;
    HMBLocalZoneLocalInput *_localInput;
    NSMutableSet *_addedOrUpdatedPersons;
    NSMutableSet *_removedPersonsUUIDs;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) NSMutableSet *removedPersonsUUIDs; // @synthesize removedPersonsUUIDs=_removedPersonsUUIDs;
@property(readonly) NSMutableSet *addedOrUpdatedPersons; // @synthesize addedOrUpdatedPersons=_addedOrUpdatedPersons;
@property(readonly) HMBLocalZoneLocalInput *localInput; // @synthesize localInput=_localInput;
@property __weak id <HMDPersonDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)attributeDescriptions;
- (id)logIdentifier;
- (void)commit;
- (void)removeFaceCropWithUUID:(id)arg1;
- (void)removePersonWithUUID:(id)arg1;
- (void)addOrUpdateFaceCrop:(id)arg1;
- (void)addOrUpdatePerson:(id)arg1;
- (id)initWithLocalInput:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

