//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBNamedProtobufMessage-Protocol.h>

@class NSData, NSString;

@interface _SFPBNamedProtobufMessage : PBCodable <_SFPBNamedProtobufMessage, NSSecureCoding>
{
    NSData *_protobufMessageData;
    NSString *_protobufMessageName;
}

@property(copy, nonatomic) NSString *protobufMessageName; // @synthesize protobufMessageName=_protobufMessageName;
@property(copy, nonatomic) NSData *protobufMessageData; // @synthesize protobufMessageData=_protobufMessageData;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

