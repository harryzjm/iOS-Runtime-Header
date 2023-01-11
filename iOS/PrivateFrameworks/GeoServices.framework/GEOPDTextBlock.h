//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTextBlock : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_text;
    NSString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    CDStruct_e54d7a96 _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (id)textBlockForPlaceData:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *text;
@property(readonly, nonatomic) _Bool hasText;
@property(retain, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool hasTitle;
- (id)initWithData:(id)arg1;
- (id)init;

@end
