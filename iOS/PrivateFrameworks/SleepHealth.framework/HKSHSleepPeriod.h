//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SleepHealth/NSCopying-Protocol.h>
#import <SleepHealth/NSSecureCoding-Protocol.h>

@class NSArray, NSDateInterval;

@interface HKSHSleepPeriod : NSObject <NSSecureCoding, NSCopying>
{
    NSDateInterval *_dateInterval;
    NSArray *_segments;
}

+ (_Bool)supportsSecureCoding;
+ (id)sleepPeriodWithDateInterval:(id)arg1 segments:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(readonly, copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)durationForCategory:(long long)arg1 overlappingDateInterval:(id)arg2;
- (id)redactedDescription;
- (id)description;

@end
