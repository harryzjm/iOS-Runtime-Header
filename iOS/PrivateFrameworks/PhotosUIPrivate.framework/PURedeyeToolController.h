//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CEKBadgeTextView, NSArray, NSMutableArray, NSString, PURedeyeToolControllerSpec, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface PURedeyeToolController
{
    CEKBadgeTextView *_instructionLabel;
    NSArray *_instructionLabelConstraints;
    CEKBadgeTextView *_failureLabel;
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
- (struct CGPoint)_extractRedEyePointFromCorrectionDictionary:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (long long)toolControllerTag;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (id)selectedToolbarIconGlyphName;
- (id)toolbarIconGlyphName;
- (id)selectedToolbarIcon;
- (id)toolbarIcon;
- (_Bool)wantsSecondaryToolbarVisible;
- (_Bool)wantsZoomAndPanEnabled;
- (void)compositionControllerDidChangeForAdjustments:(id)arg1;
- (id)centerToolbarView;
- (id)localizedName;
- (void)didResignActiveTool;
- (void)updateViewConstraints;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didBecomeActiveTool;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) PURedeyeToolControllerSpec *toolControllerSpec; // @dynamic toolControllerSpec;

@end

