//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>
#import <HealthDaemon/NSSecureCoding-Protocol.h>

@class NSData, NSDateInterval, NSUUID;

@interface HDDataCollectorSensorDatum : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_datumIdentifier;
    NSDateInterval *_dateInterval;
    NSData *_resumeContext;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSData *resumeContext; // @synthesize resumeContext=_resumeContext;
@property(readonly, copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(readonly, copy, nonatomic) NSUUID *datumIdentifier; // @synthesize datumIdentifier=_datumIdentifier;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 resumeContext:(id)arg3;

@end
