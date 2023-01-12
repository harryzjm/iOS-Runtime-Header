//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSLineBreakerQueue : NSObject
{
    const void **_buf;
    unsigned long long _capacity;
    unsigned long long _start;
    unsigned long long _end;
    unsigned long long _count;
}

- (void)removeAllValues;
- (void)removeValuesBeforeIndex:(unsigned long long)arg1;
- (void)enumerateValuesWithBlock:(CDUnknownBlockType)arg1;
- (const void *)valueAtIndex:(unsigned long long)arg1;
- (void)appendValue:(const void *)arg1;
- (void)_ensureCapacity:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)description;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end

