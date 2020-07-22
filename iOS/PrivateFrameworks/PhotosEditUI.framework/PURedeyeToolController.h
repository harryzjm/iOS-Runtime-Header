//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosEditUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, PUPhotoEditOverlayBadge, PURedeyeToolControllerSpec, UITapGestureRecognizer;

@interface PURedeyeToolController <UIGestureRecognizerDelegate>
{
    PUPhotoEditOverlayBadge *_instructionLabel;
    NSArray *_instructionLabelConstraints;
    PUPhotoEditOverlayBadge *_failureLabel;
    NSArray *_failureLabelConstraints;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSMutableArray *_knownCorrections;
    _Bool _failureAnimationIsInProgress;
    _Bool _isModelChangeLocal;
}

- (void).cxx_destruct;
- (void)_correctRedEyeAtPoint:(struct CGPoint)arg1;
- (_Bool)_removeCorrectionAtPoint:(struct CGPoint)arg1;
- (void)_handleRedeyeButton:(id)arg1;
- (void)_animateInstructionAppearance;
- (void)_animateFailureAppearance;
- (void)_showChangeIndicatorAtPoint:(struct CGPoint)arg1 isFailure:(_Bool)arg2;
- (void)_loadCorrectionsFromModelAnimated:(_Bool)arg1;
- (void)flashAutoRedEyeCorrections;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (id)selectedToolbarIcon;
- (id)toolbarIcon;
- (_Bool)wantsSecondaryToolbarVisible;
- (_Bool)wantsZoomAndPanEnabled;
- (void)photoEditModelDidChange;
- (id)localizedName;
- (void)didResignActiveTool;
- (void)updateViewConstraints;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didBecomeActiveTool;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) PURedeyeToolControllerSpec *spec; // @dynamic spec;
@property(readonly) Class superclass;

@end

