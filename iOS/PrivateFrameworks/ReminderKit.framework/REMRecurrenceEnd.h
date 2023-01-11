//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSCopying-Protocol.h>
#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSDate;

@interface REMRecurrenceEnd : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_endDate;
    unsigned long long _occurrenceCount;
}

+ (_Bool)supportsSecureCoding;
+ (id)recurrenceEndWithOccurrenceCount:(unsigned long long)arg1;
+ (id)recurrenceEndWithEndDate:(id)arg1;
@property(readonly, nonatomic) unsigned long long occurrenceCount; // @synthesize occurrenceCount=_occurrenceCount;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)usesEndDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOccurrenceCount:(unsigned long long)arg1;
- (id)initWithEndDate:(id)arg1;

@end
