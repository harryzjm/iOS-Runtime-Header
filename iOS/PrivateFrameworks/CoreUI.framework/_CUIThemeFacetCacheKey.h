//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CUIThemeFacetCacheKey : NSObject
{
    struct _renditionkeytoken keyList[22];
    long long themeIndex;
    unsigned long long hashPrecalc;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithKeyList:(const struct _renditionkeytoken *)arg1 themeIndex:(long long)arg2;
- (unsigned long long)hash64;

@end
