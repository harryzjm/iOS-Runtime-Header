//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDModuleLayoutEntry : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_applicationIds;
    NSString *_debugLayoutId;
    NSMutableArray *_modules;
    int _platformType;
    struct {
        unsigned int platformType:1;
    } _has;
}

+ (Class)modulesType;
+ (Class)applicationIdType;
@property(retain, nonatomic) NSMutableArray *modules; // @synthesize modules=_modules;
@property(retain, nonatomic) NSString *debugLayoutId; // @synthesize debugLayoutId=_debugLayoutId;
@property(retain, nonatomic) NSMutableArray *applicationIds; // @synthesize applicationIds=_applicationIds;
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
- (id)modulesAtIndex:(unsigned long long)arg1;
- (unsigned long long)modulesCount;
- (void)addModules:(id)arg1;
- (void)clearModules;
- (int)StringAsPlatformType:(id)arg1;
- (id)platformTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPlatformType;
@property(nonatomic) int platformType; // @synthesize platformType=_platformType;
@property(readonly, nonatomic) _Bool hasDebugLayoutId;
- (id)applicationIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)applicationIdsCount;
- (void)addApplicationId:(id)arg1;
- (void)clearApplicationIds;

@end

