//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MSPReplicaRecord;

@interface MSPReplicaEditInsertRecord
{
    id <MSPReplicaRecord> _recordWithInformationToInsert;
}

@property(readonly, nonatomic) id <MSPReplicaRecord> recordWithInformationToInsert; // @synthesize recordWithInformationToInsert=_recordWithInformationToInsert;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithRecordToInsert:(id)arg1 identifier:(id)arg2;
- (id)_initWithIdentifierOfAffectedRecord:(id)arg1;

@end
