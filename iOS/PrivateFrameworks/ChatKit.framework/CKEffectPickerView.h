//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <ChatKit/UICollectionViewDataSource-Protocol.h>
#import <ChatKit/UICollectionViewDelegate-Protocol.h>

@class CABackdropLayer, CALayer, CKBalloonView, CKChatControllerDummyAnimator, CKFullScreenEffectManager, NSArray, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString, UIButton, UICollectionView, UIFont, UILabel, UIPageControl, UIPanGestureRecognizer, UISegmentedControl, _UIBackdropView;
@protocol CKEffectPickerViewDelegate;

@interface CKEffectPickerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    BOOL _controlColor;
    _Bool _needsSwitcherAnimation;
    _Bool _isAnimating;
    _Bool _usesDarkVibrancyForLayers;
    id <CKEffectPickerViewDelegate> _delegate;
    UIView *_hintContainer;
    UIView *_peekContainer;
    CABackdropLayer *_backdrop;
    CALayer *_blueContrastLayer;
    CABackdropLayer *_segmentedBackdrop;
    CKFullScreenEffectManager *_fsem;
    NSArray *_momentIdentifiers;
    NSMutableDictionary *_animationTimers;
    NSMutableDictionary *_animatedCells;
    NSMutableDictionary *_pausedAnimatedCells;
    UIPageControl *_pageControl;
    UILabel *_mainLabel;
    UILabel *_momentTitleLabel;
    UIFont *_effectLabelFont;
    UICollectionView *_momentsCollectionView;
    UIView *_backgroundView;
    _UIBackdropView *_accessibilityBackdropView;
    NSLayoutConstraint *_typeSegmentedControlBottomConstraint;
    NSLayoutConstraint *_mainLabelBottomConstraint;
    NSLayoutConstraint *_lastEffectDotTopConstraint;
    UIPanGestureRecognizer *_panGestureRecognizer;
    CKChatControllerDummyAnimator *_dummyAnimator;
    UIView *_hintBlackText;
    UIView *_hintSendButton;
    UIButton *_closeButton;
    UIView *_roundedContainerView;
    CKBalloonView *_balloonView;
    NSMutableArray *_effectLabels;
    NSMutableDictionary *_effectDotConstraintsThatChange;
    unsigned long long _selectedIndex;
    NSMutableArray *_effectDotButtons;
    NSMutableArray *_effectDescriptiveLabels;
    NSMutableArray *_effectSendButtons;
    UIButton *_sendMomentButton;
    UISegmentedControl *_typeSegmentedControl;
    NSLayoutConstraint *_roundedContainerViewTopConstraint;
    NSLayoutConstraint *_closeButtonBottomConstraint;
    NSMutableArray *_effectIdentifiers;
    struct CGPoint _balloonViewOrigin;
}

