//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSearchCallHistoryIntent-Protocol.h>

@class NSString, _INPBContact, _INPBDateTimeRange, _INPBIntentMetadata;

@interface _INPBSearchCallHistoryIntent : PBCodable <_INPBSearchCallHistoryIntent, NSSecureCoding, NSCopying>
{
    CDStruct_95bda58d _callCapabilities;
    CDStruct_95bda58d _callTypes;
    CDStruct_95bda58d _capabilities;
    struct {
        unsigned int callType:1;
        unsigned int preferredCallProvider:1;
        unsigned int unseen:1;
    } _has;
    _Bool _unseen;
    int _callType;
    int _preferredCallProvider;
    _INPBDateTimeRange *_dateCreated;
    _INPBIntentMetadata *_intentMetadata;
    _INPBContact *_recipient;
    _INPBContact *_targetContact;
}

@property(nonatomic) _Bool unseen; // @synthesize unseen=_unseen;
@property(retain, nonatomic) _INPBContact *targetContact; // @synthesize targetContact=_targetContact;
@property(retain, nonatomic) _INPBContact *recipient; // @synthesize recipient=_recipient;
@property(nonatomic) int preferredCallProvider; // @synthesize preferredCallProvider=_preferredCallProvider;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBDateTimeRange *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(nonatomic) int callType; // @synthesize callType=_callType;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasUnseen;
@property(readonly, nonatomic) _Bool hasTargetContact;
@property(readonly, nonatomic) _Bool hasRecipient;
- (int)StringAsPreferredCallProvider:(id)arg1;
- (id)preferredCallProviderAsString:(int)arg1;
@property(nonatomic) _Bool hasPreferredCallProvider;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(readonly, nonatomic) _Bool hasDateCreated;
- (int)StringAsCapabilities:(id)arg1;
- (id)capabilitiesAsString:(int)arg1;
- (int)capabilitiesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long capabilitiesCount;
- (void)addCapabilities:(int)arg1;
- (void)clearCapabilities;
@property(readonly, nonatomic) int *capabilities;
- (void)setCapabilities:(int *)arg1 count:(unsigned long long)arg2;
- (int)StringAsCallTypes:(id)arg1;
- (id)callTypesAsString:(int)arg1;
- (int)callTypesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long callTypesCount;
- (void)addCallTypes:(int)arg1;
- (void)clearCallTypes;
@property(readonly, nonatomic) int *callTypes;
- (void)setCallTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)StringAsCallType:(id)arg1;
- (id)callTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasCallType;
- (int)StringAsCallCapabilities:(id)arg1;
- (id)callCapabilitiesAsString:(int)arg1;
- (int)callCapabilitiesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long callCapabilitiesCount;
- (void)addCallCapabilities:(int)arg1;
- (void)clearCallCapabilities;
@property(readonly, nonatomic) int *callCapabilities;
- (void)setCallCapabilities:(int *)arg1 count:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

