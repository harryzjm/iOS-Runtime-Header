//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface GKGridGraphNode
{
    struct GKCGridGraphNode *_cGridGraphNode;
}

+ (id)nodeWithGridPosition: /* Error: Ran out of types for this method. */;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (float)costToNode:(id)arg1;
- (float)estimatedCostToNode:(id)arg1;
- (id)initWithGridPosition: /* Error: Ran out of types for this method. */;
@property(readonly, nonatomic) MISSING_TYPE *gridPosition;
- (id)init;
- (void)deleteCGraphNode;
- (struct GKCGraphNode *)makeCGraphNode;
- (struct GKCGridGraphNode *)cGridGraphNode;

@end
