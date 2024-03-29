//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableViewController.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationListTableViewController : UITableViewController
{
    NSMutableArray *topLevelViewControllers;
    NSMutableArray *topLevelViewControllerNames;
}

- (void).cxx_destruct;
- (id)topLevelViewControllerForName:(id)arg1;
- (void)addTopLevelViewController:(id)arg1 forName:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (void)toggleOverlayVisibility;
- (void)toggleOverlayFullscreen;
- (id)initWithStyle:(long long)arg1;

@end

