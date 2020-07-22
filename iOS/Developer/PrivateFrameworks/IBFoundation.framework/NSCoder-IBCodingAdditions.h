//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@interface NSCoder (IBCodingAdditions)
- (double)ib_decodeDoubleForKey:(id)arg1 defaultValue:(double)arg2;
- (void)ib_encodeDouble:(double)arg1 forKey:(id)arg2 defaultValue:(double)arg3;
- (float)ib_decodeFloatForKey:(id)arg1 defaultValue:(float)arg2;
- (void)ib_encodeFloat:(float)arg1 forKey:(id)arg2 defaultValue:(float)arg3;
- (long long)ib_decodeIntegerForKey:(id)arg1 defaultValue:(long long)arg2;
- (void)ib_encodeInteger:(long long)arg1 forKey:(id)arg2 defaultValue:(long long)arg3;
- (int)ib_decodeIntForKey:(id)arg1 defaultValue:(int)arg2;
- (void)ib_encodeInt:(int)arg1 forKey:(id)arg2 defaultValue:(int)arg3;
- (_Bool)ib_decodeBoolForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (void)ib_encodeBool:(_Bool)arg1 forKey:(id)arg2 defaultValue:(_Bool)arg3;
- (id)ib_decodeObjectForKey:(id)arg1 defaultValue:(id)arg2;
- (void)ib_encodeObject:(id)arg1 forKey:(id)arg2 defaultValue:(id)arg3;
- (void)ib_encodeConditionalObject:(id)arg1 forKey:(id)arg2 defaultValue:(id)arg3;
- (struct CGRect)ib_decodeRectForKey:(id)arg1 defaultValue:(struct CGRect)arg2;
- (void)ib_encodeRect:(struct CGRect)arg1 forKey:(id)arg2 defaultValue:(struct CGRect)arg3;
- (struct CGPoint)ib_decodePointForKey:(id)arg1 defaultValue:(struct CGPoint)arg2;
- (void)ib_encodePoint:(struct CGPoint)arg1 forKey:(id)arg2 defaultValue:(struct CGPoint)arg3;
- (struct CGSize)ib_decodeSizeForKey:(id)arg1 defaultValue:(struct CGSize)arg2;
- (void)ib_encodeSize:(struct CGSize)arg1 forKey:(id)arg2 defaultValue:(struct CGSize)arg3;
- (CDStruct_c519178c)ib_decodeInsetForKey:(id)arg1 defaultValue:(CDStruct_c519178c)arg2;
- (void)ib_encodeInset:(CDStruct_c519178c)arg1 forKey:(id)arg2 defaultValue:(CDStruct_c519178c)arg3;
@end

