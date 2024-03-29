//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, NSDate, NSString, UIDragInteraction, UIImageView, UILongPressGestureRecognizer, UIPanGestureRecognizer, UISelectionFeedbackGenerator, UITapGestureRecognizer, VKCRemoveBackgroundVideoPreviewResult, VKCSubjectLiftView, _UIStickerPickerViewController;
@protocol VKCImageSubjectHighlightViewDelegate;

__attribute__((visibility("hidden")))
@interface VKCImageSubjectHighlightView
{
    _Bool _isLivePhoto;
    _Bool _subjectInteractionInProgress;
    _Bool _tapToSelectModeEnabled;
    _Bool _subjectViewUserInteractionDisabled;
    _Bool _shouldShowCalloutOnDragCancel;
    _Bool _glowLayerWasActiveOnLift;
    _Bool _isHidingMenuController;
    _Bool _isSelectAllActive;
    _Bool _isLiftingEmptyItemArray;
    _Bool _isLivePhotoCheckCompleted;
    _Bool _subjectAnalysisCompleteWhenTouchesBegan;
    _Bool _analysisDelayTimerActive;
    id <VKCImageSubjectHighlightViewDelegate> _delegate;
    unsigned long long _subjectHighlightState;
    UILongPressGestureRecognizer *_livePhotoPlayGR;
    UITapGestureRecognizer *_tapGR;
    UIDragInteraction *_dragInteraction;
    UIPanGestureRecognizer *_coyotePanGR;
    CALayer *_colorMaskLayer;
    struct CGImage *_colorMaskImage;
    VKCSubjectLiftView *_currentLiftView;
    UIImageView *_currentLiftImageView;
    double _dragInteractionStartTime;
    NSDate *_livePhotoStartTime;
    NSDate *_calloutStartTime;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    _UIStickerPickerViewController *_stickerPickerViewController;
    VKCRemoveBackgroundVideoPreviewResult *_videoPreview;
    struct CGPoint _dragInteractionStartLocation;
}

