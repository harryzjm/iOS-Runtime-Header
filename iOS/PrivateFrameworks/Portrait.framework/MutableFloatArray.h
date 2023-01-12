//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MutableFloatArray
{
    float *_start;
    unsigned long long _capacity;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addConstant:(float)arg1;
- (void)removeFromStart:(unsigned long long)arg1;
- (void)appendFloat:(float)arg1;
- (void)setFloats:(const float *)arg1 inRange:(struct _NSRange)arg2;
- (void)setFloat:(float)arg1 inRange:(struct _NSRange)arg2;
- (void)setFloat:(float)arg1 atIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) float *mutableFloats;
- (const float *)floats;
- (float)floatAtIndex:(unsigned long long)arg1;
- (id)initWithFloat:(float)arg1 repeatCount:(unsigned long long)arg2 capacity:(unsigned long long)arg3;
- (id)initWithZeros:(unsigned long long)arg1 capacity:(unsigned long long)arg2;
- (id)initWithZeros:(unsigned long long)arg1;
- (id)initWithCount:(unsigned long long)arg1 capacity:(unsigned long long)arg2;
- (id)initWithCount:(unsigned long long)arg1;

@end
