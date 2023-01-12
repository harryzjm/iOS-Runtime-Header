//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKAccount, PKPaymentSetupField, PKPaymentSetupFieldFooterView;

@interface PKAccountVerifySSNPageViewController
{
    PKAccount *_account;
    PKPaymentSetupField *_aboutCreditReportingField;
    PKPaymentSetupFieldFooterView *_footerView;
    _Bool _isLoading;
}

- (void).cxx_destruct;
- (void)_terminateFlow;
- (void)_cancelPressed;
- (void)_handleNextStep;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)_showSpinner:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 context:(long long)arg2;

@end
