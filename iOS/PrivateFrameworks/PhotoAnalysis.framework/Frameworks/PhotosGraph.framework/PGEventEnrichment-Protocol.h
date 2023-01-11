//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSArray, NSSet, NSString, PGGraph, PGGraphPersonNode, PHAssetCollection;

@protocol PGEventEnrichment <NSObject>
@property(readonly, nonatomic) PGGraph *graph;
@property(readonly, nonatomic) NSString *uuid;
- (PHAssetCollection *)assetCollection;
- (PGGraphPersonNode *)anniversaryPersonNode;
- (PGGraphPersonNode *)birthdayPersonNode;
- (NSArray *)sortedMomentNodes;
- (NSSet *)momentNodes;
- (NSSet *)meaningLabels;
- (void)enumerateMeaningNodesUsingBlock:(void (^)(PGGraphMeaningEdge *, PGGraphMeaningNode *, _Bool *))arg1;
@end
