//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <SafariServices/SFRemoteViewControllerProtocol-Protocol.h>

@class NSString;
@protocol SFBrowserRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SFBrowserRemoteViewController : _UIRemoteViewController <SFRemoteViewControllerProtocol>
{
    id <SFBrowserRemoteViewControllerDelegate> _delegate;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak id <SFBrowserRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)initialLoadDidRedirectToURL:(id)arg1;
- (void)didDecideCookieSharingForURL:(id)arg1 shouldCancel:(_Bool)arg2;
- (void)willOpenURLInHostApplication:(id)arg1;
- (void)executeCustomActivityProxyID:(id)arg1;
- (void)fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2;
- (void)didFinishInitialLoad:(_Bool)arg1;
- (void)setRemoteSwipeGestureEnabled:(_Bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)willDismissServiceViewController;
- (void)didLoadWebView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
