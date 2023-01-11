//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _TtC17KnowledgeGraphKit27MAMutableFloatVectorWrapper;

@interface MAMutableFloatVector
{
}

+ (Class)wrapperClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)elementwiseRaiseToExponent:(float)arg1;
- (void)elementwiseMultiplyByVector:(id)arg1;
- (void)divideByScalar:(float)arg1;
- (void)multiplyByScalar:(float)arg1;
- (void)addScalar:(float)arg1;
- (void)subtractScalar:(float)arg1;
- (void)addVector:(id)arg1;
- (void)subtractVector:(id)arg1;
- (void)setFloat:(float)arg1 atIndex:(long long)arg2;
- (void)appendArray:(id)arg1;
- (void)appendVector:(id)arg1;
- (void)appendDoubles:(const double *)arg1 count:(long long)arg2;
- (void)appendFloats:(const float *)arg1 count:(long long)arg2;
- (void)appendFloat:(float)arg1;

// Remaining properties
@property(readonly, nonatomic) _TtC17KnowledgeGraphKit27MAMutableFloatVectorWrapper *wrapper; // @dynamic wrapper;

@end
