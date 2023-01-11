//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface EKScheduledReminderPredicate
{
    NSDate *_day;
    unsigned long long _maxResults;
}

+ (id)predicateForScheduledRemindersInCalendars:(id)arg1 onDay:(id)arg2;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long maxResults; // @synthesize maxResults=_maxResults;
@property(retain, nonatomic) NSDate *day; // @synthesize day=_day;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;

@end
