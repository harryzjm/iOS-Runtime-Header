//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _CPLEngineScopeCache : NSObject
{
    NSMutableDictionary *_scopeCache;
    NSMutableDictionary *_scopeByLocalIndex;
    NSMutableDictionary *_scopeByCloudIndex;
    NSMutableDictionary *_scopeByStableIndex;
    NSIndexSet *_validLocalIndexes;
    NSIndexSet *_validCloudIndexes;
}

- (void).cxx_destruct;
- (void)cacheValidCloudIndexes:(id)arg1;
- (id)validCloudIndexes;
- (void)cacheValidLocalIndexes:(id)arg1;
- (id)validLocalIndexes;
- (id)scopeWithStableIndex:(long long)arg1;
- (id)scopeWithCloudIndex:(long long)arg1;
- (id)scopeWithLocalIndex:(long long)arg1;
- (id)scopeWithIdentifier:(id)arg1;
- (void)cacheScope:(id)arg1 forScopeStorage:(id)arg2;
- (id)init;

@end

