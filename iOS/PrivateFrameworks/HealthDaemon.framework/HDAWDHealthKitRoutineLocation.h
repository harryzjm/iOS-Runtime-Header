//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HDAWDHealthKitRoutineLocation : PBCodable <NSCopying>
{
    long long _confidenceMillis;
    long long _recentVisitCount;
    long long _uncertaintyMillis;
    int _locationType;
    NSString *_locationUUID;
    struct {
        unsigned int confidenceMillis:1;
        unsigned int recentVisitCount:1;
        unsigned int uncertaintyMillis:1;
        unsigned int locationType:1;
    } _has;
}

@property(nonatomic) long long recentVisitCount; // @synthesize recentVisitCount=_recentVisitCount;
@property(nonatomic) long long confidenceMillis; // @synthesize confidenceMillis=_confidenceMillis;
@property(nonatomic) long long uncertaintyMillis; // @synthesize uncertaintyMillis=_uncertaintyMillis;
@property(retain, nonatomic) NSString *locationUUID; // @synthesize locationUUID=_locationUUID;
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
@property(nonatomic) _Bool hasRecentVisitCount;
@property(nonatomic) _Bool hasConfidenceMillis;
@property(nonatomic) _Bool hasUncertaintyMillis;
- (int)StringAsLocationType:(id)arg1;
- (id)locationTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasLocationType;
@property(nonatomic) int locationType; // @synthesize locationType=_locationType;
@property(readonly, nonatomic) _Bool hasLocationUUID;

@end

