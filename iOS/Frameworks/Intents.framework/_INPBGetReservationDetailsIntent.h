//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBGetReservationDetailsIntent-Protocol.h>

@class NSArray, NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBGetReservationDetailsIntent : PBCodable <_INPBGetReservationDetailsIntent, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBIntentMetadata *_intentMetadata;
    _INPBDataString *_reservationContainerReference;
    NSArray *_reservationItemReferences;
}

+ (_Bool)supportsSecureCoding;
+ (Class)reservationItemReferencesType;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *reservationItemReferences; // @synthesize reservationItemReferences=_reservationItemReferences;
@property(retain, nonatomic) _INPBDataString *reservationContainerReference; // @synthesize reservationContainerReference=_reservationContainerReference;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)reservationItemReferencesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long reservationItemReferencesCount;
- (void)addReservationItemReferences:(id)arg1;
- (void)clearReservationItemReferences;
@property(readonly, nonatomic) _Bool hasReservationContainerReference;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
