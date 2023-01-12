//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPSMatrixMultiplication, MPSMatrixSolveTriangular;

@interface MPSMatrixDecompositionLU
{
    MPSMatrixMultiplication *_gemmKernel;
    MPSMatrixSolveTriangular *_trsmKernel;
    unsigned long long _rows;
    unsigned long long _columns;
}

+ (const struct MPSLibraryInfo *)libraryInfo:(void *)arg1;
@property(readonly, nonatomic) unsigned long long columns; // @synthesize columns=_columns;
@property(readonly, nonatomic) unsigned long long rows; // @synthesize rows=_rows;
- (void)dealloc;
- (void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 resultMatrix:(id)arg3 pivotIndices:(id)arg4 status:(id)arg5;
- (id)initWithDevice:(id)arg1 rows:(unsigned long long)arg2 columns:(unsigned long long)arg3;

@end
