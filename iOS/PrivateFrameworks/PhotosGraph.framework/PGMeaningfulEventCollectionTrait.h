//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PGGraphNodeCollection;

@interface PGMeaningfulEventCollectionTrait
{
    PGGraphNodeCollection *_nodes;
    PGGraphNodeCollection *_negativeNodes;
    CDUnknownBlockType _additionalMatchingBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType additionalMatchingBlock; // @synthesize additionalMatchingBlock=_additionalMatchingBlock;
@property(readonly, nonatomic) PGGraphNodeCollection *negativeNodes; // @synthesize negativeNodes=_negativeNodes;
@property(readonly, nonatomic) PGGraphNodeCollection *nodes; // @synthesize nodes=_nodes;
- (id)debugDescriptionWithMomentNode:(id)arg1;
- (_Bool)isActive;
- (id)initWithNodes:(id)arg1 negativeNodes:(id)arg2;
- (id)initWithNodes:(id)arg1;

@end
