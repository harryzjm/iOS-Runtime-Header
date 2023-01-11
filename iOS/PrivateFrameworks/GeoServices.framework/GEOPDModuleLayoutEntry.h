//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDModuleLayoutEntry : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_applicationIds;
    NSString *_debugLayoutId;
    NSMutableArray *_modules;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _platformType;
    struct {
        unsigned int has_platformType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_applicationIds:1;
        unsigned int read_debugLayoutId:1;
        unsigned int read_modules:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)modulesType;
+ (Class)applicationIdType;
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
- (id)modulesAtIndex:(unsigned long long)arg1;
- (unsigned long long)modulesCount;
- (void)addModules:(id)arg1;
- (void)clearModules;
@property(retain, nonatomic) NSMutableArray *modules;
- (int)StringAsPlatformType:(id)arg1;
- (id)platformTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPlatformType;
@property(nonatomic) int platformType;
@property(retain, nonatomic) NSString *debugLayoutId;
@property(readonly, nonatomic) _Bool hasDebugLayoutId;
- (id)applicationIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)applicationIdsCount;
- (void)addApplicationId:(id)arg1;
- (void)clearApplicationIds;
@property(retain, nonatomic) NSMutableArray *applicationIds;
- (id)initWithData:(id)arg1;
- (id)init;

@end
