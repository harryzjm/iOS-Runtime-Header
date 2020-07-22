//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MPSExternalMatrixVectorMultiplication;

@interface MPSMatrixVectorMultiplication
{
    id <MPSExternalMatrixVectorMultiplication> _plugin;
    _Bool _transpose;
    unsigned long long _batchStart;
    unsigned long long _batchSize;
    double _alpha;
    double _beta;
    unsigned long long _M;
    unsigned long long _N;
    CDStruct_67e7699a _resultMatrixOrigin;
    CDStruct_67e7699a _primarySourceMatrixOrigin;
    CDStruct_67e7699a _secondarySourceMatrixOrigin;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(nonatomic) unsigned long long N; // @synthesize N=_N;
@property(nonatomic) unsigned long long M; // @synthesize M=_M;
@property(readonly, nonatomic) double beta; // @synthesize beta=_beta;
@property(readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(readonly, nonatomic) _Bool transpose; // @synthesize transpose=_transpose;
- (void)setBatchSize:(unsigned long long)arg1;
- (unsigned long long)batchSize;
- (void)setBatchStart:(unsigned long long)arg1;
- (unsigned long long)batchStart;
- (void)setSecondarySourceMatrixOrigin:(CDStruct_67e7699a)arg1;
- (CDStruct_67e7699a)secondarySourceMatrixOrigin;
- (void)setPrimarySourceMatrixOrigin:(CDStruct_67e7699a)arg1;
- (CDStruct_67e7699a)primarySourceMatrixOrigin;
- (void)setResultMatrixOrigin:(CDStruct_67e7699a)arg1;
- (CDStruct_67e7699a)resultMatrixOrigin;
- (void)encodeToCommandBuffer:(id)arg1 inputMatrix:(id)arg2 inputVector:(id)arg3 resultVector:(id)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 rows:(unsigned long long)arg2 columns:(unsigned long long)arg3;
- (id)initWithDevice:(id)arg1 transpose:(_Bool)arg2 rows:(unsigned long long)arg3 columns:(unsigned long long)arg4 alpha:(double)arg5 beta:(double)arg6;

@end

