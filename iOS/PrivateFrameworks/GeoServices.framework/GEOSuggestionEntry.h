//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOSuggestionEntry : PBCodable
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOHighlight *_textHighlights;
    unsigned long long _textHighlightsCount;
    unsigned long long _textHighlightsSpace;
    NSString *_calloutTitle;
    NSMutableArray *_displayLines;
    NSString *_iconID;
    GEOLatLng *_latlng;
    NSMutableArray *_namedFeatures;
    NSString *_searchQueryDisplayString;
    NSData *_suggestionEntryMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_textHighlights:1;
        unsigned int read_calloutTitle:1;
        unsigned int read_displayLines:1;
        unsigned int read_iconID:1;
        unsigned int read_latlng:1;
        unsigned int read_namedFeatures:1;
        unsigned int read_searchQueryDisplayString:1;
        unsigned int read_suggestionEntryMetadata:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