+ (_Bool)visualLookUpYear3InvocationEnabled;
- (void).cxx_destruct;
@property(retain, nonatomic) VKCRemoveBackgroundVideoPreviewResult *videoPreview; // @synthesize videoPreview=_videoPreview;
@property(retain, nonatomic) _UIStickerPickerViewController *stickerPickerViewController; // @synthesize stickerPickerViewController=_stickerPickerViewController;
@property(retain, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(nonatomic) _Bool analysisDelayTimerActive; // @synthesize analysisDelayTimerActive=_analysisDelayTimerActive;
@property(nonatomic) _Bool subjectAnalysisCompleteWhenTouchesBegan; // @synthesize subjectAnalysisCompleteWhenTouchesBegan=_subjectAnalysisCompleteWhenTouchesBegan;
@property(nonatomic) _Bool isLivePhotoCheckCompleted; // @synthesize isLivePhotoCheckCompleted=_isLivePhotoCheckCompleted;
@property(nonatomic) _Bool isLiftingEmptyItemArray; // @synthesize isLiftingEmptyItemArray=_isLiftingEmptyItemArray;
@property(nonatomic) _Bool isSelectAllActive; // @synthesize isSelectAllActive=_isSelectAllActive;
@property(retain, nonatomic) NSDate *calloutStartTime; // @synthesize calloutStartTime=_calloutStartTime;
@property(retain, nonatomic) NSDate *livePhotoStartTime; // @synthesize livePhotoStartTime=_livePhotoStartTime;
@property(nonatomic) struct CGPoint dragInteractionStartLocation; // @synthesize dragInteractionStartLocation=_dragInteractionStartLocation;
@property(nonatomic) double dragInteractionStartTime; // @synthesize dragInteractionStartTime=_dragInteractionStartTime;
@property(nonatomic) __weak UIImageView *currentLiftImageView; // @synthesize currentLiftImageView=_currentLiftImageView;
@property(nonatomic) __weak VKCSubjectLiftView *currentLiftView; // @synthesize currentLiftView=_currentLiftView;
@property(nonatomic) struct CGImage *colorMaskImage; // @synthesize colorMaskImage=_colorMaskImage;
@property(retain, nonatomic) CALayer *colorMaskLayer; // @synthesize colorMaskLayer=_colorMaskLayer;
@property(nonatomic) _Bool isHidingMenuController; // @synthesize isHidingMenuController=_isHidingMenuController;
@property(nonatomic) _Bool glowLayerWasActiveOnLift; // @synthesize glowLayerWasActiveOnLift=_glowLayerWasActiveOnLift;
@property(nonatomic) _Bool shouldShowCalloutOnDragCancel; // @synthesize shouldShowCalloutOnDragCancel=_shouldShowCalloutOnDragCancel;
@property(retain, nonatomic) UIPanGestureRecognizer *coyotePanGR; // @synthesize coyotePanGR=_coyotePanGR;
@property(retain, nonatomic) UIDragInteraction *dragInteraction; // @synthesize dragInteraction=_dragInteraction;
@property(retain, nonatomic) UITapGestureRecognizer *tapGR; // @synthesize tapGR=_tapGR;
@property(retain, nonatomic) UILongPressGestureRecognizer *livePhotoPlayGR; // @synthesize livePhotoPlayGR=_livePhotoPlayGR;
@property(nonatomic) unsigned long long subjectHighlightState; // @synthesize subjectHighlightState=_subjectHighlightState;
@property(nonatomic) _Bool subjectViewUserInteractionDisabled; // @synthesize subjectViewUserInteractionDisabled=_subjectViewUserInteractionDisabled;
@property(nonatomic) _Bool tapToSelectModeEnabled; // @synthesize tapToSelectModeEnabled=_tapToSelectModeEnabled;
@property(nonatomic) _Bool subjectInteractionInProgress; // @synthesize subjectInteractionInProgress=_subjectInteractionInProgress;
@property(nonatomic) __weak id <VKCImageSubjectHighlightViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isLivePhoto; // @synthesize isLivePhoto=_isLivePhoto;
- (void)stickerPickerViewControllerDidDismiss;
- (void)stickerPickerViewControllerDidLoad;
- (struct CGRect)videoPreviewNormalizedCropRect;
- (CDStruct_5c5366e1)videoPreviewTimeRange;
- (id)videoPreviewSubjectMatteForImage:(id)arg1 atCompositionTime:(CDStruct_1b6d18a9)arg2;
- (id)videoPreviewSubjectMatteAtCompositionTime:(CDStruct_1b6d18a9)arg1;
- (void)createStickerRepresentationsAtIndexSet:(id)arg1 type:(unsigned long long)arg2 stickerIDs:(id)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (struct CGRect)subjectBoundsClippedToVisibleRectWithShouldInsetForCallout:(_Bool)arg1;
- (id)createItemProvider;
- (void)copy:(id)arg1;
- (void)_share:(id)arg1;
- (void)_define:(id)arg1;
- (void)_share;
- (void)showSharingPaneForURL:(id)arg1 sourceRect:(struct CGRect)arg2;
- (void)_tempGenerateStickerFromLivePhotoIfNecessaryWithProgress:(CDUnknownBlockType)arg1;
- (void)menuControllerWillHide:(id)arg1;
- (void)selectAndShowCalloutForTapToSelectModeAtPoint:(struct CGPoint)arg1;
- (void)didTap:(id)arg1;
- (void)_dismissCard;
- (void)_presentStickerPickerViewController;
- (void)_selectAllSubjects:(id)arg1;
- (void)_addSticker:(id)arg1;
- (void)_shareHeics:(id)arg1;
- (void)_configureGlowWithShowBurst:(_Bool)arg1 burstPoint:(struct CGPoint)arg2;
- (void)showCalloutMenuAtLocation:(struct CGPoint)arg1 checkDelegate:(_Bool)arg2 showPulse:(_Bool)arg3;
- (void)highlightSubjectAtIndexSet:(id)arg1 showCallout:(_Bool)arg2 showBurst:(_Bool)arg3 burstPoint:(struct CGPoint)arg4 animated:(_Bool)arg5;
- (void)hideCalloutMenuIfNecessaryWithClearSelectAll:(_Bool)arg1;
- (void)hideCalloutMenuIfNecessary;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)livePhotoLongPress:(id)arg1;
- (void)livePhotoCoyotePan:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (void)setGlowLayerActive:(_Bool)arg1;
- (void)handleCancelForUndraggedLiftForInteraction:(id)arg1;
- (void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg1;
- (_Bool)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)targetedPreviewForCurrentSubject;
- (id)springAnimationWithFromValue:(id)arg1 toValue:(id)arg2 key:(id)arg3;
- (id)animationWithDuration:(double)arg1 fromValue:(id)arg2 toValue:(id)arg3 key:(id)arg4;
- (void)setSubjectHighlightState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)stringForHighlightState:(unsigned long long)arg1;
- (void)setSubjectContext:(id)arg1;
- (void)beginImageSubjectAnalysisWithDelayIfNecessary;
- (void)updateSubjectInteractionInProgressIfNecessary;
- (void)setNormalizedVisibleRect:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool subjectHighlightActive;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)buildMenuWithBuilder:(id)arg1;
- (void)setRecognitionResult:(id)arg1;
- (void)didMoveToWindow;
- (void)setHidden:(_Bool)arg1;
- (_Bool)canBecomeFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

