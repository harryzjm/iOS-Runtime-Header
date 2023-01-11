//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ECMappingContext : NSObject
{
    struct map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long>>> mIndexToMappedIndex;
    NSMutableDictionary *mSheetNameToMappedIndex;
    struct __CFDictionary *mObjectToMappingInfo;
    NSMutableArray *mMappingInfos;
}

+ (id)mappingContext;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)mappingInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)mappingInfoCount;
- (id)mappingInfoForObject:(id)arg1;
- (unsigned long long)mappedSheetIndexForSheetName:(id)arg1;
- (unsigned long long)mappedSheetIndexForSheetIndex:(unsigned long long)arg1;
- (ChVector_be6372b9 *)mappedSheetNames;
- (void)dealloc;
- (id)init;
- (void)associateMappingInfo:(id)arg1 withSheetName:(id)arg2 andSheetIndex:(unsigned long long)arg3 andObject:(id)arg4;

@end

