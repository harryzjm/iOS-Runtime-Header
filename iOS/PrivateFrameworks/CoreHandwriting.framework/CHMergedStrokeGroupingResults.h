//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CHStrokeGroupingResult.h"

@class NSDictionary;

@interface CHMergedStrokeGroupingResults : CHStrokeGroupingResult
{
    NSDictionary *_groupingResultsByStrategyIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *groupingResultsByStrategyIdentifier; // @synthesize groupingResultsByStrategyIdentifier=_groupingResultsByStrategyIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)strokeGroupsOfClass:(long long)arg1;
- (id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3 groupingResultsByStrategyIdentifier:(id)arg4;

@end

