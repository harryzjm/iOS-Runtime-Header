//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface APDefaults : NSObject
{
}

+ (id)_valueForKey:(id)arg1 domain:(struct __CFString *)arg2;
+ (id)_valueForKey:(id)arg1;
+ (void)_setValue:(id)arg1 forKey:(id)arg2 domain:(struct __CFString *)arg3;
+ (void)_setValue:(id)arg1 forKey:(id)arg2;
+ (void)_setInteger:(long long)arg1 forKey:(id)arg2;
+ (void)_setBool:(_Bool)arg1 forKey:(id)arg2 domain:(struct __CFString *)arg3;
+ (void)_setBool:(_Bool)arg1 forKey:(id)arg2;
+ (long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 domain:(struct __CFString *)arg3;
+ (long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2;
+ (_Bool)_boolForKey:(id)arg1 defaultValue:(_Bool)arg2 domain:(struct __CFString *)arg3;
+ (_Bool)_boolForKey:(id)arg1 defaultValue:(_Bool)arg2;
+ (void)setIsRequester:(_Bool)arg1;
+ (void)setIsApprover:(_Bool)arg1;
+ (void)setAPSDevelopmentEnvironment:(_Bool)arg1;
+ (_Bool)isRequester;
+ (_Bool)isApprover;
+ (_Bool)APSDevelopmentEnvironment;

@end
