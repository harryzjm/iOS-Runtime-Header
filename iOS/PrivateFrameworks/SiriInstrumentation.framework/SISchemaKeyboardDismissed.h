//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SISchemaKeyboardDismissed
{
    _Bool _keyboardUsed;
    int _lengthInWords;
    int _lengthInChars;
    int _numCharsAdded;
    int _numCharsDeleted;
    int _editDistance;
    _Bool _emojiUsed;
    int _keyboardLocale;
    struct {
        unsigned int keyboardUsed:1;
        unsigned int lengthInWords:1;
        unsigned int lengthInChars:1;
        unsigned int numCharsAdded:1;
        unsigned int numCharsDeleted:1;
        unsigned int editDistance:1;
        unsigned int emojiUsed:1;
        unsigned int keyboardLocale:1;
    } _has;
}

@property(nonatomic) int keyboardLocale; // @synthesize keyboardLocale=_keyboardLocale;
@property(nonatomic) _Bool emojiUsed; // @synthesize emojiUsed=_emojiUsed;
@property(nonatomic) int editDistance; // @synthesize editDistance=_editDistance;
@property(nonatomic) int numCharsDeleted; // @synthesize numCharsDeleted=_numCharsDeleted;
@property(nonatomic) int numCharsAdded; // @synthesize numCharsAdded=_numCharsAdded;
@property(nonatomic) int lengthInChars; // @synthesize lengthInChars=_lengthInChars;
@property(nonatomic) int lengthInWords; // @synthesize lengthInWords=_lengthInWords;
@property(nonatomic) _Bool keyboardUsed; // @synthesize keyboardUsed=_keyboardUsed;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasKeyboardLocale;
@property(nonatomic) _Bool hasEmojiUsed;
@property(nonatomic) _Bool hasEditDistance;
@property(nonatomic) _Bool hasNumCharsDeleted;
@property(nonatomic) _Bool hasNumCharsAdded;
@property(nonatomic) _Bool hasLengthInChars;
@property(nonatomic) _Bool hasLengthInWords;
@property(nonatomic) _Bool hasKeyboardUsed;

@end
