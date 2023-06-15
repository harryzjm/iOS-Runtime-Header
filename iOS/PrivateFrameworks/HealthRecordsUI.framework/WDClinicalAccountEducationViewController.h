//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKViewController.h>

@class HKClinicalAccount, HRProfile, NSArray, NSString, UIButton, UITableView, UIView, WDClinicalAccountOnboardingSession, _TtC15HealthRecordsUI26HealthRecordsNotifications;

__attribute__((visibility("hidden")))
@interface WDClinicalAccountEducationViewController : HKViewController
{
    _Bool _promptForDataCollection;
    CDUnknownBlockType _completionBlock;
    WDClinicalAccountOnboardingSession *_onboardingSession;
    HKClinicalAccount *_account;
    NSArray *_sections;
    UIButton *_nextButton;
    UITableView *_tableView;
    UIView *_footerView;
    _TtC15HealthRecordsUI26HealthRecordsNotifications *_notificationsManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC15HealthRecordsUI26HealthRecordsNotifications *notificationsManager; // @synthesize notificationsManager=_notificationsManager;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) _Bool promptForDataCollection; // @synthesize promptForDataCollection=_promptForDataCollection;
@property(readonly, copy, nonatomic) HKClinicalAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) WDClinicalAccountOnboardingSession *onboardingSession; // @synthesize onboardingSession=_onboardingSession;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_navigationAction:(id)arg1;
- (void)_computeSections;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)loadView;
- (void)updateNextButton;
- (void)fetchShouldPromptForDataCollection;
- (_Bool)_shouldProceedToSharingToProviderOnboarding;
@property(readonly, nonatomic) HRProfile *profile;
- (id)initWithOnboardingSession:(id)arg1 account:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

