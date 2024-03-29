//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchGeoDecoration : PBCodable
{
    PBDataReader *_reader;
    NSMutableArray *_alternatives;
    NSString *_canonicalForm;
    NSString *_cardinalWord;
    NSString *_ordinalWord;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _isArticle;
    _Bool _isCardinal;
    _Bool _isDirection;
    _Bool _isDropped;
    _Bool _isMultiTokenDirection;
    _Bool _isMultiTokenTitle;
    _Bool _isMultiTokenType;
    _Bool _isOrdinal;
    _Bool _isPersonalName;
    _Bool _isStopWord;
    _Bool _isTitle;
    _Bool _isType;
    struct {
        unsigned int has_isArticle:1;
        unsigned int has_isCardinal:1;
        unsigned int has_isDirection:1;
        unsigned int has_isDropped:1;
        unsigned int has_isMultiTokenDirection:1;
        unsigned int has_isMultiTokenTitle:1;
        unsigned int has_isMultiTokenType:1;
        unsigned int has_isOrdinal:1;
        unsigned int has_isPersonalName:1;
        unsigned int has_isStopWord:1;
        unsigned int has_isTitle:1;
        unsigned int has_isType:1;
        unsigned int read_alternatives:1;
        unsigned int read_canonicalForm:1;
        unsigned int read_cardinalWord:1;
        unsigned int read_ordinalWord:1;
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
- (id)initWithData:(id)arg1;
- (id)init;

@end

