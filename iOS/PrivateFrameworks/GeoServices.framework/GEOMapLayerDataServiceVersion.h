//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOMapLayerDataServiceVersion : PBCodable <NSCopying>
{
    unsigned int _dataVersion;
    unsigned int _formatVersion;
    unsigned int _patchVersion;
    struct {
        unsigned int dataVersion:1;
        unsigned int formatVersion:1;
        unsigned int patchVersion:1;
    } _has;
}

@property(nonatomic) unsigned int patchVersion; // @synthesize patchVersion=_patchVersion;
@property(nonatomic) unsigned int formatVersion; // @synthesize formatVersion=_formatVersion;
@property(nonatomic) unsigned int dataVersion; // @synthesize dataVersion=_dataVersion;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasPatchVersion;
@property(nonatomic) _Bool hasFormatVersion;
@property(nonatomic) _Bool hasDataVersion;

@end

