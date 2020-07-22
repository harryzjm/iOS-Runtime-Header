//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class ABVCardWatchdogTimer, NSArray, NSMutableData;

@interface ABVCardLexer : NSObject
{
    NSMutableData *_data;
    char *_bytes;
    unsigned long long _length;
    unsigned int _peakedPoint;
    unsigned int _cursor;
    _Bool _unicode;
    int _errorCount;
    NSArray *_activeTokenSets;
    ABVCardWatchdogTimer *_timer;
}

- (_Bool)atEOF;
- (_Bool)advancePastEOL;
- (_Bool)advancePastEOLSingle;
- (_Bool)advancePastEOLUnicode;
- (_Bool)advanceToEOL;
- (_Bool)advanceToEOLSingle;
- (_Bool)advanceToEOLUnicode;
- (_Bool)advanceToToken:(int)arg1 throughTypes:(int)arg2;
- (int)advanceToString;
- (int)advanceToSingleByteString;
- (int)advanceToUnicodeString;
- (void)advanceToPeakPoint;
- (id)nextBase64Data;
- (id)nextBase64Line:(_Bool *)arg1;
- (id)nextSingleByteBase64Line:(_Bool *)arg1;
- (id)nextUnicodeBase64Line:(_Bool *)arg1;
- (id)nextArraySeperatedByToken:(int)arg1 stoppingAt:(int)arg2 inEncoding:(unsigned long long)arg3;
- (int)tokenAtCursor;
- (id)nextStringInEncoding:(unsigned long long)arg1 quotedPrintable:(_Bool)arg2 stopTokens:(int)arg3 trim:(_Bool)arg4;
- (void)_applyNextStringInEncoding:(unsigned long long)arg1 quotedPrintable:(_Bool)arg2 stopTokens:(int)arg3 trim:(_Bool)arg4 intoString:(id)arg5;
- (_Bool)_advancePastLineFoldingSequenceIfNeeded;
- (id)nextUnicodeStringStopTokens:(int)arg1 quotedPrintable:(_Bool)arg2 trim:(_Bool)arg3;
- (id)nextSingleByteStringInEncoding:(unsigned long long)arg1 quotedPrintable:(_Bool)arg2 stopTokens:(int)arg3 trim:(_Bool)arg4;
- (_Bool)advancedPastToken:(int)arg1;
- (id)nextEscapedCharacter;
- (id)nextQuotedPrintableData;
- (int)nextTokenPeak:(_Bool)arg1;
- (int)nextTokenPeakUnicode:(_Bool)arg1 length:(int)arg2;
- (int)nextTokenPeakSingle:(_Bool)arg1 length:(int)arg2;
- (id)tokenSetForLength:(int)arg1;
- (int)errorCount;
- (unsigned int)cursor;
- (void)finalize;
- (void)dealloc;
- (id)initWithData:(id)arg1 watchdogTimer:(id)arg2;
- (id)tokenName:(int)arg1;

@end

