//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBFindDeviceAndPlaySoundIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBFindDeviceAndPlaySoundIntent : PBCodable <_INPBFindDeviceAndPlaySoundIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int isStopRequest:1;
    } _has;
    _Bool _isStopRequest;
    NSArray *_devices;
    _INPBIntentMetadata *_intentMetadata;
}

+ (_Bool)supportsSecureCoding;
+ (Class)deviceType;
- (void).cxx_destruct;
@property(nonatomic) _Bool isStopRequest; // @synthesize isStopRequest=_isStopRequest;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasIsStopRequest;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (id)deviceAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long devicesCount;
- (void)addDevice:(id)arg1;
- (void)clearDevices;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
