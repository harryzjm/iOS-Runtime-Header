//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CaliTIPHandler : NSObject
{
}

+ (_Bool)diffsAreImportant:(id)arg1;
+ (void)processMessages:(id)arg1 inCalendar:(id)arg2;
+ (void)setLogiTIPDetail:(_Bool)arg1;
+ (_Bool)logiTIPDetail;
+ (void)initialize;
+ (id)_calculateDiffsForEvent:(id)arg1 inMessage:(id)arg2;
+ (void)processMessage:(id)arg1 inCalendar:(id)arg2;
+ (_Bool)myStatusNeedsActionForEvent:(id)arg1 withAccount:(id)arg2;
+ (id)myAddressInAccount:(id)arg1 forEvent:(id)arg2;
+ (_Bool)isAddressMe:(id)arg1 forAccount:(id)arg2;
+ (_Bool)doScheduleChanges:(id)arg1 applyToEvent:(id)arg2 inCalendar:(id)arg3;
+ (id)getOccurrenceChange:(id)arg1 forEvent:(id)arg2 inCalendar:(id)arg3;
+ (id)debugStringForEvent:(id)arg1;

@end

