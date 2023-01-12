//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKTableViewController.h>

@class NSArray, NSPredicate, NSString, UIFont, WDProfile;

__attribute__((visibility("hidden")))
@interface WDStoredDataByCategoryViewController : HKTableViewController
{
    _Bool _queryReturned;
    WDProfile *_profile;
    NSArray *_capturedSampleTypes;
    UIFont *_bodyFont;
    NSArray *_savedCategories;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool queryReturned; // @synthesize queryReturned=_queryReturned;
@property(retain) NSArray *savedCategories; // @synthesize savedCategories=_savedCategories;
@property(retain, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
@property(retain, nonatomic) NSArray *capturedSampleTypes; // @synthesize capturedSampleTypes=_capturedSampleTypes;
@property(retain, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
- (id)_makeDataListViewControllerForDisplayType:(id)arg1;
- (void)selectSourceStoredDataTableViewCell:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)presentDeleteConfirmation;
- (id)reduceCategoriesForCapturedSampleTypes:(id)arg1;
- (void)deleteAllStoredData;
@property(readonly, nonatomic) _Bool shouldShowDeleteAllDataButton;
@property(readonly, nonatomic) NSString *storedDataDisplayName;
@property(readonly, nonatomic) NSPredicate *storedDataPredicate;
- (void)traitCollectionDidChange:(id)arg1;
- (void)handleSamplesQueryResults:(id)arg1;
- (void)_displayTypeStringsChanged:(id)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)initWithStyle:(long long)arg1;

@end

