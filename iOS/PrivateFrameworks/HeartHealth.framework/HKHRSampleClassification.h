//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HeartHealth/NSCopying-Protocol.h>
#import <HeartHealth/NSSecureCoding-Protocol.h>

@class NSDateInterval, NSTimeZone, NSUUID;

@interface HKHRSampleClassification : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_sampleUUID;
    long long _classification;
    NSDateInterval *_sampleDateInterval;
    NSTimeZone *_sampleTimeZone;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSTimeZone *sampleTimeZone; // @synthesize sampleTimeZone=_sampleTimeZone;
@property(readonly, nonatomic) NSDateInterval *sampleDateInterval; // @synthesize sampleDateInterval=_sampleDateInterval;
@property(readonly, nonatomic) long long classification; // @synthesize classification=_classification;
@property(readonly, nonatomic) NSUUID *sampleUUID; // @synthesize sampleUUID=_sampleUUID;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSampleUUID:(id)arg1 classification:(long long)arg2 sampleDateInterval:(id)arg3 sampleTimeZone:(id)arg4;

@end
