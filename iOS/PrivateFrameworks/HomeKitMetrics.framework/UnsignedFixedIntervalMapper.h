//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMMIntervalMapper.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface UnsignedFixedIntervalMapper : HMMIntervalMapper
{
    NSArray *_intervals;
    CDUnknownBlockType _creationBlock;
    CDUnknownBlockType _comparisonBlock;
}

- (void).cxx_destruct;
@property(readonly) CDUnknownBlockType comparisonBlock; // @synthesize comparisonBlock=_comparisonBlock;
@property(readonly) CDUnknownBlockType creationBlock; // @synthesize creationBlock=_creationBlock;
@property(readonly) NSArray *intervals; // @synthesize intervals=_intervals;
- (id)intervalForValue:(unsigned long long)arg1;
- (id)intervalIndexForValue:(unsigned long long)arg1;
- (id)initWithBins:(id)arg1 intervalCreationBlock:(CDUnknownBlockType)arg2 valueComparisonBlock:(CDUnknownBlockType)arg3;

@end

