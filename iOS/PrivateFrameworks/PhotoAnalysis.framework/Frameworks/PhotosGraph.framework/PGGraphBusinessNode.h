//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

@interface PGGraphBusinessNode
{
}

- (id)associatedNodesForRemoval;
- (id)keywordDescription;
@property(readonly, nonatomic) NSSet *publicEventNodes;
- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateBusinessCategoryNodesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long venueCapacity;
@property(readonly, copy, nonatomic) NSSet *businessCategories;
@property(readonly, nonatomic) NSString *name;

@end

