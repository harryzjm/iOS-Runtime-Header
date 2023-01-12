//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEOPDPlaceSummaryLayoutUnitString : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_formats;
    NSString *_symbolColor;
    NSString *_symbolName;
    NSString *_textColor;
    NSString *_value;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _serverOverrideIdentifier;
    _Bool _supportMultiLineWrapping;
    struct {
        unsigned int has_serverOverrideIdentifier:1;
        unsigned int has_supportMultiLineWrapping:1;
        unsigned int read_formats:1;
        unsigned int read_symbolColor:1;
        unsigned int read_symbolName:1;
        unsigned int read_textColor:1;
        unsigned int read_value:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)formatType;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *textColor;
@property(readonly, nonatomic) _Bool hasTextColor;
@property(retain, nonatomic) NSString *symbolColor;
@property(readonly, nonatomic) _Bool hasSymbolColor;
@property(nonatomic) _Bool hasSupportMultiLineWrapping;
@property(nonatomic) _Bool supportMultiLineWrapping;
@property(nonatomic) _Bool hasServerOverrideIdentifier;
@property(nonatomic) unsigned int serverOverrideIdentifier;
- (id)formatAtIndex:(unsigned long long)arg1;
- (unsigned long long)formatsCount;
- (void)addFormat:(id)arg1;
- (void)clearFormats;
@property(retain, nonatomic) NSMutableArray *formats;
@property(retain, nonatomic) NSString *symbolName;
@property(readonly, nonatomic) _Bool hasSymbolName;
@property(retain, nonatomic) NSString *value;
@property(readonly, nonatomic) _Bool hasValue;
- (id)initWithData:(id)arg1;
- (id)init;

@end
