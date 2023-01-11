//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKCalendar, EKEventStore;
@protocol EKCalendarEditItemDelegate, EKStyleProvider;

__attribute__((visibility("hidden")))
@interface EKCalendarEditItem : NSObject
{
    EKEventStore *_store;
    EKCalendar *_calendar;
    id <EKCalendarEditItemDelegate> _delegate;
    id <EKStyleProvider> _styleProvider;
}

@property(readonly, nonatomic) EKCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) id <EKStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) __weak id <EKCalendarEditItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)applyStyleProviderToCell:(id)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)saveStateToCalendar:(id)arg1;
- (_Bool)calendarEditor:(id)arg1 shouldSelectSubitem:(unsigned long long)arg2;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (void)layoutForWidth:(double)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (double)footerHeightForSection;
- (id)footerViewForSection;
- (id)headerTitle;
- (unsigned long long)numberOfSubitems;
- (_Bool)configureWithCalendar:(id)arg1;
- (void)reset;
- (void)setCalendar:(id)arg1 store:(id)arg2;

@end

