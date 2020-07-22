//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FMPreferencesUtil : NSObject
{
}

+ (void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (id)objectForKey:(id)arg1 inDomain:(id)arg2 user:(id)arg3;
+ (id)objectForKey:(id)arg1 inDomain:(id)arg2;
+ (void)setData:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (id)dataForKey:(id)arg1 inDomain:(id)arg2 user:(id)arg3;
+ (id)dataForKey:(id)arg1 inDomain:(id)arg2;
+ (void)setArray:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (id)arrayForKey:(id)arg1 inDomain:(id)arg2 user:(id)arg3;
+ (id)arrayForKey:(id)arg1 inDomain:(id)arg2;
+ (void)setDictionary:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (id)dictionaryForKey:(id)arg1 inDomain:(id)arg2 user:(id)arg3;
+ (id)dictionaryForKey:(id)arg1 inDomain:(id)arg2;
+ (void)setDate:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (id)dateForKey:(id)arg1 inDomain:(id)arg2 user:(id)arg3;
+ (id)dateForKey:(id)arg1 inDomain:(id)arg2;
+ (void)setString:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (id)stringForKey:(id)arg1 inDomain:(id)arg2 user:(id)arg3;
+ (id)stringForKey:(id)arg1 inDomain:(id)arg2;
+ (void)setInteger:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (long long)integerForKey:(id)arg1 inDomain:(id)arg2 user:(id)arg3;
+ (long long)integerForKey:(id)arg1 inDomain:(id)arg2;
+ (void)setBool:(_Bool)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (_Bool)boolForKey:(id)arg1 inDomain:(id)arg2 user:(id)arg3;
+ (_Bool)boolForKey:(id)arg1 inDomain:(id)arg2;
+ (void)removeKey:(id)arg1 inDomain:(id)arg2;
+ (void)synchronizeDomain:(id)arg1 user:(id)arg2;
+ (void)synchronizeDomain:(id)arg1;

@end

