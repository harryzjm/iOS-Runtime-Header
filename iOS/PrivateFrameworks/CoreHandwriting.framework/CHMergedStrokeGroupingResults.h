//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface CHMergedStrokeGroupingResults
{
    NSDictionary *_groupingResultsByStrategyIdentifier;
}

@property(readonly, retain, nonatomic) NSDictionary *groupingResultsByStrategyIdentifier; // @synthesize groupingResultsByStrategyIdentifier=_groupingResultsByStrategyIdentifier;
- (void)dealloc;
- (id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3 groupingResultsByStrategyIdentifier:(id)arg4;

@end
