//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <DigitalTouchShared/NSCopying-Protocol.h>

@class NSData;

@interface ETPKiss : PBCodable <NSCopying>
{
    NSData *_angles;
    NSData *_delays;
    NSData *_points;
}

@property(retain, nonatomic) NSData *angles; // @synthesize angles=_angles;
@property(retain, nonatomic) NSData *points; // @synthesize points=_points;
@property(retain, nonatomic) NSData *delays; // @synthesize delays=_delays;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasAngles;
@property(readonly, nonatomic) _Bool hasPoints;
@property(readonly, nonatomic) _Bool hasDelays;

@end

