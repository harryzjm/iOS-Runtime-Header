//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, UILabel, UIView;

@interface HLPHelpSearchResultTableViewController : UITableViewController
{
    UILabel *_footerLabel;
    NSArray *_searchResults;
    UIView *_footerView;
}

@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateWithSearchText:(id)arg1 searchResults:(id)arg2;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

