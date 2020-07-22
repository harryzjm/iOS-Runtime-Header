//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDViewportInfo, NSString, PBUnknownFields;

@interface GEOPDAutocompleteParametersAddressOnly : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _maxResults;
    NSString *_query;
    GEOPDViewportInfo *_viewportInfo;
    _Bool _highlightDiff;
    CDStruct_00ef3c1e _has;
}

@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
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
@property(nonatomic) _Bool hasHighlightDiff;
@property(nonatomic) _Bool highlightDiff; // @synthesize highlightDiff=_highlightDiff;
@property(nonatomic) _Bool hasMaxResults;
@property(nonatomic) int maxResults; // @synthesize maxResults=_maxResults;
@property(readonly, nonatomic) _Bool hasViewportInfo;
@property(readonly, nonatomic) _Bool hasQuery;

@end

