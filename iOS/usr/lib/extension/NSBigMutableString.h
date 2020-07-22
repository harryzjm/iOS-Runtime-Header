//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface NSBigMutableString
{
    struct {
        unsigned int isStorage:1;
        unsigned int isUnicode:1;
        unsigned int hasBOM:1;
        unsigned int swap:1;
        unsigned int immutable:1;
        unsigned int :27;
    } flags;
    unsigned long long length;
    union {
        struct {
            NSData *data;
            char *dataBytes;
        } d;
        struct {
            struct __CFStorage *storage;
        } s;
    } contents;
}

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_createSubstringWithRange:(struct _NSRange)arg1;
- (id)_newSubstringWithRange:(struct _NSRange)arg1 zone:(struct _NSZone *)arg2;
- (id)_newBigSubstringWithRange:(struct _NSRange)arg1 wantsMutable:(_Bool)arg2 zone:(struct _NSZone *)arg3;
- (id)_newSmallImmutableSubstringWithRange:(struct _NSRange)arg1 zone:(struct _NSZone *)arg2;
- (_Bool)_isCString;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (_Bool)_setData:(id)arg1 encoding:(unsigned long long)arg2;
- (_Bool)_setStorage:(struct __CFStorage *)arg1 encoding:(unsigned long long)arg2;
- (_Bool)_copyStorage:(struct __CFStorage **)arg1 encoding:(unsigned long long *)arg2;
- (_Bool)_getData:(id *)arg1 encoding:(unsigned long long *)arg2;
- (_Bool)_isMarkedAsImmutable;
- (void)_markAsImmutable;
- (void)_checkForInvalidMutationWithSelector:(SEL)arg1;
- (void)dealloc;
- (id)initWithStorage:(struct __CFStorage *)arg1 length:(unsigned long long)arg2 isUnicode:(_Bool)arg3;
- (id)initWithString:(id)arg1;

@end

