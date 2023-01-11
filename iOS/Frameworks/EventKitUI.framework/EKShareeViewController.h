//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class EKSharee, UIAlertController;
@protocol EKShareeViewControllerDelegate;

@interface EKShareeViewController : UITableViewController
{
    UIAlertController *_removeAlertController;
    _Bool _allowEditing;
    _Bool _allowStopSharing;
    _Bool _allowResendInvitations;
    EKSharee *_sharee;
    id <EKShareeViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EKShareeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool allowResendInvitations; // @synthesize allowResendInvitations=_allowResendInvitations;
@property(nonatomic) _Bool allowStopSharing; // @synthesize allowStopSharing=_allowStopSharing;
@property(nonatomic) _Bool allowEditing; // @synthesize allowEditing=_allowEditing;
@property(retain, nonatomic) EKSharee *sharee; // @synthesize sharee=_sharee;
- (void)removeClicked:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)_allowEditingChanged:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)_reloadTitle;
- (long long)_rowForSubitem:(int)arg1;
- (int)_subitemAtRow:(long long)arg1;
- (_Bool)_shouldDisplayStopSharingButton;
- (_Bool)_shouldDisplayResendInvitationButton;
- (id)initWithSharee:(id)arg1;

@end
