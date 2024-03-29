//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSViewController.h>

@class NSString, UIBarButtonItem, UITableView, UIView;

__attribute__((visibility("hidden")))
@interface CKAbstractReviewViewController : PSViewController
{
    UITableView *_tableView;
    UIView *_topLineView;
    UIBarButtonItem *_cancelEditingBarButtonItem;
    UIBarButtonItem *_deleteBarButtonItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIBarButtonItem *deleteBarButtonItem; // @synthesize deleteBarButtonItem=_deleteBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *cancelEditingBarButtonItem; // @synthesize cancelEditingBarButtonItem=_cancelEditingBarButtonItem;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)_updateNavigationItemState;
- (void)_handleDelete;
- (void)_handleCancel;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

