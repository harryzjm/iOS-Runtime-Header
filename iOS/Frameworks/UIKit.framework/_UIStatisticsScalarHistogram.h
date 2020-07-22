//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIStatisticsScalarHistogram : NSObject
{
    NSString *_baseKey;
    long long _recordCount;
    long long _values[22];
    NSArray *_bucketKeys;
    NSMutableSet *_children;
}

- (void).cxx_destruct;
- (void)recordValue:(double)arg1;
- (void)clearValues;
- (void)reportValues;
- (void)_addChildStatistic:(id)arg1;
- (id)initWithDomain:(id)arg1 identifierReporting:(long long)arg2;

@end

