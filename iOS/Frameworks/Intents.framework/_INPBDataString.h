//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBDataString-Protocol.h>

@class NSArray, NSString;

@interface _INPBDataString : PBCodable <_INPBDataString, NSSecureCoding, NSCopying>
{
    struct _has;
    NSArray *_alternatives;
    NSString *_localizedValue;
    NSString *_pronunciationHint;
    NSString *_vocabularyIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (Class)alternativesType;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *vocabularyIdentifier; // @synthesize vocabularyIdentifier=_vocabularyIdentifier;
@property(copy, nonatomic) NSString *pronunciationHint; // @synthesize pronunciationHint=_pronunciationHint;
@property(copy, nonatomic) NSString *localizedValue; // @synthesize localizedValue=_localizedValue;
@property(copy, nonatomic) NSArray *alternatives; // @synthesize alternatives=_alternatives;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasVocabularyIdentifier;
@property(readonly, nonatomic) _Bool hasPronunciationHint;
@property(readonly, nonatomic) _Bool hasLocalizedValue;
- (id)alternativesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long alternativesCount;
- (void)addAlternatives:(id)arg1;
- (void)clearAlternatives;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
