//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface __NSATSStringSegment : NSString
{
    struct __CFString *_originalString;
    long long _originalStringLength;
    CDStruct_627e0f85 _range;
    const unsigned short *_characters;
    unsigned short _buffer[128];
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (const unsigned short *)_fastCharacterContents;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (void)dealloc;
- (id)initWithOriginalString:(id)arg1 range:(struct _NSRange)arg2;
- (void)_setOriginalString:(id)arg1 range:(struct _NSRange)arg2;
- (oneway void)release;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;

@end
