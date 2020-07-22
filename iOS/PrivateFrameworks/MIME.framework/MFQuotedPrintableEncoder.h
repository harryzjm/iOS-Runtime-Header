//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MFQuotedPrintableEncoder
{
    unsigned long long _line;
    unsigned long long _matchedFrom;
    unsigned char _lastHorizontalWhitespace;
    _Bool _forTextPart;
    _Bool _lastWasNewLine;
    _Bool _forHeader;
}

+ (unsigned long long)requiredSizeToEncodeHeaderBytes:(const char *)arg1 length:(unsigned long long)arg2;
@property(nonatomic) _Bool forHeader; // @synthesize forHeader=_forHeader;
@property(nonatomic) _Bool forTextPart; // @synthesize forTextPart=_forTextPart;
- (void)done;
- (long long)appendData:(id)arg1;

@end

