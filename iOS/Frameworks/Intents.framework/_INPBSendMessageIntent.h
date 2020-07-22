//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields, _INPBContact, _INPBDataString, _INPBIntentMetadata, _INPBString;

@interface _INPBSendMessageIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBString *_content;
    NSString *_conversationIdentifier;
    _INPBIntentMetadata *_intentMetadata;
    NSMutableArray *_recipients;
    _INPBContact *_sender;
    NSString *_serviceName;
    _INPBDataString *_speakableGroupName;
}

+ (Class)recipientType;
+ (id)options;
@property(retain, nonatomic) _INPBContact *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
@property(retain, nonatomic) _INPBDataString *speakableGroupName; // @synthesize speakableGroupName=_speakableGroupName;
@property(retain, nonatomic) _INPBString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSMutableArray *recipients; // @synthesize recipients=_recipients;
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
@property(readonly, nonatomic) _Bool hasSender;
@property(readonly, nonatomic) _Bool hasServiceName;
@property(readonly, nonatomic) _Bool hasConversationIdentifier;
@property(readonly, nonatomic) _Bool hasSpeakableGroupName;
@property(readonly, nonatomic) _Bool hasContent;
- (id)recipientAtIndex:(unsigned long long)arg1;
- (unsigned long long)recipientsCount;
- (void)addRecipient:(id)arg1;
- (void)clearRecipients;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

@end

