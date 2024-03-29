//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDHomeKitHomeSharing : PBCodable
{
    unsigned long long _timestamp;
    int _errorCode;
    int _responseType;
    int _stage;
    struct {
        unsigned int timestamp:1;
        unsigned int errorCode:1;
        unsigned int responseType:1;
        unsigned int stage:1;
    } _has;
}

@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsStage:(id)arg1;
- (id)stageAsString:(int)arg1;
@property(nonatomic) _Bool hasStage;
@property(nonatomic) int stage; // @synthesize stage=_stage;
- (int)StringAsResponseType:(id)arg1;
- (id)responseTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasResponseType;
@property(nonatomic) int responseType; // @synthesize responseType=_responseType;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasTimestamp;

@end

