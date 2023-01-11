//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHDDataValuesCollection : NSObject
{
    struct __CFData *mPackedValues;
    unsigned long long mDataValueCount;
    struct __CFDictionary *mIndexToDataValueMap;
    _Bool mContainsStringValue;
}

- (id)description;
- (_Bool)containsStringValue;
- (void)finishReading;
- (id)dataValueWithIndex:(unsigned long long)arg1;
- (id)contentFormatAtIndex:(unsigned long long)arg1 resources:(id)arg2;
- (id)dataValueAtIndex:(unsigned long long)arg1;
- (struct CHDDataPoint *)dataPointWithIndex:(unsigned long long)arg1;
- (struct CHDDataPoint *)dataPointAtIndex:(unsigned long long)arg1;
- (_Bool)addDataValue:(id)arg1;
- (_Bool)addDataPoint:(struct CHDDataPoint *)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (void)resetWithDataPointCount:(unsigned long long)arg1;
- (id)initWithDataPointCount:(unsigned long long)arg1;
- (id)init;
- (void)cleanup;
- (void)setupBufferForValues:(unsigned long long)arg1;

@end

