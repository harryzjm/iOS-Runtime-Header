//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKHealthPrivacyServicePromptController-Protocol.h>
#import <HealthUI/UITableViewDataSource-Protocol.h>
#import <HealthUI/UITableViewDelegate-Protocol.h>

@class HKClinicalAuthorizationDisplayController, HKClinicalAuthorizationSequenceContext, NSString, UITableView;
@protocol HKHealthPrivacyServicePromptControllerDelegate;

@interface HKClinicalAuthorizationNewRecordsViewController <UITableViewDataSource, UITableViewDelegate, HKHealthPrivacyServicePromptController>
{
    HKClinicalAuthorizationSequenceContext *_context;
    id <HKHealthPrivacyServicePromptControllerDelegate> _delegate;
    UITableView *_tableView;
    HKClinicalAuthorizationDisplayController *_displayController;
    long long _authorizationMode;
}

- (void).cxx_destruct;
@property(nonatomic) long long authorizationMode; // @synthesize authorizationMode=_authorizationMode;
@property(readonly, nonatomic) HKClinicalAuthorizationDisplayController *displayController; // @synthesize displayController=_displayController;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <HKHealthPrivacyServicePromptControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HKClinicalAuthorizationSequenceContext *context; // @synthesize context=_context;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateForCurrentContentSizeCategory;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_shareAuthorizationModeCellPressed:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (void)_doneButtonPressed:(id)arg1;
- (void)_updateShareAuthorizationModeSectionFooter;
- (id)_titleForShareAuthorizationModeFooter;
- (id)_formatStringForShareAuthorizationModeFooterWithMode:(long long)arg1;
- (id)_shareAuthorizationModeCellForIndexPath:(id)arg1;
- (id)_visibleShareAuthorizationModeCellForMode:(long long)arg1;
- (id)_indexPathForShareAuthorizationMode:(long long)arg1;
- (long long)_shareAuthorizationModeForIndexPath:(id)arg1;
- (_Bool)_indexPathIsValidRow:(id)arg1;
- (id)_createFooterView;
- (id)_createHeaderView;
- (void)_configureNavigationItem;
- (void)_configureTableView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithContext:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
