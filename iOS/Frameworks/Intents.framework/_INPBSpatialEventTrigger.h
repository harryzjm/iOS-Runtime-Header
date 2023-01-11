//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSpatialEventTrigger-Protocol.h>

@class NSString, _INPBLocationValue;

@interface _INPBSpatialEventTrigger : PBCodable <_INPBSpatialEventTrigger, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int event:1;
    } _has;
    int _event;
    _INPBLocationValue *_location;
}

@property(retain, nonatomic) _INPBLocationValue *location; // @synthesize location=_location;
@property(nonatomic) int event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasLocation;
- (int)StringAsEvent:(id)arg1;
- (id)eventAsString:(int)arg1;
@property(nonatomic) _Bool hasEvent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

