//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDEntityFilter : PBCodable
{
    PBUnknownFields *_unknownFields;
    _Bool _includeName;
    _Bool _includeSpokenNames;
    _Bool _populateAltCategory;
    struct {
        unsigned int has_includeName:1;
        unsigned int has_includeSpokenNames:1;
        unsigned int has_populateAltCategory:1;
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

@end

