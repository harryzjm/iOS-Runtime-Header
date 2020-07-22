//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class UIWindow;

@interface UIAccessibilityPresentingViewController : UIViewController
{
    UIWindow *_presentationWindow;
}

- (void).cxx_destruct;
- (void)_voiceOverStatusChanged;
- (void)_cleanUpPresentationWindow;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end
