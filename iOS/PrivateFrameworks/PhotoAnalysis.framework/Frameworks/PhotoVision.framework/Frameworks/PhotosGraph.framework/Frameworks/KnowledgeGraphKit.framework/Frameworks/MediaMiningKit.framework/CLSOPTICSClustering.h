//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSProgress;

@interface CLSOPTICSClustering
{
    NSProgress *_progress;
    double _maximumDistance;
    unsigned long long _minimumNumberOfObjects;
}

- (void)setMinimumNumberOfObjects:(unsigned long long)arg1;
- (unsigned long long)minimumNumberOfObjects;
- (void)setMaximumDistance:(double)arg1;
- (double)maximumDistance;
- (void).cxx_destruct;
- (long long)updateReachibilityDistance:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)updateNeighbors:(id)arg1 forIndex:(unsigned long long)arg2;
- (id)prepareOrderedDatasetIndexRange:(struct _NSRange)arg1 inDataset:(id)arg2;
- (id)orderedDatasetByReachabilityDistance:(id)arg1;
- (id)preprocessData:(id)arg1;
- (id)extractSubClusters:(id)arg1 inDataset:(id)arg2 parentIndex:(long long)arg3 inProgressBlock:(CDUnknownBlockType)arg4;
- (id)extractRootClusters:(id)arg1 inOriginalDataset:(id)arg2 inProgressBlock:(CDUnknownBlockType)arg3;
- (id)performWithDataset:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

