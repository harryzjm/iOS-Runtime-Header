//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FCKeyValueStoreClassRegistry : NSObject
{
    struct unordered_map<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>, std::__1::hash<int>, std::__1::equal_to<NTPBKeyValuePair_ValueType>, std::__1::allocator<std::__1::pair<const NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>>>> _registry;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (Class)classForValueType:(int)arg1;
- (void)registerClass:(Class)arg1;
- (id)init;

@end
