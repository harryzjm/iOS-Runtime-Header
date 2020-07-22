//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreML/MLFeatureValueConstraint-Protocol.h>
#import <CoreML/NSCopying-Protocol.h>

@interface MLDictionaryConstraint : NSObject <MLFeatureValueConstraint, NSCopying>
{
    long long _keyType;
}

+ (id)constraintWithInt64Keys;
+ (id)constraintWithStringKeys;
@property(readonly, nonatomic) long long keyType; // @synthesize keyType=_keyType;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isAllowedValue:(id)arg1 error:(id *)arg2;
- (id)initWithKeyType:(long long)arg1;

@end
