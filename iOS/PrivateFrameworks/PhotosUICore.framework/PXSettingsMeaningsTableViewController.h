//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSDictionary;

@interface PXSettingsMeaningsTableViewController : UITableViewController
{
    NSArray *_meaningLabels;
    NSDictionary *_meaningDataContainerByMeaningLabels;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *meaningDataContainerByMeaningLabels; // @synthesize meaningDataContainerByMeaningLabels=_meaningDataContainerByMeaningLabels;
@property(retain, nonatomic) NSArray *meaningLabels; // @synthesize meaningLabels=_meaningLabels;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_momentIdentifiersByMeaningLabel;
- (id)_meaningDataContainerByMeaningLabels;
- (void)viewDidLoad;
- (id)init;

@end
