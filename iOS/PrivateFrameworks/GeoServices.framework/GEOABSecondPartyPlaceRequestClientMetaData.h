//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDABClientDatasetMetadata, NSMutableArray, PBUnknownFields;

@interface GEOABSecondPartyPlaceRequestClientMetaData : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_clientConfigs;
    GEOPDABClientDatasetMetadata *_clientDatasetMetadata;
    NSMutableArray *_serverAbAssignments;
}

+ (Class)clientConfigType;
+ (Class)serverAbAssignmentType;
@property(retain, nonatomic) GEOPDABClientDatasetMetadata *clientDatasetMetadata; // @synthesize clientDatasetMetadata=_clientDatasetMetadata;
@property(retain, nonatomic) NSMutableArray *clientConfigs; // @synthesize clientConfigs=_clientConfigs;
@property(retain, nonatomic) NSMutableArray *serverAbAssignments; // @synthesize serverAbAssignments=_serverAbAssignments;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasClientDatasetMetadata;
- (id)clientConfigAtIndex:(unsigned long long)arg1;
- (unsigned long long)clientConfigsCount;
- (void)addClientConfig:(id)arg1;
- (void)clearClientConfigs;
- (id)serverAbAssignmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)serverAbAssignmentsCount;
- (void)addServerAbAssignment:(id)arg1;
- (void)clearServerAbAssignments;

@end
