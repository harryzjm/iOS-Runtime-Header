//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@class NSString, UIWindow;

@interface CLSRemoteViewController : _UIRemoteViewController
{
    UIWindow *_previousKeyWindow;
    UIWindow *_window;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)instantiateViewControllerWithInputItems:(id)arg1 identifier:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) UIWindow *previousKeyWindow; // @synthesize previousKeyWindow=_previousKeyWindow;
- (void)presentModallyInNewWindowWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewDidInvalidateIntrinsicContentSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

