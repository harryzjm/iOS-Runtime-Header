//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOTelemetricEntity : PBCodable <NSCopying>
{
    unsigned long long _eventValue;
    NSString *_eventDetail;
    int _eventKey;
    struct {
        unsigned int eventValue:1;
        unsigned int eventKey:1;
    } _has;
}

@property(retain, nonatomic) NSString *eventDetail; // @synthesize eventDetail=_eventDetail;
@property(nonatomic) unsigned long long eventValue; // @synthesize eventValue=_eventValue;
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
@property(readonly, nonatomic) _Bool hasEventDetail;
@property(nonatomic) _Bool hasEventValue;
- (int)StringAsEventKey:(id)arg1;
- (id)eventKeyAsString:(int)arg1;
@property(nonatomic) _Bool hasEventKey;
@property(nonatomic) int eventKey; // @synthesize eventKey=_eventKey;

@end
