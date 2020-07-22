//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, TSCH3DDictionaryOfDictionary;

__attribute__((visibility("hidden")))
@interface TSCH3DSceneRenderCache : NSObject
{
    NSMutableSet *mEnabledKeys;
    TSCH3DDictionaryOfDictionary *mCache;
}

+ (id)cache;
+ (id)cacheFromScene:(id)arg1;
- (void)setCacheObject:(id)arg1 forKey:(id)arg2 cacheID:(id)arg3;
- (id)cacheObjectForKey:(id)arg1 cacheID:(id)arg2 created:(_Bool *)arg3 ifAbsent:(CDUnknownBlockType)arg4;
- (void)enableCache:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)cacheEnabledForKey:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

