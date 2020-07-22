//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableSet, NSSet, PGGraphSocialGroupNode;

@interface PGPotentialSocialGroupMemory
{
    NSMutableSet *_mutableMomentNodes;
    PGGraphSocialGroupNode *_socialGroupNode;
    long long _year;
    NSArray *_facedAssets;
    NSSet *_peopleUUIDs;
}

@property(retain) NSSet *peopleUUIDs; // @synthesize peopleUUIDs=_peopleUUIDs;
@property(retain) NSArray *facedAssets; // @synthesize facedAssets=_facedAssets;
@property(readonly) long long year; // @synthesize year=_year;
@property(readonly) PGGraphSocialGroupNode *socialGroupNode; // @synthesize socialGroupNode=_socialGroupNode;
- (void).cxx_destruct;
- (void)addMomentNode:(id)arg1;
- (id)initWithSocialGroupNode:(id)arg1 year:(long long)arg2;

@end

