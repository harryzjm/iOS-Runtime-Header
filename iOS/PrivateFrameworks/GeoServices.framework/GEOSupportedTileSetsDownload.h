//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEODownloadMetadata, GEOSupportedTileSets;

__attribute__((visibility("hidden")))
@interface GEOSupportedTileSetsDownload : PBCodable <NSCopying>
{
    GEODownloadMetadata *_metadata;
    GEOSupportedTileSets *_tileSets;
}

@property(retain, nonatomic) GEODownloadMetadata *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) GEOSupportedTileSets *tileSets; // @synthesize tileSets=_tileSets;
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

@end

