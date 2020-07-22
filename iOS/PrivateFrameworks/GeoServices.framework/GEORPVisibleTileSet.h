//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEORPVisibleTileSet : PBCodable <NSCopying>
{
    struct GEORPVisibleTileKey *_tileKeys;
    unsigned long long _tileKeysCount;
    unsigned long long _tileKeysSpace;
    unsigned int _identifier;
    int _style;
    struct {
        unsigned int identifier:1;
        unsigned int style:1;
    } _has;
}

@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setTileKeys:(struct GEORPVisibleTileKey *)arg1 count:(unsigned long long)arg2;
- (struct GEORPVisibleTileKey)tileKeyAtIndex:(unsigned long long)arg1;
- (void)addTileKey:(struct GEORPVisibleTileKey)arg1;
- (void)clearTileKeys;
@property(readonly, nonatomic) struct GEORPVisibleTileKey *tileKeys;
@property(readonly, nonatomic) unsigned long long tileKeysCount;
@property(nonatomic) _Bool hasIdentifier;
- (int)StringAsStyle:(id)arg1;
- (id)styleAsString:(int)arg1;
@property(nonatomic) _Bool hasStyle;
@property(nonatomic) int style; // @synthesize style=_style;
- (void)dealloc;

@end

