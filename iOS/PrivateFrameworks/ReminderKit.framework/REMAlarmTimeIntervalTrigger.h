//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ReminderKit/NSSecureCoding-Protocol.h>

@interface REMAlarmTimeIntervalTrigger <NSSecureCoding>
{
    double _timeInterval;
}

+ (_Bool)supportsSecureCoding;
+ (id)cdEntityName;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isTemporal;
- (_Bool)isEqual:(id)arg1;
- (id)_deepCopy;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeInterval:(double)arg1;
- (id)initWithObjectID:(id)arg1 timeInterval:(double)arg2;

@end
