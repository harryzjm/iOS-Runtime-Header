//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MANodeFilter;

@interface MANodeFilterRelation
{
    MANodeFilter *_nodeFilter;
}

+ (id)scanRelationWithScanner:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) MANodeFilter *nodeFilter; // @synthesize nodeFilter=_nodeFilter;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)visualString;
- (_Bool)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg1 toTargetNodeIdentifiers:(id)arg2 graphStore:(id)arg3 error:(id *)arg4;
- (void)unionAdjacencyListFromSources:(id)arg1 toTargets:(id)arg2;
- (void)unionAdjacencyListFromSource:(id)arg1 toTargets:(id)arg2;
- (id)inverse;
- (id)initWithNodeFilter:(id)arg1;

@end
