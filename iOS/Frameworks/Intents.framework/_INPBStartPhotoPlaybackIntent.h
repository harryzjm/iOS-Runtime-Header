//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBStartPhotoPlaybackIntent-Protocol.h>

@class NSString, _INPBContactList, _INPBDateTimeRange, _INPBIntentMetadata, _INPBLocation, _INPBString, _INPBStringList;

@interface _INPBStartPhotoPlaybackIntent : PBCodable <_INPBStartPhotoPlaybackIntent, NSSecureCoding, NSCopying>
{
    CDStruct_95bda58d _excludedAttributes;
    CDStruct_95bda58d _includedAttributes;
    struct _has;
    _INPBString *_albumName;
    _INPBContactList *_contentPerson;
    _INPBDateTimeRange *_dateCreated;
    _INPBIntentMetadata *_intentMetadata;
    _INPBStringList *_keywordString;
    _INPBLocation *_locationCreated;
    _INPBContactList *_peopleInPhoto;
    _INPBStringList *_searchTerm;
}

@property(retain, nonatomic) _INPBStringList *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) _INPBContactList *peopleInPhoto; // @synthesize peopleInPhoto=_peopleInPhoto;
@property(retain, nonatomic) _INPBLocation *locationCreated; // @synthesize locationCreated=_locationCreated;
@property(retain, nonatomic) _INPBStringList *keywordString; // @synthesize keywordString=_keywordString;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBDateTimeRange *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) _INPBContactList *contentPerson; // @synthesize contentPerson=_contentPerson;
@property(retain, nonatomic) _INPBString *albumName; // @synthesize albumName=_albumName;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasSearchTerm;
@property(readonly, nonatomic) _Bool hasPeopleInPhoto;
@property(readonly, nonatomic) _Bool hasLocationCreated;
@property(readonly, nonatomic) _Bool hasKeywordString;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (int)StringAsIncludedAttributes:(id)arg1;
- (id)includedAttributesAsString:(int)arg1;
- (int)includedAttributeAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long includedAttributesCount;
- (void)addIncludedAttribute:(int)arg1;
- (void)clearIncludedAttributes;
@property(readonly, nonatomic) int *includedAttributes;
- (void)setIncludedAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (int)StringAsExcludedAttributes:(id)arg1;
- (id)excludedAttributesAsString:(int)arg1;
- (int)excludedAttributeAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long excludedAttributesCount;
- (void)addExcludedAttribute:(int)arg1;
- (void)clearExcludedAttributes;
@property(readonly, nonatomic) int *excludedAttributes;
- (void)setExcludedAttributes:(int *)arg1 count:(unsigned long long)arg2;
@property(readonly, nonatomic) _Bool hasDateCreated;
@property(readonly, nonatomic) _Bool hasContentPerson;
@property(readonly, nonatomic) _Bool hasAlbumName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

