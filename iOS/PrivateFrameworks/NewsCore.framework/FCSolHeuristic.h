//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FCSolHeuristic : NSObject
{
    _Bool _alternate;
    NSArray *_groupSizes;
    long long _iterations;
    long long _heuristicSampleSize;
    CDUnknownBlockType _utilityBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType utilityBlock; // @synthesize utilityBlock=_utilityBlock;
@property(readonly, nonatomic) long long heuristicSampleSize; // @synthesize heuristicSampleSize=_heuristicSampleSize;
@property(readonly, nonatomic) long long iterations; // @synthesize iterations=_iterations;
@property(readonly, nonatomic) _Bool alternate; // @synthesize alternate=_alternate;
@property(retain, nonatomic) NSArray *groupSizes; // @synthesize groupSizes=_groupSizes;
- (void).cxx_destruct;
- (double)computeScoreWithSelectedGroup:(id)arg1 remainingArticles:(id)arg2 remainingTags:(id)arg3 articlesByTag:(id)arg4;
- (id)fillGroupsWithSelectedGroup:(id)arg1 remainingArticles:(id)arg2 remainingTags:(id)arg3 articlesByTag:(id)arg4 groupSizes:(id)arg5;
- (id)initWithOption:(long long)arg1 minClusterSize:(long long)arg2 maxClusterSize:(long long)arg3 minIdealClusterSize:(long long)arg4 maxIdealClusterSize:(long long)arg5 heuristicSampleSize:(long long)arg6 utilityBlock:(CDUnknownBlockType)arg7;

@end

