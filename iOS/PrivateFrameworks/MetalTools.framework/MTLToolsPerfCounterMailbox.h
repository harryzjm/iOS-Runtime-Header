//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MTLToolsPerfCounterMailbox : NSObject
{
    void *_requester;
    struct vector<std::__1::pair<NSData *, unsigned long>, std::__1::allocator<std::__1::pair<NSData *, unsigned long>>> _data;
    struct __wrap_iter<std::__1::pair<NSData *, unsigned long>*> {
        struct pair<NSData *, unsigned long> *__i;
    } _iterator;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)extractDataAndNumSamples:(unsigned long long *)arg1 forRequester:(void *)arg2 isLast:(_Bool *)arg3;
- (void)insertData:(id)arg1 andNumSamples:(unsigned long long)arg2 forRequester:(void *)arg3;

@end
