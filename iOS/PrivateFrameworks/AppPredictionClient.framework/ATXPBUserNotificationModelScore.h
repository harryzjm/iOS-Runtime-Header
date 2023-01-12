//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AppPredictionClient/ATXJSONSerializableProtocol-Protocol.h>
#import <AppPredictionClient/NSCopying-Protocol.h>

@class NSData, NSString;

@interface ATXPBUserNotificationModelScore : PBCodable <ATXJSONSerializableProtocol, NSCopying>
{
    unsigned long long _modelVersion;
    double _score;
    double _scoreTimestamp;
    NSString *_modelId;
    NSData *_scoreInfo;
    NSString *_scoreUUID;
    struct {
        unsigned int modelVersion:1;
        unsigned int score:1;
        unsigned int scoreTimestamp:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *scoreInfo; // @synthesize scoreInfo=_scoreInfo;
@property(retain, nonatomic) NSString *scoreUUID; // @synthesize scoreUUID=_scoreUUID;
@property(nonatomic) double scoreTimestamp; // @synthesize scoreTimestamp=_scoreTimestamp;
@property(nonatomic) double score; // @synthesize score=_score;
@property(nonatomic) unsigned long long modelVersion; // @synthesize modelVersion=_modelVersion;
@property(retain, nonatomic) NSString *modelId; // @synthesize modelId=_modelId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasScoreInfo;
@property(readonly, nonatomic) _Bool hasScoreUUID;
@property(nonatomic) _Bool hasScoreTimestamp;
@property(nonatomic) _Bool hasScore;
@property(nonatomic) _Bool hasModelVersion;
@property(readonly, nonatomic) _Bool hasModelId;
- (id)jsonRepresentation;
- (id)initFromJSON:(id)arg1;

@end
