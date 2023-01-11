//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GKLinearCongruentialRandomSource
{
    unsigned long long _seed;
}

+ (_Bool)supportsSecureCoding;
- (_Bool)nextBool;
- (float)nextUniform;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;
- (long long)nextInt;
- (unsigned long long)nextBits:(int)arg1;
@property(nonatomic) unsigned long long seed;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSeed:(unsigned long long)arg1;
- (id)init;

@end

