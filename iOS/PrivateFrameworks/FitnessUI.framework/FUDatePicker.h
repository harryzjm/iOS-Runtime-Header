//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <FitnessUI/FUScrollWheelDataSource-Protocol.h>
#import <FitnessUI/FUScrollWheelDelegate-Protocol.h>

@class FUScrollWheel, NSArray, NSDate, NSDateFormatter, NSMutableArray, NSString, UILabel;
@protocol FUDatePickerDelegate;

@interface FUDatePicker : UIView <FUScrollWheelDataSource, FUScrollWheelDelegate>
{
    unsigned long long _monthOffset;
    unsigned long long _dateOffset;
    long long _yearOrder;
    long long _monthOrder;
    long long _dayOrder;
    unsigned long long _numRowsMonth;
    unsigned long long _numRowsDate;
    unsigned long long _numRowsYear;
    NSArray *_monthNames;
    NSArray *_dayValues;
    NSMutableArray *_yearsWithNames;
    UILabel *_dayLabel;
    UILabel *_yearLabel;
    UILabel *_monthLabel;
    NSDateFormatter *_dateFormatter;
    _Bool _firstResponderShouldChange;
    _Bool _displayEra;
    id <FUDatePickerDelegate> _delegate;
    NSDate *_date;
    FUScrollWheel *_monthWheel;
    FUScrollWheel *_dateWheel;
    FUScrollWheel *_yearWheel;
}

@property(retain, nonatomic) FUScrollWheel *yearWheel; // @synthesize yearWheel=_yearWheel;
@property(retain, nonatomic) FUScrollWheel *dateWheel; // @synthesize dateWheel=_dateWheel;
@property(retain, nonatomic) FUScrollWheel *monthWheel; // @synthesize monthWheel=_monthWheel;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) __weak id <FUDatePickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)scrollWheelShouldBecomeFirstResponder:(id)arg1;
- (void)scrollWheel:(id)arg1 didChangeCurrentIndexTo:(unsigned long long)arg2;
- (void)tappedScrollWheel:(id)arg1;
- (unsigned long long)numberOfRowsInScrollWheel:(id)arg1;
- (id)scrollWheel:(id)arg1 titleForItemAtIndex:(unsigned long long)arg2;
- (void)_updateDateRange:(_Bool)arg1;
- (void)_updateSpinners;
- (void)layoutSubviews;
- (id)_enumerateDayValues;
- (id)_enumerateDayValuesFromFormatter:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

