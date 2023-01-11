//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBMediaItemValue-Protocol.h>

@class NSArray, NSString, _INPBImageValue, _INPBPrivateMediaItemValueData, _INPBValueMetadata;

@interface _INPBMediaItemValue : PBCodable <_INPBMediaItemValue, NSSecureCoding, NSCopying>
{
    CDStruct_f953fb60 _has;
    int _type;
    NSString *_artist;
    _INPBImageValue *_artwork;
    NSString *_assetInfo;
    NSString *_identifier;
    NSArray *_namedEntities;
    _INPBPrivateMediaItemValueData *_privateMediaItemValueData;
    NSString *_title;
    NSArray *_topics;
    _INPBValueMetadata *_valueMetadata;
}

+ (_Bool)supportsSecureCoding;
+ (Class)topicsType;
+ (Class)namedEntitiesType;
- (void).cxx_destruct;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) _INPBPrivateMediaItemValueData *privateMediaItemValueData; // @synthesize privateMediaItemValueData=_privateMediaItemValueData;
@property(copy, nonatomic) NSArray *namedEntities; // @synthesize namedEntities=_namedEntities;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *assetInfo; // @synthesize assetInfo=_assetInfo;
@property(retain, nonatomic) _INPBImageValue *artwork; // @synthesize artwork=_artwork;
@property(copy, nonatomic) NSString *artist; // @synthesize artist=_artist;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasValueMetadata;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
- (id)topicsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long topicsCount;
- (void)addTopics:(id)arg1;
- (void)clearTopics;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasPrivateMediaItemValueData;
- (id)namedEntitiesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long namedEntitiesCount;
- (void)addNamedEntities:(id)arg1;
- (void)clearNamedEntities;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasAssetInfo;
@property(readonly, nonatomic) _Bool hasArtwork;
@property(readonly, nonatomic) _Bool hasArtist;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
