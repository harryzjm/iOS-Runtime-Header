//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (CDRound)
- (id)cd_dateWithCeilingForAlignment:(double)arg1 withOffset:(double)arg2 inTimeZone:(id)arg3;
- (id)cd_dateWithFloorForAlignment:(double)arg1 withOffset:(double)arg2 inTimeZone:(id)arg3;
- (id)cd_dateWithCeilingForAlignment:(double)arg1;
- (id)cd_dateWithFloorForAlignment:(double)arg1;
- (int)slotFromMidnightWithTotalSlotsInDay:(int)arg1;
- (id)floorDateWithTotalSlotsInDay:(int)arg1;
- (double)timeSinceMidnight:(id *)arg1;
- (id)dedup;
- (id)dk_dedup;
@end

