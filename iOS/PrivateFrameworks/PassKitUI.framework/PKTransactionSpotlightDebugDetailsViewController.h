//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class CSSearchableItem, NSMutableArray, NSMutableDictionary, PKPaymentTransaction, PKSearchService;

@interface PKTransactionSpotlightDebugDetailsViewController : UITableViewController
{
    PKPaymentTransaction *_transaction;
    PKSearchService *_searchService;
    _Bool _loading;
    _Bool _inBridge;
    NSMutableArray *_attributes;
    NSMutableDictionary *_attributesPerKey;
    NSMutableArray *_customAttributes;
    NSMutableDictionary *_customAttributesPerKey;
    CSSearchableItem *_item;
}

- (void).cxx_destruct;
- (void)spotlightObjectDescriptionWithCompletion:(CDUnknownBlockType)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadItemWithCompletion:(CDUnknownBlockType)arg1;
- (id)_cellWithTitleText:(id)arg1 valueText:(id)arg2;
- (void)viewDidLoad;
- (id)initWithTransaction:(id)arg1;

@end
