//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface TSTTableDataObjectKeyDict : NSObject
{
    struct hash_map<SFUtility::ObjcSharedPtr<TSTTableDataObject>, unsigned int, TSTTableDataObjectHasher, TSTTableDataObjectEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<TSTTableDataObject>, unsigned int>>> *mMap;
}

- (unsigned long long)count;
- (void)removeAllKeys;
- (void)removeKeyForObject:(id)arg1;
- (void)setKey:(unsigned int)arg1 forObject:(id)arg2;
- (unsigned int)keyForObject:(id)arg1;
- (void)dealloc;
- (id)init;

@end

