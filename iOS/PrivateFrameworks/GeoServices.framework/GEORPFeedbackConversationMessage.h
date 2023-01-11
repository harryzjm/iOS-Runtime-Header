//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPPostedBy, GEORPTimestamp, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackConversationMessage : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    NSString *_comments;
    GEORPTimestamp *_postedAt;
    GEORPPostedBy *_postedBy;
    NSMutableArray *_surveyResponses;
    NSString *_uuid;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_comments:1;
        unsigned int read_postedAt:1;
        unsigned int read_postedBy:1;
        unsigned int read_surveyResponses:1;
        unsigned int read_uuid:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_comments:1;
        unsigned int wrote_postedAt:1;
        unsigned int wrote_postedBy:1;
        unsigned int wrote_surveyResponses:1;
        unsigned int wrote_uuid:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)surveyResponseType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)surveyResponseAtIndex:(unsigned long long)arg1;
- (unsigned long long)surveyResponsesCount;
- (void)_addNoFlagsSurveyResponse:(id)arg1;
- (void)addSurveyResponse:(id)arg1;
- (void)clearSurveyResponses;
@property(retain, nonatomic) NSMutableArray *surveyResponses;
- (void)_readSurveyResponses;
@property(retain, nonatomic) NSString *comments;
@property(readonly, nonatomic) _Bool hasComments;
- (void)_readComments;
@property(retain, nonatomic) GEORPTimestamp *postedAt;
@property(readonly, nonatomic) _Bool hasPostedAt;
- (void)_readPostedAt;
@property(retain, nonatomic) GEORPPostedBy *postedBy;
@property(readonly, nonatomic) _Bool hasPostedBy;
- (void)_readPostedBy;
@property(retain, nonatomic) NSString *uuid;
@property(readonly, nonatomic) _Bool hasUuid;
- (void)_readUuid;

@end
