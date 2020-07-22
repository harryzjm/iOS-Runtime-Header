//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBContactList, _INPBDataStringList, _INPBDateTimeRange, _INPBIntentMetadata, _INPBStringList;

@interface _INPBSearchForMessagesIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _attributes;
    _INPBDateTimeRange *_dateTimeRange;
    _INPBStringList *_identifier;
    _INPBIntentMetadata *_intentMetadata;
    _INPBStringList *_notificationIdentifier;
    _INPBContactList *_recipient;
    _INPBStringList *_searchTerm;
    _INPBContactList *_sender;
    _INPBDataStringList *_speakableGroupName;
}

+ (id)options;
@property(retain, nonatomic) _INPBDataStringList *speakableGroupName; // @synthesize speakableGroupName=_speakableGroupName;
@property(retain, nonatomic) _INPBStringList *notificationIdentifier; // @synthesize notificationIdentifier=_notificationIdentifier;
@property(retain, nonatomic) _INPBStringList *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) _INPBDateTimeRange *dateTimeRange; // @synthesize dateTimeRange=_dateTimeRange;
@property(retain, nonatomic) _INPBStringList *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) _INPBContactList *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) _INPBContactList *recipient; // @synthesize recipient=_recipient;
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
@property(readonly, nonatomic) _Bool hasSpeakableGroupName;
@property(readonly, nonatomic) _Bool hasNotificationIdentifier;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasDateTimeRange;
- (int)StringAsAttributes:(id)arg1;
- (id)attributesAsString:(int)arg1;
- (void)setAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (int)attributeAtIndex:(unsigned long long)arg1;
- (void)addAttribute:(int)arg1;
- (void)clearAttributes;
@property(readonly, nonatomic) int *attributes;
@property(readonly, nonatomic) unsigned long long attributesCount;
@property(readonly, nonatomic) _Bool hasSearchTerm;
@property(readonly, nonatomic) _Bool hasSender;
@property(readonly, nonatomic) _Bool hasRecipient;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (void)dealloc;

@end

