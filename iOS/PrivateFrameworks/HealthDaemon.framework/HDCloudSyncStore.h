//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDSyncStore-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class CKRecordZoneID, HDProfile, HDSharingPredicate, NSString, NSUUID;

@interface HDCloudSyncStore : NSObject <NSCopying, HDSyncStore>
{
    long long _syncProvenance;
    long long _syncEpoch;
    _Bool _canPush;
    NSUUID *_storeIdentifier;
    NSString *_ownerIdentifier;
    NSString *_containerIdentifier;
    HDProfile *_profile;
    NSString *_sharingIdentifier;
    HDSharingPredicate *_sharingPredicate;
    CKRecordZoneID *_zoneID;
}

+ (id)syncStoreForProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 containerIdentifier:(id)arg5 sharingIdentifier:(id)arg6 predicate:(id)arg7 error:(id *)arg8;
+ (id)syncStoreForProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 containerIdentifier:(id)arg5 error:(id *)arg6;
+ (void)samplesDeletedInProfile:(id)arg1 byUser:(_Bool)arg2;
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(readonly, nonatomic) HDSharingPredicate *sharingPredicate; // @synthesize sharingPredicate=_sharingPredicate;
@property(readonly, copy, nonatomic) NSString *sharingIdentifier; // @synthesize sharingIdentifier=_sharingIdentifier;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) _Bool canPush; // @synthesize canPush=_canPush;
@property(readonly, copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(readonly, copy, nonatomic) NSString *ownerIdentifier; // @synthesize ownerIdentifier=_ownerIdentifier;
@property(readonly, copy, nonatomic) NSUUID *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)setExpectedSequenceNumber:(long long)arg1 forSyncEntityClass:(Class)arg2;
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)arg1;
- (_Bool)shouldEnforceSequenceOrdering;
- (_Bool)shouldContinueAfterAnchorValidationError:(id)arg1;
- (_Bool)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1;
- (_Bool)enforceSyncEntityOrdering;
- (id)_excludedSyncEntities;
- (id)orderedSyncEntities;
- (_Bool)canRecieveSyncObjectsForEntityClass:(Class)arg1;
- (id)syncEntityDependenciesForSyncEntity:(Class)arg1;
- (id)syncStoreDefaultSourceBundleIdentifier;
- (id)syncStoreIdentifier;
- (id)syncStoreTypeIdentifier;
- (long long)syncEpoch;
- (long long)syncProvenance;
- (id)persistedStateWithError:(id *)arg1;
- (_Bool)persistState:(id)arg1 error:(id *)arg2;
- (id)getPersistedAnchorMapWithError:(id *)arg1;
- (_Bool)clearAllSyncAnchorsWithError:(id *)arg1;
- (_Bool)replacePersistedAnchorMap:(id)arg1 error:(id *)arg2;
- (_Bool)resetReceivedSyncAnchorMapWithError:(id *)arg1;
- (id)receivedSyncAnchorMapWithError:(id *)arg1;
@property(readonly) int protocolVersion;
- (id)syncStoreForEpoch:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 containerIdentifier:(id)arg5 sharingIdentifier:(id)arg6 predicate:(id)arg7 error:(id *)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

