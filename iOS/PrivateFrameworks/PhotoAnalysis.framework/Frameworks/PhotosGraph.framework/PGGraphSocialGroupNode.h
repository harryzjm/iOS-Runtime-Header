//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PGGraphSocialGroupNode
{
}

+ (id)sortedSocialGroupNodeForMomentNodes:(id)arg1;
+ (id)weightSortDescriptors;
- (void)enumeratePersonNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)personNodes;
- (id)momentNodes;
@property(readonly, nonatomic) unsigned long long rank;

@end

