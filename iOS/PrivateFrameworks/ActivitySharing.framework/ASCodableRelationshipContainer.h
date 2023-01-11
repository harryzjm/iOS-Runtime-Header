//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@class ASCodableCloudKitRelationship, NSData;

@interface ASCodableRelationshipContainer : PBCodable <NSCopying>
{
    long long _version;
    ASCodableCloudKitRelationship *_relationship;
    NSData *_relationshipShareID;
    NSData *_remoteActivityShareID;
    NSData *_remoteRelationshipShareID;
    NSData *_systemFieldsOnlyRecord;
    struct {
        unsigned int version:1;
    } _has;
}

@property(retain, nonatomic) NSData *remoteActivityShareID; // @synthesize remoteActivityShareID=_remoteActivityShareID;
@property(retain, nonatomic) NSData *remoteRelationshipShareID; // @synthesize remoteRelationshipShareID=_remoteRelationshipShareID;
@property(retain, nonatomic) NSData *relationshipShareID; // @synthesize relationshipShareID=_relationshipShareID;
@property(retain, nonatomic) NSData *systemFieldsOnlyRecord; // @synthesize systemFieldsOnlyRecord=_systemFieldsOnlyRecord;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(retain, nonatomic) ASCodableCloudKitRelationship *relationship; // @synthesize relationship=_relationship;
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
@property(readonly, nonatomic) _Bool hasRemoteActivityShareID;
@property(readonly, nonatomic) _Bool hasRemoteRelationshipShareID;
@property(readonly, nonatomic) _Bool hasRelationshipShareID;
@property(readonly, nonatomic) _Bool hasSystemFieldsOnlyRecord;
@property(nonatomic) _Bool hasVersion;
@property(readonly, nonatomic) _Bool hasRelationship;

@end

