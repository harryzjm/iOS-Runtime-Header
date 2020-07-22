//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSCharacterSet, NSString;

@interface SFUJsonScanner : NSObject
{
    NSString *mString;
    unsigned short *mCharacters;
    unsigned long long mLength;
    unsigned long long mOffset;
    NSCharacterSet *mWhitespaceCharacterSet;
    NSCharacterSet *mDecimalDigitCharacterSet;
}

- (id)parseObjectWithMaxDepth:(int)arg1;
- (id)parseNumber;
- (id)parseFalse;
- (id)parseTrue;
- (id)parseNull;
- (_Bool)parseConstantString:(const char *)arg1;
- (id)parseArrayWithMaxDepth:(int)arg1;
- (id)parseDictionaryWithMaxDepth:(int)arg1;
- (id)parseString;
- (void)appendCharactersInRange:(struct _NSRange)arg1 toString:(id)arg2;
- (id)parseHexCharacter;
- (void)skipWhitespace;
- (unsigned short)nextCharacter;
- (void)dealloc;
- (id)initWithString:(id)arg1;

@end

