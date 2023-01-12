//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface TestResult : NSObject
{
    _Bool _testRan;
    NSString *_testSkippedReason;
    NSNumber *_pValue;
    NSNumber *_rejectNullHypothesis;
    long long _sampleSize;
    long long _numSuccesses;
    NSDate *_minTimestamp;
    NSDate *_maxTimestamp;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *maxTimestamp; // @synthesize maxTimestamp=_maxTimestamp;
@property(retain, nonatomic) NSDate *minTimestamp; // @synthesize minTimestamp=_minTimestamp;
@property(nonatomic) long long numSuccesses; // @synthesize numSuccesses=_numSuccesses;
@property(nonatomic) long long sampleSize; // @synthesize sampleSize=_sampleSize;
@property(retain, nonatomic) NSNumber *rejectNullHypothesis; // @synthesize rejectNullHypothesis=_rejectNullHypothesis;
@property(retain, nonatomic) NSNumber *pValue; // @synthesize pValue=_pValue;
@property(retain, nonatomic) NSString *testSkippedReason; // @synthesize testSkippedReason=_testSkippedReason;
@property(nonatomic) _Bool testRan; // @synthesize testRan=_testRan;
- (id)description;
- (id)initWithTestRan:(_Bool)arg1 testSkippedReason:(id)arg2 pValue:(id)arg3 rejectNullHypothesis:(id)arg4 sampleSize:(long long)arg5 numSuccesses:(long long)arg6 minTimestamp:(id)arg7 maxTimestamp:(id)arg8;

@end
