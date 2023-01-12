//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (SUCoreDictionary)
+ (id)safeSummaryForDictionary:(id)arg1;
+ (id)_safeValueName:(id)arg1 ofMaxFieldLength:(unsigned long long)arg2 providingSubstitutionMap:(id)arg3;
+ (id)_safeKeyName:(id)arg1 paddedToLength:(unsigned long long)arg2;
- (void)_logReturningNil:(id)arg1 forKey:(id)arg2 valueType:(id)arg3 fromBase:(id)arg4 withKeyDescription:(id)arg5;
- (void)_logReturningNil:(id)arg1 forKey:(id)arg2 valueType:(id)arg3;
- (void)_logReturningDefault:(id)arg1 forKey:(id)arg2 valueType:(id)arg3 defaultValueName:(id)arg4;
- (id)safeSummary;
- (id)safeSubDescriptionAtNestedLevel:(unsigned long long)arg1 instanceAtLevel:(unsigned long long)arg2 withMaxValueLength:(unsigned long long)arg3 providingSubstitutionMap:(id)arg4;
- (id)_safeDescriptionWithName:(id)arg1 atNestedLevel:(unsigned long long)arg2 maxNestedLevel:(unsigned long long)arg3 showingSubLevelName:(_Bool)arg4 withMaxValueLength:(unsigned long long)arg5 providingSubstitutionMap:(id)arg6;
- (id)safeDescriptionWithName:(id)arg1 maxNestedLevel:(unsigned long long)arg2 withMaxValueLength:(unsigned long long)arg3 providingSubstitutionMap:(id)arg4;
- (id)safeDescriptionWithName:(id)arg1;
- (id)safeObjectForKey:(id)arg1 ofClass:(Class)arg2;
- (id)safeDateForKey:(id)arg1;
- (id)safeDataForKey:(id)arg1;
- (id)safeDictionaryForKey:(id)arg1 fromBase:(id)arg2 withKeyDescription:(id)arg3;
- (id)safeDictionaryForKey:(id)arg1;
- (id)safeStringForKey:(id)arg1;
- (long long)safeTriStateForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)safeTriStateForKey:(id)arg1;
- (long long)safeIntegerForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)safeIntegerForKey:(id)arg1;
- (unsigned long long)safeULLForKey:(id)arg1 defaultValue:(unsigned long long)arg2;
- (unsigned long long)safeULLForKey:(id)arg1;
- (long long)safeLLForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)safeLLForKey:(id)arg1;
- (_Bool)safeBooleanForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (_Bool)safeBooleanForKey:(id)arg1;
@end

