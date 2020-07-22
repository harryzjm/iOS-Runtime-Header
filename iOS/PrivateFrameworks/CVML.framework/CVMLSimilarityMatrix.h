//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface CVMLSimilarityMatrix : NSObject
{
    struct shared_ptr<vision::mod::SimilarityMatrixAbstract> m_MatrixImpl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=getImpl) void *impl;
- (_Bool)containsId:(unsigned long long)arg1;
- (id)getAllDistancesForId:(unsigned long long)arg1;
- (float)getDistanceBetweenDescriptor:(unsigned long long)arg1 andDescriptor:(unsigned long long)arg2;
- (void)deleteDescriptors:(id)arg1;
- (_Bool)addDescriptors:(id)arg1 error:(id *)arg2;
- (id)getDescriptorIdsForRange:(struct _NSRange)arg1;
- (id)createCopyForDescriptorIds:(id)arg1;
@property(readonly, nonatomic, getter=getMaximumValidMatrixDistance) float maximumValidMatrixDistance;
@property(readonly, nonatomic, getter=getMatrixSize) unsigned long long matrixSize;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end
