//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <Widgets/_NCWidgetViewController_Host_IPC-Protocol.h>

@class NSObject, WGWidgetHostingViewController;
@protocol OS_dispatch_queue;

@interface _WGWidgetRemoteViewController : _UIRemoteViewController <_NCWidgetViewController_Host_IPC>
{
    _Bool _valid;
    NSObject<OS_dispatch_queue> *_managingHostQueue;
    WGWidgetHostingViewController *_managingHost;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property(nonatomic, getter=_isValid, setter=_setValid:) _Bool valid; // @synthesize valid=_valid;
@property(nonatomic) __weak WGWidgetHostingViewController *managingHost; // @synthesize managingHost=_managingHost;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *managingHostQueue; // @synthesize managingHostQueue=_managingHostQueue;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)__closeTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2;
- (void)__setLargestAvailableDisplayMode:(long long)arg1;
- (void)_updateVisibilityState:(long long)arg1;
- (void)_performUpdateWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)_requestEncodedLayerTreeAtURL:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;
- (void)_openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2;
- (void)_setMaximumSize:(struct CGSize)arg1 forDisplayMode:(long long)arg2;
- (void)_setActiveDisplayMode:(long long)arg1;
- (void)__viewServiceDidUnregisterScrollToTopView;
- (void)__viewServiceDidRegisterScrollToTopView;
- (_Bool)_serviceHasScrollToTopView;
- (_Bool)__shouldRemoteViewControllerFenceOperations;
- (id)disconnect;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

