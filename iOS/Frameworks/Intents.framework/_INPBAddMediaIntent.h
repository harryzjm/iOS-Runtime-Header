//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBAddMediaIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBMediaDestination, _INPBMediaSearch, _INPBPrivateAddMediaIntentData;

@interface _INPBAddMediaIntent : PBCodable <_INPBAddMediaIntent, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBIntentMetadata *_intentMetadata;
    _INPBMediaDestination *_mediaDestination;
    NSArray *_mediaItems;
    _INPBMediaSearch *_mediaSearch;
    _INPBPrivateAddMediaIntentData *_privateAddMediaIntentData;
}

+ (_Bool)supportsSecureCoding;
+ (Class)mediaItemsType;
- (void).cxx_destruct;
@property(retain, nonatomic) _INPBPrivateAddMediaIntentData *privateAddMediaIntentData; // @synthesize privateAddMediaIntentData=_privateAddMediaIntentData;
@property(retain, nonatomic) _INPBMediaSearch *mediaSearch; // @synthesize mediaSearch=_mediaSearch;
@property(copy, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(retain, nonatomic) _INPBMediaDestination *mediaDestination; // @synthesize mediaDestination=_mediaDestination;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasPrivateAddMediaIntentData;
@property(readonly, nonatomic) _Bool hasMediaSearch;
- (id)mediaItemsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long mediaItemsCount;
- (void)addMediaItems:(id)arg1;
- (void)clearMediaItems;
@property(readonly, nonatomic) _Bool hasMediaDestination;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
