//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSMutableSet, NSString, PGGraphAreaNode;

@interface PGPotentialAreaMemory
{
    NSMutableSet *_mutableMomentNodes;
    PGGraphAreaNode *_areaNode;
    long long _year;
    NSArray *_assetLocalIdentifiersInArea;
    NSDate *_startDate;
    NSDate *_endDate;
}

- (void).cxx_destruct;
@property(retain) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain) NSArray *assetLocalIdentifiersInArea; // @synthesize assetLocalIdentifiersInArea=_assetLocalIdentifiersInArea;
@property(readonly) long long year; // @synthesize year=_year;
@property(readonly) PGGraphAreaNode *areaNode; // @synthesize areaNode=_areaNode;
@property(readonly) NSString *area;
- (void)addMomentNode:(id)arg1;
- (id)initWithAreaNode:(id)arg1 year:(long long)arg2;

@end
