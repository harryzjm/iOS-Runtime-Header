//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSString.h"

__attribute__((visibility("hidden")))
@interface _NSClStr : NSString
{
    unsigned long long length;
    unsigned short *characters;
}

- (const unsigned short *)_fastCharacterContents;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (void)dealloc;
- (id)initWithUTF8String:(const char *)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;

@end

