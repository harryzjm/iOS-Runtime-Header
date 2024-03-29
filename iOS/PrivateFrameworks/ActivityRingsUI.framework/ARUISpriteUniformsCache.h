//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface ARUISpriteUniformsCache : NSObject
{
    NSCache *_cache;
}

+ (id)cacheWithLimit:(unsigned long long)arg1;
+ (id)defaultCache;
- (void).cxx_destruct;
- (void)clearCache;
- (id)uniformsForSprite:(id)arg1 renderedInContext:(id)arg2;
- (id)initWithLimit:(unsigned long long)arg1;

@end

