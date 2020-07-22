//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class EKCalendarItem, NSMutableArray;

@interface EKAlarmsViewModel : NSObject
{
    _Bool _canHaveLeaveNowAlarm;
    _Bool _hasLeaveNowAlarm;
    _Bool _needsUpdate;
    EKCalendarItem *_calendarItem;
    NSMutableArray *_uiAlarms;
}

+ (id)labelTextForIndex:(unsigned long long)arg1;
@property(retain, nonatomic) NSMutableArray *uiAlarms; // @synthesize uiAlarms=_uiAlarms;
@property(retain, nonatomic) EKCalendarItem *calendarItem; // @synthesize calendarItem=_calendarItem;
@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
- (void).cxx_destruct;
- (id)createAlarmEditItemViewControllerWithFrame:(struct CGRect)arg1 forAlarmAtIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) _Bool hasLeaveNowAlarm;
@property(readonly, nonatomic) _Bool canHaveLeaveNowAlarm;
- (void)_updateLeaveNowFlags;
- (void)_updateAlarms;
- (void)updateIfNeeded;
- (void)setNeedsUpdate;
- (_Bool)_hasUIAlarmChangedFromUIAlarm:(id)arg1 toUIAlarm:(id)arg2;
- (void)updatedUIAlarmFromUIAlarm:(id)arg1 toUIAlarm:(id)arg2 atIndex:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithCalendarItem:(id)arg1;
- (id)init;

@end

