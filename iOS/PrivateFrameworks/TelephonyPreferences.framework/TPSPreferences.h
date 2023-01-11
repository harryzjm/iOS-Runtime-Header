//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TPSPreferences : NSObject
{
    NSString *_domain;
}

+ (id)sharedInstance;
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1 defaultValue:(id)arg2;
- (void)setUnsignedInteger:(unsigned long long)arg1 forKey:(id)arg2;
- (unsigned long long)unsignedIntegerForKey:(id)arg1 defaultValue:(unsigned long long)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (long long)integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (void)setNumber:(id)arg1 forKey:(id)arg2;
- (id)numberForKey:(id)arg1 defaultValue:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (void)setPreferencesValue:(id)arg1 forKey:(id)arg2 domain:(id)arg3;
- (void)setPreferencesValue:(id)arg1 forKey:(id)arg2;
- (id)preferencesValueForKey:(id)arg1 domain:(id)arg2;
- (id)preferencesValueForKey:(id)arg1;
@property(readonly, nonatomic) _Bool showSubscriptionList;
- (id)init;

@end
