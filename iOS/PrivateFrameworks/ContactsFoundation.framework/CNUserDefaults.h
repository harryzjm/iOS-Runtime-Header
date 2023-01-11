//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol CNPrimitiveUserDefaults;

@interface CNUserDefaults : NSObject
{
    id <CNPrimitiveUserDefaults> _primitiveDefaults;
    NSDictionary *_registeredDefaults;
}

+ (id)preferencesWithApplicationID:(id)arg1;
+ (id)standardPreferences;
+ (id)inMemoryPreferences;
- (void).cxx_destruct;
@property(copy) NSDictionary *registeredDefaults; // @synthesize registeredDefaults=_registeredDefaults;
- (_Bool)userHasOptedInToPreference:(id)arg1;
- (_Bool)userHasOptedOutOfPreference:(id)arg1;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (double)doubleForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (long long)integerForKey:(id)arg1 keyExists:(_Bool *)arg2;
- (long long)integerForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1 keyExists:(_Bool *)arg2;
- (_Bool)boolForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setupAutosync;
- (_Bool)synchronize;
- (void)primitiveRemoveObjectForKey:(id)arg1;
- (_Bool)primitiveBoolValueForKey:(id)arg1 keyExists:(_Bool *)arg2;
- (long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(_Bool *)arg2;
- (void)setPrimitiveObject:(id)arg1 forKey:(id)arg2;
- (id)primitiveObjectForKey:(id)arg1;
- (id)primitiveDefaults;
- (void)registerDefaults:(id)arg1;
- (id)initWithPrimitiveDefaults:(id)arg1;
- (id)initWithApplicationID:(id)arg1;

@end
