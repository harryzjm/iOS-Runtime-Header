//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class MFRecentComposeRecipientGroup;
@protocol MFGroupDetailViewControllerDelegate;

@interface MFGroupDetailViewController : UITableViewController
{
    id <MFGroupDetailViewControllerDelegate> _delegate;
    MFRecentComposeRecipientGroup *_group;
}

@property(retain, nonatomic) MFRecentComposeRecipientGroup *group; // @synthesize group=_group;
@property(nonatomic) id <MFGroupDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_removeButtonTapped:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)dealloc;

@end
