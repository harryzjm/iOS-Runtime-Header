//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <WebUI/UISearchBarDelegate-Protocol.h>
#import <WebUI/UISearchResultsUpdating-Protocol.h>

@class NSArray, NSString, UISearchController, WBUPasswordPickerViewController;

@interface _WBUPasswordPicker : UITableViewController <UISearchBarDelegate, UISearchResultsUpdating>
{
    NSArray *_savedPasswordsMatchingHintStrings;
    NSArray *_savedPasswords;
    NSArray *_matchingPasswords;
    WBUPasswordPickerViewController *_pickerViewController;
    UISearchController *_searchController;
    NSString *_searchPattern;
    long long _sectionForPrompt;
    long long _sectionForPasswordsMatchingHintStrings;
    long long _sectionForAllPasswords;
}

- (void).cxx_destruct;
- (id)_passwordForIndexPath:(id)arg1;
- (void)_updateSections;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (long long)positionForBar:(id)arg1;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_setSearchPattern:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPasswordPickerViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

