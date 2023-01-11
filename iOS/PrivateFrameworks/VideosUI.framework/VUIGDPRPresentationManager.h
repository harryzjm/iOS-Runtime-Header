//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKAppContext, UINavigationController;

@interface VUIGDPRPresentationManager : NSObject
{
    UINavigationController *_navigationController;
    IKAppContext *_appContext;
}

+ (id)_sharedInstance;
+ (_Bool)shouldShowWelcomeScreen;
+ (void)acceptGDPRAndSyncWithServers:(CDUnknownBlockType)arg1;
+ (void)showOfflineGDPRWelcomeScreen;
+ (_Bool)showGDPRWelcomeScreen:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void)_handleOfflineContinueButton;
- (void)_handleContinueButton;
- (void)_dismissAllModalsIfPresent:(id)arg1;
- (void)_showIOSWelcomeControllerWithAppContext:(id)arg1 offline:(_Bool)arg2;
- (_Bool)isShowing;

@end
