//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface TwoSampleTestResult : NSObject
{
    _Bool _testRan;
    NSString *_testSkippedReason;
    NSNumber *_testStatistic;
    NSNumber *_rejectNullHypothesis;
    long long _sampleSize1;
    long long _numSuccesses1;
    NSDate *_minTimestamp1;
    NSDate *_maxTimestamp1;
    long long _sampleSize2;
    long long _numSuccesses2;
    NSDate *_minTimestamp2;
    NSDate *_maxTimestamp2;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *maxTimestamp2; // @synthesize maxTimestamp2=_maxTimestamp2;
@property(retain, nonatomic) NSDate *minTimestamp2; // @synthesize minTimestamp2=_minTimestamp2;
@property(nonatomic) long long numSuccesses2; // @synthesize numSuccesses2=_numSuccesses2;
@property(nonatomic) long long sampleSize2; // @synthesize sampleSize2=_sampleSize2;
@property(retain, nonatomic) NSDate *maxTimestamp1; // @synthesize maxTimestamp1=_maxTimestamp1;
@property(retain, nonatomic) NSDate *minTimestamp1; // @synthesize minTimestamp1=_minTimestamp1;
@property(nonatomic) long long numSuccesses1; // @synthesize numSuccesses1=_numSuccesses1;
@property(nonatomic) long long sampleSize1; // @synthesize sampleSize1=_sampleSize1;
@property(retain, nonatomic) NSNumber *rejectNullHypothesis; // @synthesize rejectNullHypothesis=_rejectNullHypothesis;
@property(retain, nonatomic) NSNumber *testStatistic; // @synthesize testStatistic=_testStatistic;
@property(retain, nonatomic) NSString *testSkippedReason; // @synthesize testSkippedReason=_testSkippedReason;
@property(nonatomic) _Bool testRan; // @synthesize testRan=_testRan;
- (id)description;
- (id)initWithTestRan:(_Bool)arg1 testSkippedReason:(id)arg2 testStatistic:(id)arg3 rejectNullHypothesis:(id)arg4 sampleSize1:(long long)arg5 numSuccesses1:(long long)arg6 minTimestamp1:(id)arg7 maxTimestamp1:(id)arg8 sampleSize2:(long long)arg9 numSuccesses2:(long long)arg10 minTimestamp2:(id)arg11 maxTimestamp2:(id)arg12;

@end
