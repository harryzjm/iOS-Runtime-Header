//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TCEnumerationMultiMap : NSObject
{
    struct __CFDictionary *m_valueToString;
    struct __CFDictionary *m_stringToValue;
    _Bool m_caseSensitive;
}

- (id)stringForValue:(int)arg1;
- (long long)valueForString:(id)arg1;
- (void)dealloc;
- (id)initWithStructs:(const struct TCEnumerationStruct *)arg1 count:(int)arg2 caseSensitive:(_Bool)arg3;
- (id)initWithStructs:(const struct TCEnumerationStruct *)arg1 count:(int)arg2;

@end

