//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, PGGraphNode;
@protocol PGGraphLocationOrArea;

@interface PGPotentialFoodieMemory
{
    unsigned long long _kind;
    unsigned long long _type;
    unsigned long long _relevantFoodAssetCount;
    NSDictionary *_relevantFoodAssetUUIDsByMomentNodeLocalIdentifier;
    NSDictionary *_personAssetUUIDsByMomentNodeLocalIdentifier;
    PGGraphNode *_featuredNode;
    PGGraphNode<PGGraphLocationOrArea> *_tripLocationNode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PGGraphNode<PGGraphLocationOrArea> *tripLocationNode; // @synthesize tripLocationNode=_tripLocationNode;
@property(retain, nonatomic) PGGraphNode *featuredNode; // @synthesize featuredNode=_featuredNode;
@property(retain, nonatomic) NSDictionary *personAssetUUIDsByMomentNodeLocalIdentifier; // @synthesize personAssetUUIDsByMomentNodeLocalIdentifier=_personAssetUUIDsByMomentNodeLocalIdentifier;
@property(retain, nonatomic) NSDictionary *relevantFoodAssetUUIDsByMomentNodeLocalIdentifier; // @synthesize relevantFoodAssetUUIDsByMomentNodeLocalIdentifier=_relevantFoodAssetUUIDsByMomentNodeLocalIdentifier;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned long long kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) unsigned long long relevantFoodAssetCount; // @synthesize relevantFoodAssetCount=_relevantFoodAssetCount;
- (id)initWithMomentNodes:(id)arg1 kind:(unsigned long long)arg2 type:(unsigned long long)arg3;

@end
