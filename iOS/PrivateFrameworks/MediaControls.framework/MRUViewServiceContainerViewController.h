//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MPMediaControlsConfiguration, MRUViewServiceRoutingViewController, MTMaterialView, NSString, UIView;

__attribute__((visibility("hidden")))
@interface MRUViewServiceContainerViewController : UIViewController
{
    MPMediaControlsConfiguration *_configuration;
    CDUnknownBlockType _dismissalBlock;
    CDUnknownBlockType _customRowTappedBlock;
    MRUViewServiceRoutingViewController *_routingViewController;
    UIView *_sourceView;
    MTMaterialView *_materialView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MTMaterialView *materialView; // @synthesize materialView=_materialView;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) MRUViewServiceRoutingViewController *routingViewController; // @synthesize routingViewController=_routingViewController;
@property(copy, nonatomic) CDUnknownBlockType customRowTappedBlock; // @synthesize customRowTappedBlock=_customRowTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType dismissalBlock; // @synthesize dismissalBlock=_dismissalBlock;
@property(retain, nonatomic) MPMediaControlsConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)updateMaterialForPresenting:(_Bool)arg1;
- (_Bool)shouldPresentUsingPopover;
- (void)viewServiceRoutingViewControllerDidDismiss:(id)arg1 withCustomRowTapped:(id)arg2;
- (void)viewServiceRoutingViewControllerDidDismiss:(id)arg1;
- (void)viewServiceRoutingViewControllerDidChangeSize:(id)arg1;
- (void)transitionToVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)presentationControllerWillDismiss:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (_Bool)prefersStatusBarHidden;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

