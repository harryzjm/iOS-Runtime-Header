//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOMapKitCount : PBCodable <NSCopying>
{
    unsigned int _appCount;
    int _appType;
    int _countType;
    unsigned int _useCount;
    struct {
        unsigned int has_appCount:1;
        unsigned int has_appType:1;
        unsigned int has_countType:1;
        unsigned int has_useCount:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
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
@property(nonatomic) _Bool hasAppCount;
@property(nonatomic) unsigned int appCount;
@property(nonatomic) _Bool hasUseCount;
@property(nonatomic) unsigned int useCount;
- (int)StringAsAppType:(id)arg1;
- (id)appTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasAppType;
@property(nonatomic) int appType;
- (int)StringAsCountType:(id)arg1;
- (id)countTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasCountType;
@property(nonatomic) int countType;

@end
