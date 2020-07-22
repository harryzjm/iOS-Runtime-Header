//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

#import <InternalPreferences/UITextFieldDelegate-Protocol.h>

@class NSObject, NSString, PSSpecifier;
@protocol OS_xpc_object;

@interface DeadlockMakerController : PSListController <UITextFieldDelegate>
{
    _Bool _enabled;
    float _priority;
    float _runDuration;
    NSObject<OS_xpc_object> *_connection;
    PSSpecifier *_textSpec;
    PSSpecifier *_prioritySlider;
    PSSpecifier *_priorityLabel;
    PSSpecifier *_runDurationText;
    PSSpecifier *_runDurationSlider;
    PSSpecifier *_runDurationLabel;
    PSSpecifier *_startNowButton;
}

- (void).cxx_destruct;
- (void)launchSpinForeverD:(id)arg1;
- (void)triggerTimeout;
- (_Bool)startConnectionIfNeeded;
- (void)stopConnectionIfNeeded;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)handleSliderTouchUpEvent:(id)arg1;
- (void)handleSliderChangedEvent:(id)arg1;
- (id)specifiers;
- (id)runDurationText:(id)arg1;
- (id)runDuration:(id)arg1;
- (void)setRunDuration:(id)arg1 specifier:(id)arg2;
- (id)priorityText:(id)arg1;
- (id)priority:(id)arg1;
- (void)setPriority:(id)arg1 specifier:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

