//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDCodableRoutineLocationVisit : PBCodable <NSCopying>
{
    double _entryTime;
    double _exitTime;
    struct {
        unsigned int entryTime:1;
        unsigned int exitTime:1;
    } _has;
}

@property(nonatomic) double exitTime; // @synthesize exitTime=_exitTime;
@property(nonatomic) double entryTime; // @synthesize entryTime=_entryTime;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasExitTime;
@property(nonatomic) _Bool hasEntryTime;

@end

