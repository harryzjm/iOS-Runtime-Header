//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface __NSCFBoolean
{
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (long long)compare:(id)arg1;
- (long long)_reverseCompare:(id)arg1;
- (unsigned char)_getValue:(void *)arg1 forType:(long long)arg2;
- (long long)_cfNumberType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const char *)objCType;
- (void)getValue:(void *)arg1;
- (unsigned long long)_cfTypeID;
- (_Bool)boolValue;
- (unsigned long long)unsignedIntegerValue;
- (long long)integerValue;
- (double)doubleValue;
- (float)floatValue;
- (unsigned long long)unsignedLongLongValue;
- (long long)longLongValue;
- (unsigned long long)unsignedLongValue;
- (long long)longValue;
- (unsigned int)unsignedIntValue;
- (int)intValue;
- (unsigned short)unsignedShortValue;
- (short)shortValue;
- (unsigned char)unsignedCharValue;
- (BOOL)charValue;
- (id)stringValue;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (unsigned long long)retainCount;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (oneway void)release;
- (id)retain;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToNumber:(id)arg1;

@end
