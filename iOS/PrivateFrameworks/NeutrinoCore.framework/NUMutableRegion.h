//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NUMutableRegion
{
}

- (void)applyAffineTransform:(struct CGAffineTransform)arg1 roundPolicy:(long long)arg2;
- (void)applyOrientation:(long long)arg1 imageSize:(CDStruct_912cb5d2)arg2;
- (void)shrinkBy:(CDStruct_912cb5d2)arg1 inRect:(CDStruct_996ac03c)arg2;
- (void)shrinkBy:(CDStruct_912cb5d2)arg1;
- (void)growBy:(CDStruct_912cb5d2)arg1 inRect:(CDStruct_996ac03c)arg2;
- (void)growBy:(CDStruct_912cb5d2)arg1;
- (void)setRegion:(id)arg1;
- (void)clear;
- (void)scaleBy:(struct CGPoint)arg1 withRounding:(long long)arg2;
- (void)translateBy:(CDStruct_912cb5d2)arg1;
- (void)flipInRect:(CDStruct_996ac03c)arg1;
- (void)diffWithRegion:(id)arg1;
- (void)diffWithRect:(CDStruct_996ac03c)arg1;
- (void)clipToRegion:(id)arg1;
- (void)clipToRect:(CDStruct_996ac03c)arg1;
- (void)removeRegion:(id)arg1;
- (void)addRegion:(id)arg1;
- (void)removeRect:(CDStruct_996ac03c)arg1;
- (void)addRect:(CDStruct_996ac03c)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

