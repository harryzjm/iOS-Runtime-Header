//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class FACircleContext, NSXPCConnection;
@protocol FAFamilyPresenterHostProtocol;

@interface FARemoteAlertServiceViewController : SBUIRemoteAlertServiceViewController
{
    FACircleContext *_circleContext;
    NSXPCConnection *_lookupConnection;
    id <FAFamilyPresenterHostProtocol> _hostProxy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <FAFamilyPresenterHostProtocol> hostProxy; // @synthesize hostProxy=_hostProxy;
- (void)_invalidateLookupConnection;
- (void)_main_dismissAndExit;
- (void)_dismissAndExit;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (long long)preferredStatusBarStyle;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_showFamilyFlow;
- (void)_handleSignedOutAcceptInvitation;
- (id)_account;
- (void)_setupRemoteProxy;
- (void)viewWillAppear:(_Bool)arg1;

@end
