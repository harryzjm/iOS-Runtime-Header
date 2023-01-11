//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject-Protocol.h>

@class HMFClassRegistry, HMFUnfairLock, NSArray, NSMutableDictionary, NSString;

@interface HMFPreferences <HMFObject>
{
    NSMutableDictionary *_preferences;
    HMFUnfairLock *_lock;
    HMFClassRegistry *_classRegistry;
}

+ (void)setDefaultValue:(id)arg1 forPreferenceKey:(id)arg2;
+ (id)defaultValueForPreferenceKey:(id)arg1;
+ (id)defaultValues;
+ (void)setPreferenceClass:(Class)arg1 forPreferenceKey:(id)arg2;
+ (Class)preferenceClassForPreferenceKey:(id)arg1;
+ (id)classRegistry;
+ (id)sharedPreferences;
@property(readonly) HMFClassRegistry *classRegistry; // @synthesize classRegistry=_classRegistry;
@property(readonly, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
- (void).cxx_destruct;
- (id)preferenceForKey:(id)arg1;
@property(readonly, copy) NSArray *preferences;
- (void)setPreferenceClass:(Class)arg1 forPreferenceKey:(id)arg2;
- (Class)preferenceClassForPreferenceKey:(id)arg1;
@property(readonly, copy) NSString *propertyDescription;
- (id)init;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

