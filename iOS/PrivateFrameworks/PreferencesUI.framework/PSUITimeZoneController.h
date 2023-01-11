//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <PreferencesUI/UISearchBarDelegate-Protocol.h>
#import <PreferencesUI/UISearchControllerDelegate-Protocol.h>
#import <PreferencesUI/UISearchResultsUpdating-Protocol.h>

@class NSArray, NSString, PSListController, PSSpecifier, UISearchController;

@interface PSUITimeZoneController : UITableViewController <UISearchResultsUpdating, UISearchBarDelegate, UISearchControllerDelegate>
{
    NSArray *_cities;
    PSSpecifier *_specifier;
    PSListController *_parentController;
    UISearchController *_searchController;
}

+ (void)setTimeZone:(id)arg1;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(nonatomic) __weak PSListController *parentController; // @synthesize parentController=_parentController;
@property(retain, nonatomic) PSSpecifier *specifier; // @synthesize specifier=_specifier;
- (void).cxx_destruct;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (id)currentTimeZoneCityName;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

