//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSSPropertyCommandObjectRegistry : NSObject
{
    struct map<int, std::__1::pair<Class, std::__1::basic_string<char>>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::pair<Class, std::__1::basic_string<char>>>>> _indexToClass;
    struct map<Class, int, std::__1::less<Class>, std::__1::allocator<std::__1::pair<const Class, int>>> _classToIndex;
}

+ (id)sharedRegistry;
+ (void)setIntializationHandler:(CDUnknownBlockType)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)indexForClass:(Class)arg1;
- (const basic_string_23d93216 *)nameForIndex:(int)arg1;
- (Class)classForIndex:(int)arg1;
- (void)registerClass:(Class)arg1 withField:(id)arg2;
- (id)init;

@end

