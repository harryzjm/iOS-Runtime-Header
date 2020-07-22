//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

#import <TVMLKit/TVApplicationControllerDelegate-Protocol.h>
#import <TVMLKit/UIApplicationDelegate-Protocol.h>

@class BKSProcessAssertion, NSString, TVApplicationController, UIWindow;

@interface TVAppDelegate : UIResponder <UIApplicationDelegate, TVApplicationControllerDelegate>
{
    _Bool _headLess;
    _Bool _shouldTerminateOnEnterBackground;
    UIWindow *_window;
    TVApplicationController *_appController;
    BKSProcessAssertion *_launchAssertion;
}

@property(retain, nonatomic) BKSProcessAssertion *launchAssertion; // @synthesize launchAssertion=_launchAssertion;
@property(nonatomic) _Bool shouldTerminateOnEnterBackground; // @synthesize shouldTerminateOnEnterBackground=_shouldTerminateOnEnterBackground;
@property(retain, nonatomic) TVApplicationController *appController; // @synthesize appController=_appController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)_presetDialogWithError:(long long)arg1 appController:(id)arg2;
- (void)_controllerDidDisplay:(id)arg1;
- (id)_launchContext;
- (void)_runScrollMoveTest:(id)arg1;
- (id)launchOptionsWithDefaultOptions:(id)arg1;
- (void)appController:(id)arg1 didFailWithError:(id)arg2;
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)applicationDidEnterBackground:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