+ (_Bool)shouldUseLargeScreenDimension;
@property(retain, nonatomic) NSMutableArray *effectIdentifiers; // @synthesize effectIdentifiers=_effectIdentifiers;
@property(retain, nonatomic) NSLayoutConstraint *closeButtonBottomConstraint; // @synthesize closeButtonBottomConstraint=_closeButtonBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *roundedContainerViewTopConstraint; // @synthesize roundedContainerViewTopConstraint=_roundedContainerViewTopConstraint;
@property(retain, nonatomic) UISegmentedControl *typeSegmentedControl; // @synthesize typeSegmentedControl=_typeSegmentedControl;
@property(retain, nonatomic) UIButton *sendMomentButton; // @synthesize sendMomentButton=_sendMomentButton;
@property(retain, nonatomic) NSMutableArray *effectSendButtons; // @synthesize effectSendButtons=_effectSendButtons;
@property(retain, nonatomic) NSMutableArray *effectDescriptiveLabels; // @synthesize effectDescriptiveLabels=_effectDescriptiveLabels;
@property(retain, nonatomic) NSMutableArray *effectDotButtons; // @synthesize effectDotButtons=_effectDotButtons;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSMutableDictionary *effectDotConstraintsThatChange; // @synthesize effectDotConstraintsThatChange=_effectDotConstraintsThatChange;
@property(retain, nonatomic) NSMutableArray *effectLabels; // @synthesize effectLabels=_effectLabels;
@property(retain, nonatomic) CKBalloonView *balloonView; // @synthesize balloonView=_balloonView;
@property(retain, nonatomic) UIView *roundedContainerView; // @synthesize roundedContainerView=_roundedContainerView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) _Bool usesDarkVibrancyForLayers; // @synthesize usesDarkVibrancyForLayers=_usesDarkVibrancyForLayers;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) struct CGPoint balloonViewOrigin; // @synthesize balloonViewOrigin=_balloonViewOrigin;
@property(nonatomic) UIView *hintSendButton; // @synthesize hintSendButton=_hintSendButton;
@property(nonatomic) UIView *hintBlackText; // @synthesize hintBlackText=_hintBlackText;
@property(nonatomic) _Bool needsSwitcherAnimation; // @synthesize needsSwitcherAnimation=_needsSwitcherAnimation;
@property(retain, nonatomic) CKChatControllerDummyAnimator *dummyAnimator; // @synthesize dummyAnimator=_dummyAnimator;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) NSLayoutConstraint *lastEffectDotTopConstraint; // @synthesize lastEffectDotTopConstraint=_lastEffectDotTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *mainLabelBottomConstraint; // @synthesize mainLabelBottomConstraint=_mainLabelBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *typeSegmentedControlBottomConstraint; // @synthesize typeSegmentedControlBottomConstraint=_typeSegmentedControlBottomConstraint;
@property(retain, nonatomic) _UIBackdropView *accessibilityBackdropView; // @synthesize accessibilityBackdropView=_accessibilityBackdropView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UICollectionView *momentsCollectionView; // @synthesize momentsCollectionView=_momentsCollectionView;
@property(retain, nonatomic) UIFont *effectLabelFont; // @synthesize effectLabelFont=_effectLabelFont;
@property(nonatomic) BOOL controlColor; // @synthesize controlColor=_controlColor;
@property(retain, nonatomic) UILabel *momentTitleLabel; // @synthesize momentTitleLabel=_momentTitleLabel;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) NSMutableDictionary *pausedAnimatedCells; // @synthesize pausedAnimatedCells=_pausedAnimatedCells;
@property(retain, nonatomic) NSMutableDictionary *animatedCells; // @synthesize animatedCells=_animatedCells;
@property(retain, nonatomic) NSMutableDictionary *animationTimers; // @synthesize animationTimers=_animationTimers;
@property(copy, nonatomic) NSArray *momentIdentifiers; // @synthesize momentIdentifiers=_momentIdentifiers;
@property(retain, nonatomic) CKFullScreenEffectManager *fsem; // @synthesize fsem=_fsem;
@property(retain, nonatomic) CABackdropLayer *segmentedBackdrop; // @synthesize segmentedBackdrop=_segmentedBackdrop;
@property(retain, nonatomic) CALayer *blueContrastLayer; // @synthesize blueContrastLayer=_blueContrastLayer;
@property(retain, nonatomic) CABackdropLayer *backdrop; // @synthesize backdrop=_backdrop;
@property(retain, nonatomic) UIView *peekContainer; // @synthesize peekContainer=_peekContainer;
@property(retain, nonatomic) UIView *hintContainer; // @synthesize hintContainer=_hintContainer;
@property(nonatomic) id <CKEffectPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_accessibilityReduceTransparencyStatusDidChange;
- (id)_defaultSendAnimationContextForAnimationPreview;
- (void)_applicationWillEnterForeground;
- (void)_applicationDidEnterBackground;
- (void)startAnimationPreviewForIdentifier:(id)arg1;
- (void)_touchUpInsideDotButton:(id)arg1;
- (void)resetDotConstraintsToDefault;
- (void)_animateOutSendButton:(id)arg1;
- (void)_animateInSendButton:(id)arg1;
- (void)_touchUpInsideSendMomentButton:(id)arg1;
- (void)_touchUpInsideSendButton:(id)arg1;
- (void)_touchUpInsideCloseButton:(id)arg1;
- (void)cancelImpactSelection;
- (void)_panGesture:(id)arg1;
- (void)effectTypeDidChange:(id)arg1;
- (void)updateMomentTitle:(_Bool)arg1;
- (void)pageControlChanged:(id)arg1;
- (void)handleTouchMoved:(struct CGPoint)arg1;
- (void)handleTouchUp:(struct CGPoint)arg1;
- (void)_startSwitcherAnimationIfNecessary;
- (void)_setNeedsSwitcherAnimationIfNecessary;
- (void)scrollViewDidScroll:(id)arg1;
- (void)invalidateAllAnimationTimers;
- (void)removeAnimationTimerForCell:(id)arg1;
- (void)addAnimationTimerForCell:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)shouldAnimatePreviousLabelForCancel:(id)arg1;
- (double)offsetYForLabelAtIndex:(long long)arg1 withInitialY:(double)arg2;
- (void)_animateSelectedEffectLabelAtIndex:(unsigned long long)arg1 fromPreviousIndex:(unsigned long long)arg2;
- (id)_glyphLayerForButtonAnimationWithGlyphName:(id)arg1;
- (void)_animateOut;
- (void)_stopBalloonAnimation;
- (void)_animateIn;
- (_Bool)_keyboardIsOnTopOfEffectPickerWindow;
- (id)_blackTextReplica;
- (void)_updateMomentsBackgroundColor;
- (struct CGRect)_updateBalloonViewOrigin:(struct CGRect)arg1 forButtonFrame:(struct CGRect)arg2;
- (void)_updateBalloonViewPositionAnimated:(_Bool)arg1;
- (void)_updateRoundedContainerView;
- (void)_adjustMainLabelAndTypeSegmentedControlIfNecessary;
- (void)_setBalloonText:(id)arg1 withColor:(id)arg2;
- (void)_resizeBalloon;
- (void)addEffect:(id)arg1 withDescriptiveText:(id)arg2 withIdentifier:(id)arg3;
- (void)setBalloonText:(id)arg1;
- (void)updateColor:(BOOL)arg1;
- (void)updateHintTransition:(double)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (long long)selectedMomentIndex;
- (void)setCloseButtonYPosition:(double)arg1;
- (void)activateTextSizeDependentConstraintsForSendButtonFrame:(struct CGRect)arg1;
- (void)contentSizeCategoryDidChange;
- (void)safeAreaInsetsDidChange;
- (id)initWithFrame:(struct CGRect)arg1 sendButtonFrame:(struct CGRect)arg2 balloonViewOrigin:(struct CGPoint)arg3 composition:(id)arg4 color:(BOOL)arg5;
- (double)marginBetweenPickerDotButtons;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

