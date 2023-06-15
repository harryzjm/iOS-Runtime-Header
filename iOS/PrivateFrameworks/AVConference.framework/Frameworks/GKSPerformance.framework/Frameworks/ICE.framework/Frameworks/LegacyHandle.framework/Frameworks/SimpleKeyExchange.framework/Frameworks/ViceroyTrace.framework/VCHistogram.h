//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCHistogram : NSObject
{
    unsigned int *_buckets;
    const unsigned int *_ranges;
    unsigned int _bucketCount;
}

@property(readonly) unsigned int bucketCount; // @synthesize bucketCount=_bucketCount;
@property(readonly) const unsigned int *ranges; // @synthesize ranges=_ranges;
- (void)reset;
- (id)description;
- (id)array;
- (_Bool)merge:(id)arg1;
- (unsigned int)bucketValueAtIndex:(unsigned int)arg1;
- (void)addValue:(unsigned int)arg1 withIncrement:(unsigned int)arg2;
- (_Bool)addOnlyExactMatchingValue:(unsigned int)arg1 increment:(unsigned int)arg2;
- (_Bool)addOnlyExactMatchingValue:(unsigned int)arg1;
- (void)addValue:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithRanges:(const unsigned int *)arg1 bucketValues:(id)arg2;

@end

