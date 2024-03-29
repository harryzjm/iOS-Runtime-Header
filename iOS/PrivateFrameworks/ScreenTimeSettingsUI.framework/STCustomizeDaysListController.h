//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class NSDictionary, PSSpecifier;
@protocol STCustomizeDaysListControllerDelegate;

__attribute__((visibility("hidden")))
@interface STCustomizeDaysListController : PSListController
{
    id <STCustomizeDaysListControllerDelegate> _delegate;
    NSDictionary *_timeByDay;
    PSSpecifier *_timePickerSpecifier;
    PSSpecifier *_selectedDaySpecifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PSSpecifier *selectedDaySpecifier; // @synthesize selectedDaySpecifier=_selectedDaySpecifier;
@property(retain, nonatomic) PSSpecifier *timePickerSpecifier; // @synthesize timePickerSpecifier=_timePickerSpecifier;
@property(copy, nonatomic) NSDictionary *timeByDay; // @synthesize timeByDay=_timeByDay;
@property(nonatomic) __weak id <STCustomizeDaysListControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)datePickerForSpecifier:(id)arg1;
- (void)datePickerChanged:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)budgetTime:(id)arg1;
- (void)_showOrHidePickerSpecifierForSpecifier:(id)arg1;
- (id)specifiers;
- (id)_localizedDayNames;
- (id)_localizedDayOrder;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)init;

@end

