//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTTransport_capture, NSData, NSDictionary;

@interface GTTransportMessage_capture : NSObject
{
    NSData *_payload;
    NSDictionary *_attributes;
    GTTransport_capture *_transport;
    NSData *_encodedAttributes;
    id _decodedPayload;
    unsigned int _decodedPayloadType;
    int _kind;
    unsigned int _serial;
    unsigned int _replySerial;
    unsigned int _transportSize;
}

+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 objectPayload:(id)arg3;
+ (id)messageWithKind:(int)arg1 objectPayload:(id)arg2;
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 stringPayload:(id)arg3;
+ (id)messageWithKind:(int)arg1 stringPayload:(id)arg2;
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 plistPayload:(id)arg3;
+ (id)messageWithKind:(int)arg1 plistPayload:(id)arg2;
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 boolPayload:(_Bool)arg3;
+ (id)messageWithKind:(int)arg1 boolPayload:(_Bool)arg2;
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2 payload:(id)arg3;
+ (id)messageWithKind:(int)arg1 payload:(id)arg2;
+ (id)messageWithKind:(int)arg1 attributes:(id)arg2;
+ (id)messageWithKind:(int)arg1;
@property(readonly, nonatomic) unsigned int transportSize; // @synthesize transportSize=_transportSize;
@property(readonly, retain, nonatomic) GTTransport_capture *transport; // @synthesize transport=_transport;
@property(readonly, nonatomic) unsigned int replySerial; // @synthesize replySerial=_replySerial;
@property(readonly, nonatomic) unsigned int serial; // @synthesize serial=_serial;
@property(retain, nonatomic) NSData *encodedAttributes; // @synthesize encodedAttributes=_encodedAttributes;
@property(readonly, retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) int kind; // @synthesize kind=_kind;
- (id)objectPayload;
- (id)stringPayload;
- (id)plistPayload;
- (_Bool)boolPayload;
- (_Bool)boolForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (unsigned long long)uint64ForKey:(id)arg1;
- (unsigned int)uint32ForKey:(id)arg1;
- (id)attributeForKey:(id)arg1;
- (void)_setTransportSize:(unsigned int)arg1;
- (void)_setSerial:(unsigned int)arg1 replySerial:(unsigned int)arg2 transport:(id)arg3;
- (_Bool)hasBeenSent;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKind:(int)arg1 attributes:(id)arg2 objectPayload:(id)arg3;
- (id)initWithKind:(int)arg1 attributes:(id)arg2 stringPayload:(id)arg3;
- (id)initWithKind:(int)arg1 attributes:(id)arg2 plistPayload:(id)arg3;
- (id)initWithKind:(int)arg1 attributes:(id)arg2 boolPayload:(_Bool)arg3;
- (id)initWithKind:(int)arg1 attributes:(id)arg2 payload:(id)arg3;
- (id)init;

@end

