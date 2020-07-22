//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MDLAnimatedQuaternionArray
{
    unsigned long long _elementCount;
}

@property(nonatomic) unsigned long long elementCount; // @synthesize elementCount=_elementCount;
- (unsigned long long)getDoubleQuaternionArray:(struct *)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getFloatQuaternionArray:(struct *)arg1 maxCount:(unsigned long long)arg2;
- (void)resetWithDoubleQuaternionArray:(const struct *)arg1 count:(unsigned long long)arg2 atTimes:(const double *)arg3 count:(unsigned long long)arg4;
- (void)resetWithFloatQuaternionArray:(const struct *)arg1 count:(unsigned long long)arg2 atTimes:(const double *)arg3 count:(unsigned long long)arg4;
- (unsigned long long)getDoubleQuaternionArray:(struct *)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (unsigned long long)getFloatQuaternionArray:(struct *)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (void)setDoubleQuaternionArray:(const struct *)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;
- (void)setFloatQuaternionArray:(const struct *)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2;
- (struct VtValue)defaultVtValue;
- (unsigned long long)precision;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithElementCount:(unsigned long long)arg1;

@end
