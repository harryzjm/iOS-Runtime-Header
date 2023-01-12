//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSValue.h"

__attribute__((visibility("hidden")))
@interface NSWeakObjectValue : NSValue
{
    void *_value;
    id _object;
    _Bool _useFallback;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)weakObjectValue;
- (void)getValue:(void *)arg1 size:(unsigned long long)arg2;
- (void)getValue:(void *)arg1;
- (id)nonretainedObjectValue;
- (const char *)objCType;
- (unsigned long long)hash;
- (_Bool)isEqualToValue:(id)arg1;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end

