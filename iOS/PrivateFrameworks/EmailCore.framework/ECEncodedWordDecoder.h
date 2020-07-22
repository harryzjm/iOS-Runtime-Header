//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSNumber, NSString;

@interface ECEncodedWordDecoder : NSObject
{
    NSNumber *_stringEncoding;
    NSString *_language;
    NSData *_headerData;
    long long _encodedWordEncoding;
    struct _NSRange _encodedTextRange;
}

@property(nonatomic) struct _NSRange encodedTextRange; // @synthesize encodedTextRange=_encodedTextRange;
@property(nonatomic) long long encodedWordEncoding; // @synthesize encodedWordEncoding=_encodedWordEncoding;
@property(readonly, copy, nonatomic) NSData *headerData; // @synthesize headerData=_headerData;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSNumber *stringEncoding; // @synthesize stringEncoding=_stringEncoding;
- (void).cxx_destruct;
- (void)_enumerateQByteRangesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)_decodeQEncodedTextToData:(id)arg1;
- (_Bool)_decodeBEncodedTextToData:(id)arg1;
- (_Bool)decodeEncodedTextToData:(id)arg1;
- (id)_encodedWordLanguageDelimiter;
- (id)_encodedWordDelimiter;
- (id)_encodedWordEndSequence;
- (id)_lineSeparator;
- (id)_encodedWordStartSequence;
- (struct _NSRange)identifyRangeOfEncodedWordAtIndex:(unsigned long long)arg1;
- (id)init;
- (id)initWithHeaderData:(id)arg1;

@end
