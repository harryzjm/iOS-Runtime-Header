//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBShareFileIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBShareFileIntent : PBCodable <_INPBShareFileIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int shareMode:1;
    } _has;
    int _shareMode;
    NSArray *_entityNames;
    _INPBIntentMetadata *_intentMetadata;
    NSArray *_recipients;
}

+ (Class)recipientsType;
+ (Class)entityNameType;
@property(nonatomic) int shareMode; // @synthesize shareMode=_shareMode;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(copy, nonatomic) NSArray *entityNames; // @synthesize entityNames=_entityNames;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (int)StringAsShareMode:(id)arg1;
- (id)shareModeAsString:(int)arg1;
@property(nonatomic) _Bool hasShareMode;
- (id)recipientsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long recipientsCount;
- (void)addRecipients:(id)arg1;
- (void)clearRecipients;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (id)entityNameAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long entityNamesCount;
- (void)addEntityName:(id)arg1;
- (void)clearEntityNames;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

