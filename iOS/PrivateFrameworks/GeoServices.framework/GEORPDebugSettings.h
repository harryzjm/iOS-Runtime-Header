//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface GEORPDebugSettings : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_keywords;
    int _mode;
    struct {
        unsigned int has_mode:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)keywordsType;
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
- (id)dictionaryRepresentation;
- (id)description;
- (id)keywordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)keywordsCount;
- (void)addKeywords:(id)arg1;
- (void)clearKeywords;
@property(retain, nonatomic) NSMutableArray *keywords;
- (int)StringAsMode:(id)arg1;
- (id)modeAsString:(int)arg1;
@property(nonatomic) _Bool hasMode;
@property(nonatomic) int mode;

@end
