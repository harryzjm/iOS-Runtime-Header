//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIDynamicSystemColor
{
    NSDictionary *_colorsByThemeKey;
}

- (void).cxx_destruct;
- (id)description;
- (id)_resolvedColorWithTraitCollection:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setColorsByThemeKey:(id)arg1;
- (id)_colorsByThemeKey;
- (id)initWithName:(id)arg1 colorsByThemeKey:(id)arg2;

@end
