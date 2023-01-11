//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSupport/MSPOrderedReplicaRecord-Protocol.h>
#import <MapsSupport/MSPOrderedReplicaRecordFromCloud-Protocol.h>

@class CKRecord, MSPPosition, MSPVectorTimestamp, NSData, NSString, NSUUID;

@interface MSPOrderedReplicaRecordFromCloudKit <MSPOrderedReplicaRecord, MSPOrderedReplicaRecordFromCloud>
{
    MSPPosition *_position;
    MSPVectorTimestamp *_positionTimestamp;
}

+ (id)recordType;
+ (id)recordFromInsertEdit:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) MSPVectorTimestamp *positionTimestamp; // @synthesize positionTimestamp=_positionTimestamp;
@property(readonly, nonatomic) MSPPosition *position; // @synthesize position=_position;
@property(readonly, copy) NSString *description;
- (id)recordZoneName;
- (id)recordRepresentation;
- (void)applyUpdatePositionEdit:(id)arg1;
- (id)initWithCKRecord:(id)arg1;
- (id)initWithReplicaRecord:(id)arg1 recordID:(id)arg2;
- (id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 position:(id)arg3 positionTimestamp:(id)arg4 identifier:(id)arg5;

// Remaining properties
@property(readonly, copy, nonatomic) NSData *contents;
@property(readonly, copy, nonatomic) MSPVectorTimestamp *contentsTimestamp;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) CKRecord *record;
@property(readonly, nonatomic, getter=recordIdentifier) NSUUID *recordIdentifier;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isTombstoneRepresentedByCloudRecord) _Bool tombstoneRepresentedByCloudRecord;

@end
