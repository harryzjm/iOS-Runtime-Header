//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDBrowseCategory, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchResultsForCategoryEntry : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_9f2792e4 _placeIndexs;
    GEOPDBrowseCategory *_category;
}

@property(retain, nonatomic) GEOPDBrowseCategory *category; // @synthesize category=_category;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setPlaceIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)placeIndexAtIndex:(unsigned long long)arg1;
- (void)addPlaceIndex:(unsigned int)arg1;
- (void)clearPlaceIndexs;
@property(readonly, nonatomic) unsigned int *placeIndexs;
@property(readonly, nonatomic) unsigned long long placeIndexsCount;
@property(readonly, nonatomic) _Bool hasCategory;
- (void)dealloc;

@end

