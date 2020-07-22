//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableSet, NSSet, NSString;

@interface PGPotentialMeaningfulEventAggregationMemory
{
    NSMutableSet *_collectionNodes;
    NSMutableSet *_mutableMomentNodes;
    unsigned long long _meaning;
    NSString *_key;
    NSArray *_relevantAssets;
}

@property(retain, nonatomic) NSArray *relevantAssets; // @synthesize relevantAssets=_relevantAssets;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSSet *collectionNodes; // @synthesize collectionNodes=_collectionNodes;
@property(readonly) unsigned long long meaning; // @synthesize meaning=_meaning;
- (void).cxx_destruct;
- (double)score;
- (id)peopleUUIDs;
- (void)addCollectionNode:(id)arg1 controller:(id)arg2;
- (id)initWithMeaning:(unsigned long long)arg1 features:(id)arg2;

@end

