//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSCH3DBarResourceCacheKey : NSObject
{
    struct BarExtrusionSetting _setting;
}

+ (id)keyWithExtrusionSetting:(const struct BarExtrusionSetting *)arg1;
- (id).cxx_construct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithExtrusionSetting:(const struct BarExtrusionSetting *)arg1;

@end

