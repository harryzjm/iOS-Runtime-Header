//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKAccountInvitationController;

@interface PKAccountInvitationOnboardingViewController
{
    PKAccountInvitationController *_controller;
    _Bool _didBeginOnboardingSubject;
}

- (void).cxx_destruct;
- (void)_endReportingIfNecessary;
- (void)_beginReportingIfNecessary;
- (void)_reportContinueTapped;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithController:(id)arg1;

@end
