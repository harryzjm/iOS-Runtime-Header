//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ObjectCacheByCString : NSObject
{
    struct __CFDictionary *_dictionary;
}

- (id)getObjectForCStringKey:(char *)arg1;
- (void)setObject:(id)arg1 forCStringKey:(char *)arg2;
- (void)dealloc;
- (id)init;

@end

