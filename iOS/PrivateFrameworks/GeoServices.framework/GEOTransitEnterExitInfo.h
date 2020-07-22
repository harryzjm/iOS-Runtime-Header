//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOTransitEnterExitInfo : PBCodable <NSCopying>
{
    unsigned int _accessPointIndex;
    unsigned int _stopIndex;
    unsigned int _transferTime;
    _Bool _displayStop;
    _Bool _uncertainArrival;
    struct {
        unsigned int accessPointIndex:1;
        unsigned int stopIndex:1;
        unsigned int transferTime:1;
        unsigned int displayStop:1;
        unsigned int uncertainArrival:1;
    } _has;
}

@property(nonatomic) _Bool uncertainArrival; // @synthesize uncertainArrival=_uncertainArrival;
@property(nonatomic) unsigned int transferTime; // @synthesize transferTime=_transferTime;
@property(nonatomic) _Bool displayStop; // @synthesize displayStop=_displayStop;
@property(nonatomic) unsigned int stopIndex; // @synthesize stopIndex=_stopIndex;
@property(nonatomic) unsigned int accessPointIndex; // @synthesize accessPointIndex=_accessPointIndex;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasUncertainArrival;
@property(nonatomic) _Bool hasTransferTime;
@property(nonatomic) _Bool hasDisplayStop;
@property(nonatomic) _Bool hasStopIndex;
@property(nonatomic) _Bool hasAccessPointIndex;

@end

