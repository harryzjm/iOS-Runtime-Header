//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HDSPEventRecordMessage.h"

@class NSDate;

__attribute__((visibility("hidden")))
@interface HDSPSleepAlarmSnoozedIDSMessage : HDSPEventRecordMessage
{
}

- (id)dateDescription;
@property(readonly, nonatomic) NSDate *snoozedUntilDate;
- (unsigned long long)destinations;
- (id)initWithSnoozedUntilDate:(id)arg1;

@end

