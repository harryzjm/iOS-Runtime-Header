//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBIntentSlotVocabularyConcept-Protocol.h>

@class NSArray, NSString;

@interface _INPBIntentSlotVocabularyConcept : PBCodable <_INPBIntentSlotVocabularyConcept, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int requiresUserIdentification:1;
    } _has;
    _Bool _requiresUserIdentification;
    NSString *_identifier;
    NSArray *_synonyms;
}

+ (_Bool)supportsSecureCoding;
+ (Class)synonymsType;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *synonyms; // @synthesize synonyms=_synonyms;
@property(nonatomic) _Bool requiresUserIdentification; // @synthesize requiresUserIdentification=_requiresUserIdentification;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)synonymsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long synonymsCount;
- (void)addSynonyms:(id)arg1;
- (void)clearSynonyms;
@property(nonatomic) _Bool hasRequiresUserIdentification;
@property(readonly, nonatomic) _Bool hasIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
