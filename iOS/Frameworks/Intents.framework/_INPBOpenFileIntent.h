//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields, _INPBIntentMetadata, _INPBString;

@interface _INPBOpenFileIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBString *_appId;
    _INPBString *_entityName;
    int _entityType;
    _INPBIntentMetadata *_intentMetadata;
    NSMutableArray *_properties;
    int _scope;
    _INPBString *_scopeEntityName;
    CDStruct_5a81f70e _has;
}

+ (Class)propertiesType;
+ (id)options;
@property(retain, nonatomic) _INPBString *scopeEntityName; // @synthesize scopeEntityName=_scopeEntityName;
@property(retain, nonatomic) NSMutableArray *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) _INPBString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) _INPBString *entityName; // @synthesize entityName=_entityName;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasScopeEntityName;
- (int)StringAsScope:(id)arg1;
- (id)scopeAsString:(int)arg1;
@property(nonatomic) _Bool hasScope;
@property(nonatomic) int scope; // @synthesize scope=_scope;
- (id)propertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)propertiesCount;
- (void)addProperties:(id)arg1;
- (void)clearProperties;
@property(readonly, nonatomic) _Bool hasAppId;
@property(readonly, nonatomic) _Bool hasEntityName;
- (int)StringAsEntityType:(id)arg1;
- (id)entityTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasEntityType;
@property(nonatomic) int entityType; // @synthesize entityType=_entityType;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

@end

