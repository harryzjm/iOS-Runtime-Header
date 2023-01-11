//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface MAUnionRelation
{
    NSArray *_relations;
}

+ (id)scanRelationWithScanner:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *relations; // @synthesize relations=_relations;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)visualString;
- (_Bool)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg1 toTargetNodeIdentifiers:(id)arg2 graphStore:(id)arg3 error:(id *)arg4;
- (_Bool)unionAdjacencySetFromSource:(unsigned long long)arg1 toTargetNodeIdentifiers:(id)arg2 graphStore:(id)arg3 error:(id *)arg4;
- (void)unionAdjacencyListFromSources:(id)arg1 toTargets:(id)arg2;
- (void)unionAdjacencyListFromSource:(id)arg1 toTargets:(id)arg2;
- (id)inverse;
- (id)initWithRelations:(id)arg1;

@end
