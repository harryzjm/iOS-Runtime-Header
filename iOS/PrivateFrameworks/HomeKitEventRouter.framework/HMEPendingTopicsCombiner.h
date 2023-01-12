//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet;

@interface HMEPendingTopicsCombiner : NSObject
{
    NSMutableSet *_addTopicFilters;
    NSMutableSet *_removeTopicFilters;
}

- (void).cxx_destruct;
@property(retain) NSMutableSet *removeTopicFilters; // @synthesize removeTopicFilters=_removeTopicFilters;
@property(retain) NSMutableSet *addTopicFilters; // @synthesize addTopicFilters=_addTopicFilters;
- (void)reset;
@property(readonly) NSArray *topicFiltersToRemove;
@property(readonly) NSArray *topicFiltersToAdd;
- (void)combineOntoPreviousAdditions:(id)arg1 removals:(id)arg2;
- (void)combineWithAdditions:(id)arg1 removals:(id)arg2;
- (id)init;

@end
