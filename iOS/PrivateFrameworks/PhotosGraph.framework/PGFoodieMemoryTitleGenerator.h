//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PGGraphAddressNode, PGGraphBusinessNode, PGGraphLocationCityNode, PGGraphNode, PGGraphPersonNode;
@protocol PGGraphLocationOrArea;

@interface PGFoodieMemoryTitleGenerator
{
    long long _type;
    PGGraphLocationCityNode *_cityNode;
    PGGraphBusinessNode *_businessNode;
    PGGraphPersonNode *_personNode;
    PGGraphAddressNode *_addressNode;
    PGGraphNode<PGGraphLocationOrArea> *_tripLocationNode;
}

- (void).cxx_destruct;
- (id)_typeString;
- (id)_timeTitleForTripAndWeekend;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)initWithMomentNodes:(id)arg1 tripLocationNode:(id)arg2;
- (id)initWithMomentNodes:(id)arg1 addressNode:(id)arg2;
- (id)initWithMomentNodes:(id)arg1 personNode:(id)arg2;
- (id)initWithMomentNodes:(id)arg1 businessNode:(id)arg2;
- (id)initWithMomentNodes:(id)arg1 cityNode:(id)arg2;

@end
