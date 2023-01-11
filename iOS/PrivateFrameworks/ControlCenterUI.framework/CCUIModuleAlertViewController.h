//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ControlCenterUI/CCUIContentModuleContainerViewControllerDelegate-Protocol.h>

@class CCSModulePresentationOptions, CCUIContentModuleContainerViewController, CCUIModuleInstance, MTMaterialView, NSString, UIView;
@protocol CCUIModuleAlertViewControllerDelegate;

@interface CCUIModuleAlertViewController : UIViewController <CCUIContentModuleContainerViewControllerDelegate>
{
    CCUIContentModuleContainerViewController *_moduleContainerViewController;
    CCUIModuleInstance *_moduleInstance;
    UIView *_contentView;
    MTMaterialView *_blurView;
    CCSModulePresentationOptions *_presentationOptions;
    NSString *_moduleIdentifier;
    id <CCUIModuleAlertViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <CCUIModuleAlertViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *moduleIdentifier; // @synthesize moduleIdentifier=_moduleIdentifier;
@property(readonly, copy, nonatomic) CCSModulePresentationOptions *presentationOptions; // @synthesize presentationOptions=_presentationOptions;
- (void).cxx_destruct;
- (void)contentModuleContainerViewControllerDismissPresentedContent:(id)arg1;
- (void)contentModuleContainerViewController:(id)arg1 willDismissViewController:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 willPresentViewController:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didCloseExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 willCloseExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didOpenExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 willOpenExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didFinishInteractionWithModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didBeginInteractionWithModule:(id)arg2;
- (_Bool)contentModuleContainerViewController:(id)arg1 canBeginInteractionWithModule:(id)arg2;
- (struct CGRect)compactModeFrameForContentModuleContainerViewController:(id)arg1;
- (void)dismissModulePresentedContentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) double backgroundViewWeighting; // @dynamic backgroundViewWeighting;
@property(readonly, nonatomic) UIView *moduleAlertView; // @dynamic moduleAlertView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithModuleIdentifier:(id)arg1 presentationOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
