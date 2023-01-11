//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKLinkedApplication, PKPaymentSetupProduct, PKTableHeaderView;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupAppRequiredViewController
{
    PKPaymentSetupProduct *_product;
    PKLinkedApplication *_linkedApplication;
    PKTableHeaderView *_headerView;
    id <PKPaymentSetupViewControllerDelegate> _setupDelegate;
    _Bool _isBridge;
    _Bool _isBuddy;
}

- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_doneButtonTapped:(id)arg1;
- (id)_subtitle;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSetupContext:(long long)arg1 setupDelegate:(id)arg2 product:(id)arg3 linkedApplication:(id)arg4;

@end
