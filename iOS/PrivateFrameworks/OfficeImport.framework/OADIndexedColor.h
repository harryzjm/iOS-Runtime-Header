//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OADIndexedColor
{
    unsigned long long mIndex;
}

+ (id)indexedColorWithIndex:(unsigned long long)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)colorFromPalette:(id)arg1;
- (unsigned long long)index;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIndex:(unsigned long long)arg1;

@end
