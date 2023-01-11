//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDRateLimiting-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface _CDMultiLevelRateLimiter : NSObject <_CDRateLimiting>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_lastRecorded;
    long long _numberOfRateLimitPolicies;
    NSArray *_periods;
    NSMutableArray *_periodStart;
    NSArray *_maxCounts;
    NSMutableArray *_balances;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long numOfRateLimitPolicies; // @synthesize numOfRateLimitPolicies=_numberOfRateLimitPolicies;
@property(readonly, retain, nonatomic) NSDate *lastRecorded; // @synthesize lastRecorded=_lastRecorded;
@property(readonly, copy) NSString *description;
- (void)recordTimeAndRefillIfNeededRaw;
- (_Bool)debited;
- (_Bool)credit;
- (id)initWithPeriodToCountMap:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
