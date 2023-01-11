//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GKMersenneTwisterRandomSource
{
    unsigned long long _seed;
    struct mersenne_twister_engine<unsigned long long, 64, 312, 156, 31, 13043109905998158313, 29, 6148914691236517205, 17, 8202884508482404352, 37, 18444473444759240704, 43, 6364136223846793005> _engine;
}

+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
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

