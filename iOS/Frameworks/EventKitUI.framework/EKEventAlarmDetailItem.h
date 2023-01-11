//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKAlarmEditItemViewController, EKAlarmsViewModel, NSArray;

__attribute__((visibility("hidden")))
@interface EKEventAlarmDetailItem
{
    unsigned long long _disclosedSubitem;
    NSArray *_alarms;
    EKAlarmEditItemViewController *_currentEditViewController;
    EKAlarmsViewModel *_alarmsViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EKAlarmsViewModel *alarmsViewModel; // @synthesize alarmsViewModel=_alarmsViewModel;
- (_Bool)editItemViewControllerShouldShowDetachAlert;
- (_Bool)editItemViewControllerSave:(id)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (unsigned long long)numberOfSubitems;
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;
- (_Bool)_alarmsAreCreatable;
- (void)ttlLocationStatusChanged:(id)arg1;
- (_Bool)_alarmsAreEditable;
- (void)reset;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (void)_updateAlarms;

@end
