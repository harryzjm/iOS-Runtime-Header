//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class NSArray, NSDate, NSSet, _CDInteraction, _CDInteractionStore;

@interface _PSCNAutocompleteFeedbackInteractionIterator : NSEnumerator
{
    _CDInteractionStore *_interactionStore;
    NSSet *_bundleIds;
    unsigned long long _batchSize;
    NSDate *_startDate;
    NSDate *_endDate;
    _CDInteraction *_lastItem;
    NSArray *_results;
    long long _resultsIndex;
    long long _resultsBatch;
    _Bool _isExhausted;
}

- (void).cxx_destruct;
- (id)fastForwardToDate:(id)arg1;
- (id)nextObject;
- (void)fetchResults;
- (id)initWithInteractionStore:(id)arg1 bundleIds:(id)arg2 startDate:(id)arg3 batchSize:(unsigned long long)arg4;

@end
