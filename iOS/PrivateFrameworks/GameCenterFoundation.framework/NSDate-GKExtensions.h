//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (GKExtensions)
+ (id)_gkFormattedTimeIntervalStringWithStartDate:(id)arg1 endDate:(id)arg2 calendarUnits:(unsigned long long)arg3 style:(long long)arg4;
+ (id)_gkServerTimestamp;
+ (id)_gkDateFromServerTimestamp:(id)arg1;
+ (id)_gkDateFromScalarServerTimestamp:(unsigned long long)arg1;
- (id)_gkFormattedWhenStringWithOptions:(unsigned long long)arg1;
- (id)_gkFormattedDateForStyle:(unsigned long long)arg1 relative:(_Bool)arg2;
- (id)_gkServerTimestamp;
@end

