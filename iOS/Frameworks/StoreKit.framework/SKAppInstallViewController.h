//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <StoreKit/SKStoreRemoteViewControllerDelegate-Protocol.h>

@class NSDictionary, NSString, SKStoreRemoteViewController, _UIResilientRemoteViewContainerViewController;

@interface SKAppInstallViewController : UIViewController <SKStoreRemoteViewControllerDelegate>
{
    NSDictionary *_parameters;
    SKStoreRemoteViewController *_remoteViewController;
    _UIResilientRemoteViewContainerViewController *_remoteContainerViewController;
}

@property(retain, nonatomic) _UIResilientRemoteViewContainerViewController *remoteContainerViewController; // @synthesize remoteContainerViewController=_remoteContainerViewController;
@property(retain, nonatomic) SKStoreRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
- (_Bool)_viewControllerIsDescendent:(id)arg1 ofViewController:(id)arg2;
- (void)_setupChildViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_requestRemoteViewController;
- (void)_addRemoteView;
- (void)storeRemoteViewController:(id)arg1 presentRequestedViewControllerWithIdentifier:(id)arg2;
- (void)storeRemoteViewControllerNeedsTabSelection:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithParameters:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

