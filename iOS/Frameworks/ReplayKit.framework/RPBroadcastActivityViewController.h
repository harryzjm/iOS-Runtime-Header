//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class RPBroadcastActivityHostViewController, UIPopoverPresentationController;
@protocol RPBroadcastActivityViewControllerDelegate;

@interface RPBroadcastActivityViewController : UIViewController
{
    id <RPBroadcastActivityViewControllerDelegate> _delegate;
    UIPopoverPresentationController *_popoverPresentationControllerProxy;
    RPBroadcastActivityHostViewController *_hostViewController;
    CDUnknownBlockType _didFinishHandler;
}

+ (void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)loadBroadcastActivityViewControllerWithPreferredExtension:(id)arg1 handler:(CDUnknownBlockType)arg2 broadcastActivitiesNotInstalledAlertTitle:(id)arg3 broadcastActivitiesNotInstalledAlertMessage:(id)arg4;
+ (void)loadBroadcastActivityViewControllerWithHandler:(CDUnknownBlockType)arg1;
+ (void)loadBroadcastActivityViewControllerWithPreferredExtension:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType didFinishHandler; // @synthesize didFinishHandler=_didFinishHandler;
@property(retain, nonatomic) RPBroadcastActivityHostViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
@property(retain, nonatomic) UIPopoverPresentationController *popoverPresentationControllerProxy; // @synthesize popoverPresentationControllerProxy=_popoverPresentationControllerProxy;
@property(nonatomic) __weak id <RPBroadcastActivityViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)popoverPresentationController;
- (void)setModalPresentationStyle:(long long)arg1;

@end

