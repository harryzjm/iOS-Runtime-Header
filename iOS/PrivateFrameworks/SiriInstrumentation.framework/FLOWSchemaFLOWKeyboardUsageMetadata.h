//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface FLOWSchemaFLOWKeyboardUsageMetadata
{
    unsigned int _numCharsAdded;
    unsigned int _numCharsDeleted;
    unsigned int _levenshteinEditDistance;
    _Bool _isEmojiUsed;
    struct {
        unsigned int numCharsAdded:1;
        unsigned int numCharsDeleted:1;
        unsigned int levenshteinEditDistance:1;
        unsigned int isEmojiUsed:1;
    } _has;
}

@property(nonatomic) _Bool isEmojiUsed; // @synthesize isEmojiUsed=_isEmojiUsed;
@property(nonatomic) unsigned int levenshteinEditDistance; // @synthesize levenshteinEditDistance=_levenshteinEditDistance;
@property(nonatomic) unsigned int numCharsDeleted; // @synthesize numCharsDeleted=_numCharsDeleted;
@property(nonatomic) unsigned int numCharsAdded; // @synthesize numCharsAdded=_numCharsAdded;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasIsEmojiUsed;
@property(nonatomic) _Bool hasLevenshteinEditDistance;
@property(nonatomic) _Bool hasNumCharsDeleted;
@property(nonatomic) _Bool hasNumCharsAdded;

@end
