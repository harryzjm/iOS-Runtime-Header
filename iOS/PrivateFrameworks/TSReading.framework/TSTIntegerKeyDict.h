//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSTIntegerKeyDict : NSObject
{
    struct hash_map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, TSTIntHasher, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject>>>> *mMap;
}

- (id)allValues;
- (long long)count;
- (void)transformWithFunction:(CDUnknownFunctionPointerType)arg1 withState:(void *)arg2;
- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 withState:(void *)arg2 andState:(void *)arg3;
- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 withState:(void *)arg2;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(unsigned int)arg1;
- (void)removeFirstObject;
- (void)setObject:(id)arg1 forKey:(unsigned int)arg2;
- (id)objectForKey:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end

