//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSIndexPath, PKAccount, PKAccountAutomaticPaymentsController, PKTableHeaderView;

@interface PKAccountAutomaticPaymentsPresetViewController
{
    PKAccountAutomaticPaymentsController *_controller;
    PKAccount *_account;
    unsigned long long _featureIdentifier;
    PKTableHeaderView *_tableHeaderView;
    NSIndexPath *_selectedIndexPath;
    NSArray *_paymentPresets;
}

- (void).cxx_destruct;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)shouldMapSection:(unsigned long long)arg1;
- (void)_handleNext:(id)arg1;
- (id)tableHeaderView;
- (void)viewDidLoad;
- (id)initWithController:(id)arg1;

@end
