//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCHistogram2D
{
    unsigned int **_buckets2D;
}

- (void)addValue:(unsigned int)arg1 withArray:(id)arg2;
- (id)description;
- (void)reset;
- (void)dealloc;
- (id)initWithRanges:(const unsigned int *)arg1 bucketValues:(id)arg2;

@end

