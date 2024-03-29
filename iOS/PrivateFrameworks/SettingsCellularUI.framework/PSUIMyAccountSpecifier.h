//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifier.h>

@class CTXPCServiceSubscriptionContext, Logger, PSListController, PSUICarrierSpaceMyAccountWebViewController, UINavigationController;

__attribute__((visibility("hidden")))
@interface PSUIMyAccountSpecifier : PSSpecifier
{
    PSListController *_hostController;
    CTXPCServiceSubscriptionContext *_context;
    PSUICarrierSpaceMyAccountWebViewController *_myAccountWebViewController;
    UINavigationController *_navCon;
    Logger *_logger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) Logger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) UINavigationController *navCon; // @synthesize navCon=_navCon;
@property(retain, nonatomic) PSUICarrierSpaceMyAccountWebViewController *myAccountWebViewController; // @synthesize myAccountWebViewController=_myAccountWebViewController;
@property(retain, nonatomic) CTXPCServiceSubscriptionContext *context; // @synthesize context=_context;
@property(nonatomic) __weak PSListController *hostController; // @synthesize hostController=_hostController;
- (id)getLogger;
- (void)launchMyAccountInSafari:(id)arg1;
- (void)launchMyAccountInWebView:(id)arg1;
- (id)initWithContext:(id)arg1 cbCache:(id)arg2;

@end

