//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

#import <ScreenTimeUI/STUIDateTimePickerCellDelegate-Protocol.h>

@class NSString, PSSpecifier, STDeviceBedtime, STUser;
@protocol STDeviceBedtimeListControllerDelegate;

@interface STDeviceBedtimeListController : PSListController <STUIDateTimePickerCellDelegate>
{
    _Bool _canAskForMoreTime;
    id <STDeviceBedtimeListControllerDelegate> _delegate;
    STDeviceBedtime *_bedtime;
    STUser *_affectedUser;
    PSSpecifier *_deviceBedtimeSpecifier;
    PSSpecifier *_informativeTextGroupSpecifier;
    PSSpecifier *_timeGroupSpecifier;
    PSSpecifier *_startTimeSpecifier;
    PSSpecifier *_endTimeSpecifier;
    PSSpecifier *_startTimePickerSpecifier;
    PSSpecifier *_endTimePickerSpecifier;
    PSSpecifier *_selectedTimeSpecifier;
    PSSpecifier *_atBedtimeGroupSpecifier;
    PSSpecifier *_atBedtimeSpecifier;
}

@property(retain, nonatomic) PSSpecifier *atBedtimeSpecifier; // @synthesize atBedtimeSpecifier=_atBedtimeSpecifier;
@property(retain, nonatomic) PSSpecifier *atBedtimeGroupSpecifier; // @synthesize atBedtimeGroupSpecifier=_atBedtimeGroupSpecifier;
@property(retain, nonatomic) PSSpecifier *selectedTimeSpecifier; // @synthesize selectedTimeSpecifier=_selectedTimeSpecifier;
@property(retain, nonatomic) PSSpecifier *endTimePickerSpecifier; // @synthesize endTimePickerSpecifier=_endTimePickerSpecifier;
@property(retain, nonatomic) PSSpecifier *startTimePickerSpecifier; // @synthesize startTimePickerSpecifier=_startTimePickerSpecifier;
@property(retain, nonatomic) PSSpecifier *endTimeSpecifier; // @synthesize endTimeSpecifier=_endTimeSpecifier;
@property(retain, nonatomic) PSSpecifier *startTimeSpecifier; // @synthesize startTimeSpecifier=_startTimeSpecifier;
@property(retain, nonatomic) PSSpecifier *timeGroupSpecifier; // @synthesize timeGroupSpecifier=_timeGroupSpecifier;
@property(retain, nonatomic) PSSpecifier *informativeTextGroupSpecifier; // @synthesize informativeTextGroupSpecifier=_informativeTextGroupSpecifier;
@property(retain, nonatomic) PSSpecifier *deviceBedtimeSpecifier; // @synthesize deviceBedtimeSpecifier=_deviceBedtimeSpecifier;
@property(nonatomic) _Bool canAskForMoreTime; // @synthesize canAskForMoreTime=_canAskForMoreTime;
@property(retain, nonatomic) STUser *affectedUser; // @synthesize affectedUser=_affectedUser;
@property(copy, nonatomic) STDeviceBedtime *bedtime; // @synthesize bedtime=_bedtime;
@property(nonatomic) __weak id <STDeviceBedtimeListControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)datePickerForSpecifier:(id)arg1;
- (void)datePickerChanged:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)atDowntimeFooterText;
- (id)askForMoreTime:(id)arg1;
- (void)setAskForMoreTime:(id)arg1 specifier:(id)arg2;
- (id)timeFooterText;
- (id)endTime;
- (id)startTime;
- (void)showPickerSpecifierForSpecifier:(id)arg1;
- (id)deviceBedtimeEnabled:(id)arg1;
- (void)setDeviceBedtimeEnabled:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (void)willResignActive;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

