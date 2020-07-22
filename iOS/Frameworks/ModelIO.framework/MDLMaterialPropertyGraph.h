//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray;

@interface MDLMaterialPropertyGraph
{
    NSArray *_nodes;
    NSArray *_connections;
    NSMutableArray *_finalNodes;
}

@property(readonly, nonatomic) NSArray *connections; // @synthesize connections=_connections;
@property(readonly, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
- (void).cxx_destruct;
- (void)evaluate;
- (id)initWithNodes:(id)arg1 connections:(id)arg2;

@end

