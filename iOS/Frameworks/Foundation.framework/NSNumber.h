//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface NSNumber
{
}

+ (_Bool)supportsSecureCoding;
+ (id)numberWithBool:(_Bool)arg1;
+ (id)numberWithDouble:(double)arg1;
+ (id)numberWithFloat:(float)arg1;
+ (id)numberWithUnsignedLongLong:(unsigned long long)arg1;
+ (id)numberWithLongLong:(long long)arg1;
+ (id)numberWithUnsignedLong:(unsigned long long)arg1;
+ (id)numberWithLong:(long long)arg1;
+ (id)numberWithUnsignedInteger:(unsigned long long)arg1;
+ (id)numberWithInteger:(long long)arg1;
+ (id)numberWithUnsignedInt:(unsigned int)arg1;
+ (id)numberWithInt:(int)arg1;
+ (id)numberWithUnsignedShort:(unsigned short)arg1;
+ (id)numberWithShort:(short)arg1;
+ (id)numberWithUnsignedChar:(unsigned char)arg1;
+ (id)numberWithChar:(BOOL)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
- (_Bool)_getCString:(char *)arg1 length:(int)arg2 multiplier:(double)arg3;
- (id)initWithBool:(_Bool)arg1;
- (id)initWithDouble:(double)arg1;
- (id)initWithFloat:(float)arg1;
- (id)initWithUnsignedLongLong:(unsigned long long)arg1;
- (id)initWithLongLong:(long long)arg1;
- (id)initWithUnsignedLong:(unsigned long long)arg1;
- (id)initWithLong:(long long)arg1;
- (id)initWithUnsignedInteger:(unsigned long long)arg1;
- (id)initWithInteger:(long long)arg1;
- (id)initWithUnsignedInt:(unsigned int)arg1;
- (id)initWithInt:(int)arg1;
- (id)initWithUnsignedShort:(unsigned short)arg1;
- (id)initWithShort:(short)arg1;
- (id)initWithUnsignedChar:(unsigned char)arg1;
- (id)initWithChar:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_allowsDirectEncoding;
- (Class)classForCoder;
@property(readonly, copy) NSString *stringValue;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToNumber:(id)arg1;
- (long long)compare:(id)arg1;
@property(readonly) unsigned long long unsignedLongLongValue;
@property(readonly) long long longLongValue;
@property(readonly) float floatValue;
@property(readonly) double doubleValue;
@property(readonly) unsigned long long unsignedLongValue;
@property(readonly) long long longValue;
@property(readonly) unsigned int unsignedIntValue;
@property(readonly) int intValue;
@property(readonly) unsigned short unsignedShortValue;
@property(readonly) short shortValue;
@property(readonly) unsigned char unsignedCharValue;
@property(readonly) BOOL charValue;
@property(readonly) unsigned long long unsignedIntegerValue;
@property(readonly) long long integerValue;
@property(readonly) _Bool boolValue;
- (long long)_reverseCompare:(id)arg1;
- (unsigned char)_getValue:(void *)arg1 forType:(long long)arg2;
- (long long)_cfNumberType;
- (unsigned long long)_cfTypeID;
- (_Bool)isNSNumber__;
@property(readonly) CDStruct_5fe7aead decimalValue;

@end

