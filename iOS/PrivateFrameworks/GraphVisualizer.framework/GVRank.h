//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GVRank : NSObject
{
    NSMutableArray *nodes;
    double separation;
    GVRank *prev;
    GVRank *next;
}

@property(nonatomic) GVRank *next; // @synthesize next;
@property(nonatomic) GVRank *prev; // @synthesize prev;
- (void)centerNode:(id)arg1 at:(double)arg2;
- (void)centerNodesWithRespectoTo:(id)arg1;
- (struct CGSize)sizeForDummy;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) double width;
- (unsigned long long)outCrossings;
- (unsigned long long)inCrossings;
- (void)buildNodeIterators;
- (void)exchangeNodeAtIndex:(unsigned long long)arg1 withNodeAtIndex:(unsigned long long)arg2;
- (void)sortByIndex;
- (id)neighborsOfNode:(id)arg1;
- (void)removeNode:(id)arg1;
- (void)addNode:(id)arg1;
- (id)nodes;
- (void)dealloc;
- (id)initWithSeparation:(struct CGSize)arg1;

@end

