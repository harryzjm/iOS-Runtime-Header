//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOSubactionMetaData : PBCodable <NSCopying>
{
    NSString *_displayedString;
    int _selectedSubactionIndex;
    int _subactionType;
    struct {
        unsigned int has_selectedSubactionIndex:1;
        unsigned int has_subactionType:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
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
@property(retain, nonatomic) NSString *displayedString;
@property(readonly, nonatomic) _Bool hasDisplayedString;
- (int)StringAsSubactionType:(id)arg1;
- (id)subactionTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasSubactionType;
@property(nonatomic) int subactionType;
@property(nonatomic) _Bool hasSelectedSubactionIndex;
@property(nonatomic) int selectedSubactionIndex;

@end
