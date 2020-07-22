//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (TSCEAdditions)
+ (id)tsce_dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6;
+ (id)tsce_dateWithSerialNumber:(double)arg1 dateMode:(int)arg2;
- (double)tsce_mapToDouble;
- (long long)tsce_weekday;
- (long long)tsce_second;
- (long long)tsce_minute;
- (long long)tsce_hour;
- (long long)tsce_day;
- (long long)tsce_month;
- (long long)tsce_year;
@end

