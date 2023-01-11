//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPSMatrixSolveTriangular;

@interface MPSMatrixSolveLU
{
    MPSMatrixSolveTriangular *_trsmU;
    MPSMatrixSolveTriangular *_trsmL;
    _Bool _transpose;
    unsigned long long _order;
    unsigned long long _numberOfRightHandSides;
}

+ (const struct MPSLibraryInfo *)libraryInfo:(struct MPSDevice *)arg1;
@property(nonatomic) unsigned long long numberOfRightHandSides; // @synthesize numberOfRightHandSides=_numberOfRightHandSides;
@property(nonatomic) unsigned long long order; // @synthesize order=_order;
@property(readonly, nonatomic) _Bool transpose; // @synthesize transpose=_transpose;
- (void)dealloc;
- (void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 rightHandSideMatrix:(id)arg3 pivotIndices:(id)arg4 solutionMatrix:(id)arg5;
- (id)initWithDevice:(id)arg1 transpose:(_Bool)arg2 order:(unsigned long long)arg3 numberOfRightHandSides:(unsigned long long)arg4;

@end
