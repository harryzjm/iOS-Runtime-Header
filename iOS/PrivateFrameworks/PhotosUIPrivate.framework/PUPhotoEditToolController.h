//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CEKEdgeGradientView, NSArray, NSMutableArray, NSString, NUComposition, NURenderPipelineFilter, PEValuesCalculator, PFSlowMotionTimeRangeMapper, PICompositionController, PLEditSource, PUPhotoEditAggregateSession, PUPhotoEditToolControllerSpec, PUPhotoEditViewControllerSpec, UIColor, UIImage, UIView, _PUPhotoEditToolGradientView;
@protocol PUEditableAsset, PUPhotoEditToolControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoEditToolController : UIViewController
{
    NSString *_backdropViewGroupName;
    CEKEdgeGradientView *_gradientMask;
    _PUPhotoEditToolGradientView *_gradientView;
    _Bool _toolbarGlyphUsesHierarchicalColor;
    _Bool _performingLiveInteraction;
    _Bool _hasMediaScrubber;
    _Bool _wantsScrubberKeyControl;
    _Bool _wantsSliderKeyControl;
    long long _layoutOrientation;
    id <PUEditableAsset> _asset;
    PICompositionController *_compositionController;
    PLEditSource *_editSource;
    PEValuesCalculator *_valuesCalculator;
    PUPhotoEditToolControllerSpec *_toolControllerSpec;
    PUPhotoEditViewControllerSpec *_photoEditSpec;
    id <PUPhotoEditToolControllerDelegate> _delegate;
    PUPhotoEditAggregateSession *_aggregateSession;
    UIView *_toolContainerView;
    double _toolGradientDistance;
    NSString *_localizedName;
    UIImage *_toolbarIcon;
    NSString *_toolbarIconGlyphName;
    UIImage *_selectedToolbarIcon;
    NSString *_selectedToolbarIconGlyphName;
    NSString *_toolbarIconAccessibilityLabel;
    UIView *_leftToolbarView;
    NSMutableArray *_mutableEditActionActivites;
    PFSlowMotionTimeRangeMapper *_slowMotionTimeMapper;
    NUComposition *_storedComposition;
    long long _storedCompositionCount;
    CDUnknownBlockType _ppt_didBecomeActiveToolBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType ppt_didBecomeActiveToolBlock; // @synthesize ppt_didBecomeActiveToolBlock=_ppt_didBecomeActiveToolBlock;
@property(readonly, nonatomic) _Bool wantsSliderKeyControl; // @synthesize wantsSliderKeyControl=_wantsSliderKeyControl;
@property(readonly, nonatomic) _Bool wantsScrubberKeyControl; // @synthesize wantsScrubberKeyControl=_wantsScrubberKeyControl;
@property(nonatomic) long long storedCompositionCount; // @synthesize storedCompositionCount=_storedCompositionCount;
@property(retain, nonatomic) NUComposition *storedComposition; // @synthesize storedComposition=_storedComposition;
@property(retain, nonatomic) PFSlowMotionTimeRangeMapper *slowMotionTimeMapper; // @synthesize slowMotionTimeMapper=_slowMotionTimeMapper;
@property(retain, nonatomic) NSMutableArray *mutableEditActionActivites; // @synthesize mutableEditActionActivites=_mutableEditActionActivites;
@property(readonly, nonatomic) UIView *leftToolbarView; // @synthesize leftToolbarView=_leftToolbarView;
@property(nonatomic) _Bool hasMediaScrubber; // @synthesize hasMediaScrubber=_hasMediaScrubber;
@property(nonatomic, getter=isPerformingLiveInteraction) _Bool performingLiveInteraction; // @synthesize performingLiveInteraction=_performingLiveInteraction;
@property(readonly, nonatomic) NSString *toolbarIconAccessibilityLabel; // @synthesize toolbarIconAccessibilityLabel=_toolbarIconAccessibilityLabel;
@property(readonly, nonatomic) _Bool toolbarGlyphUsesHierarchicalColor; // @synthesize toolbarGlyphUsesHierarchicalColor=_toolbarGlyphUsesHierarchicalColor;
@property(readonly, nonatomic) NSString *selectedToolbarIconGlyphName; // @synthesize selectedToolbarIconGlyphName=_selectedToolbarIconGlyphName;
@property(readonly, nonatomic) UIImage *selectedToolbarIcon; // @synthesize selectedToolbarIcon=_selectedToolbarIcon;
@property(readonly, nonatomic) NSString *toolbarIconGlyphName; // @synthesize toolbarIconGlyphName=_toolbarIconGlyphName;
@property(readonly, nonatomic) UIImage *toolbarIcon; // @synthesize toolbarIcon=_toolbarIcon;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(nonatomic) double toolGradientDistance; // @synthesize toolGradientDistance=_toolGradientDistance;
@property(readonly, nonatomic) UIView *toolContainerView; // @synthesize toolContainerView=_toolContainerView;
@property(retain, nonatomic) PUPhotoEditAggregateSession *aggregateSession; // @synthesize aggregateSession=_aggregateSession;
@property(nonatomic) __weak id <PUPhotoEditToolControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PUPhotoEditViewControllerSpec *photoEditSpec; // @synthesize photoEditSpec=_photoEditSpec;
@property(retain, nonatomic) PUPhotoEditToolControllerSpec *toolControllerSpec; // @synthesize toolControllerSpec=_toolControllerSpec;
@property(readonly, nonatomic) PEValuesCalculator *valuesCalculator; // @synthesize valuesCalculator=_valuesCalculator;
@property(readonly, nonatomic) PLEditSource *editSource; // @synthesize editSource=_editSource;
@property(readonly, nonatomic) PICompositionController *compositionController; // @synthesize compositionController=_compositionController;
@property(readonly, nonatomic) id <PUEditableAsset> asset; // @synthesize asset=_asset;
@property(nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property(copy, nonatomic) NSString *backdropViewGroupName; // @synthesize backdropViewGroupName=_backdropViewGroupName;
- (id)_newTimeMapper;
- (CDStruct_1b6d18a9)displayedTimeForOriginalAssetTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)originalAssetTimeForDisplayedTime:(CDStruct_1b6d18a9)arg1;
- (id)accessibilityHUDItemForButton:(id)arg1;
- (struct CGRect)contentRectInCoordinateSpace:(id)arg1;
- (_Bool)shouldHideMediaView;
- (void)willFileDiagnostic;
- (void)didResignActiveTool;
- (void)willResignActiveTool;
- (void)didBecomeActiveTool;
- (void)willBecomeActiveTool;
- (_Bool)canBecomeActiveTool;
- (void)reactivate;
- (void)specDidChange;
- (void)decreaseSliderValue:(_Bool)arg1;
- (void)increaseSliderValue:(_Bool)arg1;
- (void)decreaseScrubberValue:(_Bool)arg1;
- (void)increaseScrubberValue:(_Bool)arg1;
@property(readonly, nonatomic) long long scrubberOrientation;
@property(readonly, nonatomic) _Bool supportsPreviewingOriginal;
- (_Bool)installGestureRecognizer:(id)arg1 type:(unsigned long long)arg2;
- (void)_updateTraitCollectionAndLayoutReferenceSize;
- (void)_updateTraitCollectionAndLayoutReferenceSize:(struct CGSize)arg1;
- (void)didModifyAdjustmentWithLocalizedName:(id)arg1;
- (void)willModifyAdjustment;
- (void)_registerActionWithSourceComposition:(id)arg1 localizedName:(id)arg2;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)editValuesCalculatorHasChangedGeometricValues:(id)arg1;
- (void)editValuesCalculatorHasChangedFlashStatus:(id)arg1;
- (void)editValuesCalculatorHasChangedImageValues:(id)arg1;
- (void)reloadToolbarButtons:(_Bool)arg1;
- (void)updateToolbarButtonsAnimated:(_Bool)arg1;
- (void)compositionControllerDidChangeForAdjustments:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)photoEditLivePhotoModelUpdated;
- (void)setUseGradientBackground:(_Bool)arg1 animated:(_Bool)arg2;
- (void)leavingEditWithCancel;
- (void)prepareForSave:(_Bool)arg1;
- (void)basePhotoInvalidated;
- (void)baseMediaInvalidated;
- (void)resetToDefaultValueAnimated:(_Bool)arg1;
- (_Bool)isActiveTool;
- (void)mediaViewDidScroll:(id)arg1;
- (void)mediaView:(id)arg1 didZoom:(double)arg2;
- (void)mediaViewDidEndZooming:(id)arg1;
- (void)mediaViewWillBeginZooming:(id)arg1;
- (void)mediaViewIsReady;
@property(readonly, nonatomic) long long toolControllerTag;
- (void)prepareForToolTransitionWithCompletion:(CDUnknownBlockType)arg1;
- (id)trailingToolbarViews;
@property(readonly, nonatomic) UIView *centerToolbarView;
- (id)leadingToolbarViews;
- (void)updateForIncomingAnimation;
- (void)setOriginalStillImageTime:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) NSArray *editActionActivities;
- (void)removeEditActionActivity:(id)arg1;
- (void)addEditActionActivity:(id)arg1;
- (void)_layoutToolGradient;
@property(readonly, nonatomic) PICompositionController *uneditedCompositionController;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
@property(readonly, copy, nonatomic) NURenderPipelineFilter *filter;
@property(readonly, nonatomic) _Bool handlesMediaViewInsets;
@property(readonly, nonatomic) _Bool handlesVideoPlaying;
@property(readonly, nonatomic) _Bool suppressesEditUpdates;
@property(readonly, nonatomic) _Bool wantsSecondaryToolbarVisible;
@property(readonly, nonatomic) _Bool wantsTapToToggleOriginalEnabled;
@property(readonly, nonatomic) _Bool wantsZoomAndPanEnabled;
@property(readonly, copy, nonatomic) UIColor *preferredPreviewBackgroundColor;
@property(readonly, nonatomic) _Bool wantsDefaultPreviewView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets preferredPreviewViewInsets;
@property(readonly, nonatomic) NSString *localizedResetToolActionTitle;
@property(readonly, nonatomic) _Bool canResetToDefaultValue;
- (void)setupWithAsset:(id)arg1 compositionController:(id)arg2 editSource:(id)arg3 valuesCalculator:(id)arg4;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (_Bool)canBecomeFirstResponder;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

