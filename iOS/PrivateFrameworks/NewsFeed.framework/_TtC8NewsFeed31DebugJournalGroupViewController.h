//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8NewsFeed31DebugJournalGroupViewController : UIViewController
{
    MISSING_TYPE *group;
    MISSING_TYPE *sections;
    MISSING_TYPE *tableView;
    MISSING_TYPE *cloudContext;
    MISSING_TYPE *tagService;
    MISSING_TYPE *commandCenter;
    MISSING_TYPE *feedItemImages;
    MISSING_TYPE *placeholderImage;
    MISSING_TYPE *naImage;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)doDismiss;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

@end

