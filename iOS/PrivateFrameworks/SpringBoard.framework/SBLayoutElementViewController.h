//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/SBAppPlatterDragSourceViewProviding-Protocol.h>

@class FBDisplayLayoutElement, FBSDisplayIdentity, NSString, SBLayoutElement, SBLayoutState, SBOrientationTransformWrapperView, UIView;

@interface SBLayoutElementViewController : UIViewController <SBAppPlatterDragSourceViewProviding>
{
    SBOrientationTransformWrapperView *_contentWrapperView;
    FBDisplayLayoutElement *_displayLayoutElement;
    _Bool _isViewVisible;
    _Bool _isTransitioningVisibility;
    _Bool _dragging;
    UIView *_contentContainerView;
    FBSDisplayIdentity *_displayIdentity;
    SBLayoutElement *_layoutElement;
    SBLayoutState *_layoutState;
    unsigned long long _supportedContentInterfaceOrientations;
    long long _contentWrapperInterfaceOrientation;
    struct CGRect _referenceFrame;
}

- (void).cxx_destruct;
@property(nonatomic) long long contentWrapperInterfaceOrientation; // @synthesize contentWrapperInterfaceOrientation=_contentWrapperInterfaceOrientation;
@property(readonly, nonatomic) unsigned long long supportedContentInterfaceOrientations; // @synthesize supportedContentInterfaceOrientations=_supportedContentInterfaceOrientations;
@property(readonly, nonatomic) struct CGRect referenceFrame; // @synthesize referenceFrame=_referenceFrame;
@property(readonly, nonatomic) SBLayoutState *layoutState; // @synthesize layoutState=_layoutState;
@property(readonly, nonatomic) SBLayoutElement *layoutElement; // @synthesize layoutElement=_layoutElement;
@property(readonly, nonatomic) FBSDisplayIdentity *displayIdentity; // @synthesize displayIdentity=_displayIdentity;
@property(nonatomic, getter=isDragging) _Bool dragging; // @synthesize dragging=_dragging;
@property(readonly, nonatomic) UIView *_contentContainerView; // @synthesize _contentContainerView;
- (id)containerViewForBlurContentView;
- (id)initialRimShadowFilters;
- (id)initialDiffuseShadowFilters;
- (struct SBDragPreviewShadowParameters)initialRimShadowParameters;
- (struct SBDragPreviewShadowParameters)initialDiffuseShadowParameters;
- (id)initialCornerRadiusConfiguration;
- (id)sourceView;
@property(readonly, nonatomic) _Bool _shouldDisplayLayoutElementBecomeActive;
- (id)_newDisplayLayoutElementForEntity:(id)arg1;
- (void)_updateDisplayLayoutElementWithBuilder:(CDUnknownBlockType)arg1;
- (void)_updateDisplayLayoutElementVisibility;
- (void)didEndTransitionToVisible:(_Bool)arg1;
- (void)willBeginTransitionToVisible:(_Bool)arg1;
- (void)prepareForReuse;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(struct CGRect)arg4;
- (void)invalidate;
@property(readonly, nonatomic) _Bool supportsReuse;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithDisplayIdentity:(id)arg1;
- (id)mainWorkspaceApplicationSceneLayoutElementViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
