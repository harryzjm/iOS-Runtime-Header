//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOActionComponentMapEntry : PBCodable <NSCopying>
{
    CDStruct_95bda58d _placeDataComponents;
    int _actionComponent;
    struct {
        unsigned int actionComponent:1;
    } _has;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setPlaceDataComponents:(int *)arg1 count:(unsigned long long)arg2;
- (int)placeDataComponentsAtIndex:(unsigned long long)arg1;
- (void)addPlaceDataComponents:(int)arg1;
- (void)clearPlaceDataComponents;
@property(readonly, nonatomic) int *placeDataComponents;
@property(readonly, nonatomic) unsigned long long placeDataComponentsCount;
- (int)StringAsActionComponent:(id)arg1;
- (id)actionComponentAsString:(int)arg1;
@property(nonatomic) _Bool hasActionComponent;
@property(nonatomic) int actionComponent; // @synthesize actionComponent=_actionComponent;
- (void)dealloc;

@end

