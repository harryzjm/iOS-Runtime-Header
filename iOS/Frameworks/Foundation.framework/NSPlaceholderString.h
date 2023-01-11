//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSPlaceholderString
{
}

- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3;
- (id)initWithData:(id)arg1 encoding:(unsigned long long)arg2;
- (id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(char *)arg3;
- (id)initWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 locale:(id)arg3 arguments:(char *)arg4 error:(id *)arg5;
- (id)initWithString:(id)arg1;
- (id)initWithCString:(const char *)arg1;
- (id)initWithCString:(const char *)arg1 length:(unsigned long long)arg2;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 deallocator:(CDUnknownBlockType)arg4;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(_Bool)arg4;
- (id)initWithCStringNoCopy:(char *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;
- (id)initWithCString:(const char *)arg1 encoding:(unsigned long long)arg2;
- (id)initWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned long long)arg2 deallocator:(CDUnknownBlockType)arg3;
- (id)initWithCharactersNoCopy:(unsigned short *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3;
- (id)init;
- (void)dealloc;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)autorelease;

@end
