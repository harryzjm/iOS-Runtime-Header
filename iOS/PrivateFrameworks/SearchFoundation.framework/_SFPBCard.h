//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBCard-Protocol.h>

@class NSArray, NSData, NSString, _SFPBURL;

@interface _SFPBCard : PBCodable <_SFPBCard, NSSecureCoding>
{
    _Bool _flexibleSectionOrder;
    int _type;
    int _source;
    NSString *_title;
    NSArray *_cardSections;
    NSData *_intentMessageData;
    NSString *_intentMessageName;
    NSData *_intentResponseMessageData;
    NSString *_intentResponseMessageName;
    NSArray *_dismissalCommands;
    NSString *_cardId;
    NSString *_contextReferenceIdentifier;
    _SFPBURL *_urlValue;
    NSData *_entityIdentifier;
    NSString *_resultIdentifier;
    unsigned long long _queryId;
    NSString *_fbr;
    NSArray *_entityProtobufMessages;
}

@property(copy, nonatomic) NSArray *entityProtobufMessages; // @synthesize entityProtobufMessages=_entityProtobufMessages;
@property(nonatomic) _Bool flexibleSectionOrder; // @synthesize flexibleSectionOrder=_flexibleSectionOrder;
@property(copy, nonatomic) NSString *fbr; // @synthesize fbr=_fbr;
@property(nonatomic) unsigned long long queryId; // @synthesize queryId=_queryId;
@property(copy, nonatomic) NSString *resultIdentifier; // @synthesize resultIdentifier=_resultIdentifier;
@property(copy, nonatomic) NSData *entityIdentifier; // @synthesize entityIdentifier=_entityIdentifier;
@property(nonatomic) int source; // @synthesize source=_source;
@property(retain, nonatomic) _SFPBURL *urlValue; // @synthesize urlValue=_urlValue;
@property(copy, nonatomic) NSString *contextReferenceIdentifier; // @synthesize contextReferenceIdentifier=_contextReferenceIdentifier;
@property(copy, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(copy, nonatomic) NSArray *dismissalCommands; // @synthesize dismissalCommands=_dismissalCommands;
@property(copy, nonatomic) NSString *intentResponseMessageName; // @synthesize intentResponseMessageName=_intentResponseMessageName;
@property(copy, nonatomic) NSData *intentResponseMessageData; // @synthesize intentResponseMessageData=_intentResponseMessageData;
@property(copy, nonatomic) NSString *intentMessageName; // @synthesize intentMessageName=_intentMessageName;
@property(copy, nonatomic) NSData *intentMessageData; // @synthesize intentMessageData=_intentMessageData;
@property(copy) NSArray *cardSections; // @synthesize cardSections=_cardSections;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)entityProtobufMessagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entityProtobufMessagesCount;
- (void)addEntityProtobufMessages:(id)arg1;
- (void)clearEntityProtobufMessages;
- (id)dismissalCommandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)dismissalCommandsCount;
- (void)addDismissalCommands:(id)arg1;
- (void)clearDismissalCommands;
- (id)cardSectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardSectionsCount;
- (void)addCardSections:(id)arg1;
- (void)clearCardSections;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

