//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUIntToIntDictionaryKeyEnumerator : NSObject
{
    long long **_keys;
    unsigned long long _count;
    unsigned long long _index;
}

- (long long)nextKey;
- (void)dealloc;
- (id)initWithIntegerKeyDictionary:(id)arg1;

@end

