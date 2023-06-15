//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class LAPSPasscodeOptionsViewControllerConfiguration, NSOrderedSet, NSString, UITableView;
@protocol LAPSPasscodeOptionsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface LAPSPasscodeOptionsSheetViewController : UIViewController
{
    LAPSPasscodeOptionsViewControllerConfiguration *_config;
    UITableView *_tableView;
    NSOrderedSet *_allowedPasscodeTypes;
    long long _selectedPasscodeTypeIndex;
    id <LAPSPasscodeOptionsViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <LAPSPasscodeOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_changeSelectedPasscodeTypeIndex:(long long)arg1;
- (void)_changePasscodeRecoveryStatus:(id)arg1;
- (void)_close:(id)arg1;
- (void)_setup;
- (id)_passcodeTypeName:(id)arg1;
- (double)_heightForFooterInSection:(long long)arg1;
- (double)_heightForHeaderInSection:(long long)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_cellIdentifierForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (struct CGSize)preferredContentSize;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

