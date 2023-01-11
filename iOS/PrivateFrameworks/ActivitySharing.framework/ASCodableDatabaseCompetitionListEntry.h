//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@class NSData;

@interface ASCodableDatabaseCompetitionListEntry : PBCodable <NSCopying>
{
    long long _owner;
    long long _type;
    NSData *_friendUUID;
    NSData *_systemFieldsOnlyRecord;
    struct {
        unsigned int owner:1;
        unsigned int type:1;
    } _has;
}

@property(nonatomic) long long owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSData *systemFieldsOnlyRecord; // @synthesize systemFieldsOnlyRecord=_systemFieldsOnlyRecord;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSData *friendUUID; // @synthesize friendUUID=_friendUUID;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasOwner;
@property(readonly, nonatomic) _Bool hasSystemFieldsOnlyRecord;
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasFriendUUID;

@end

