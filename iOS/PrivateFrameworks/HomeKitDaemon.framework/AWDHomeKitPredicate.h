//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDHomeKitPredicate : PBCodable <NSCopying>
{
    NSMutableArray *_presenceEvents;
    _Bool _containsCalendarTime;
    _Bool _containsCharacteristicValue;
    _Bool _containsSignificantTime;
    _Bool _containsSignificantTimeOffset;
    struct {
        unsigned int containsCalendarTime:1;
        unsigned int containsCharacteristicValue:1;
        unsigned int containsSignificantTime:1;
        unsigned int containsSignificantTimeOffset:1;
    } _has;
}

+ (Class)presenceEventsType;
- (void).cxx_destruct;
@property(nonatomic) _Bool containsCalendarTime; // @synthesize containsCalendarTime=_containsCalendarTime;
@property(nonatomic) _Bool containsSignificantTimeOffset; // @synthesize containsSignificantTimeOffset=_containsSignificantTimeOffset;
@property(nonatomic) _Bool containsSignificantTime; // @synthesize containsSignificantTime=_containsSignificantTime;
@property(nonatomic) _Bool containsCharacteristicValue; // @synthesize containsCharacteristicValue=_containsCharacteristicValue;
@property(retain, nonatomic) NSMutableArray *presenceEvents; // @synthesize presenceEvents=_presenceEvents;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasContainsCalendarTime;
@property(nonatomic) _Bool hasContainsSignificantTimeOffset;
@property(nonatomic) _Bool hasContainsSignificantTime;
@property(nonatomic) _Bool hasContainsCharacteristicValue;
- (id)presenceEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)presenceEventsCount;
- (void)addPresenceEvents:(id)arg1;
- (void)clearPresenceEvents;

@end
