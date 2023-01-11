//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString;

__attribute__((visibility("hidden")))
@interface GEORouteInformation : PBCodable <NSCopying>
{
    GEOFormattedString *_detail;
    GEOFormattedString *_duration;
}

@property(retain, nonatomic) GEOFormattedString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) GEOFormattedString *duration; // @synthesize duration=_duration;
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
@property(readonly, nonatomic) _Bool hasDetail;
@property(readonly, nonatomic) _Bool hasDuration;

@end

