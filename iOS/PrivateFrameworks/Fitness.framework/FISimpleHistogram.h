//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FISimpleHistogram : NSObject
{
    long long _bucketCount;
    struct {
        long long _field1;
        double _field2;
    } *_buckets;
}

- (_Bool)isEqual:(id)arg1;
- (id)descriptionArray;
- (id)debugDescription;
- (long long)numberOfValuesInBucketAtIndex:(long long)arg1;
- (void)addValue:(double)arg1 toBucketAtIndex:(long long)arg2;
- (double)valueForBucketAtIndex:(long long)arg1;
- (long long)bucketCount;
- (void)dealloc;
- (id)initWithNumberOfBuckets:(long long)arg1;

@end

