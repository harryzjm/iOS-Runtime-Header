//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSString.h"

__attribute__((visibility("hidden")))
@interface NSPathStore2 : NSString
{
    unsigned int _lengthAndRefCount;
    unsigned short _characters[0];
}

+ (id)pathWithComponents:(id)arg1;
+ (id)pathStoreWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
- (id)stringByResolvingSymlinksInPath;
- (id)_stringByResolvingSymlinksInPathUsingCache:(_Bool)arg1;
- (id)stringByStandardizingPath;
- (id)_stringByStandardizingPathUsingCache:(_Bool)arg1;
- (id)stringByExpandingTildeInPath;
- (id)stringByAbbreviatingWithTildeInPath;
- (id)stringByAppendingPathExtension:(id)arg1;
- (id)stringByDeletingPathExtension;
- (id)pathExtension;
- (id)stringByAppendingPathComponent:(id)arg1;
- (id)stringByDeletingLastPathComponent;
- (id)lastPathComponent;
- (_Bool)isAbsolutePath;
- (id)pathComponents;
- (_Bool)isEqualToString:(id)arg1;
- (unsigned long long)hash;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const unsigned short *)_fastCharacterContents;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;

@end

