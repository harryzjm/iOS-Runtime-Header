//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@interface CLPCdmaCellNeighbor : PBCodable <NSCopying>
{
    int _channel;
    int _ecn0;
    int _pilotPhase;
    int _pnoffset;
    int _rscp;
    struct {
        unsigned int channel:1;
        unsigned int ecn0:1;
        unsigned int pilotPhase:1;
        unsigned int pnoffset:1;
        unsigned int rscp:1;
    } _has;
}

@property(nonatomic) int channel; // @synthesize channel=_channel;
@property(nonatomic) int rscp; // @synthesize rscp=_rscp;
@property(nonatomic) int ecn0; // @synthesize ecn0=_ecn0;
@property(nonatomic) int pilotPhase; // @synthesize pilotPhase=_pilotPhase;
@property(nonatomic) int pnoffset; // @synthesize pnoffset=_pnoffset;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasChannel;
@property(nonatomic) _Bool hasRscp;
@property(nonatomic) _Bool hasEcn0;
@property(nonatomic) _Bool hasPilotPhase;
@property(nonatomic) _Bool hasPnoffset;

@end

