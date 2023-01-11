//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKEdgeLocatable-Protocol.h>
#import <PencilKit/PKPaletteMoreOptionsViewControllerDelegate-Protocol.h>
#import <PencilKit/PKPalettePopoverDismissing-Protocol.h>
#import <PencilKit/PKPalettePopoverUpdating-Protocol.h>
#import <PencilKit/PKPaletteViewSizeScaling-Protocol.h>
#import <PencilKit/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, PKPaletteButton, PKPaletteButtonGroupView, PKPaletteKeyboardButton, PKPaletteMoreOptionsViewController, UIStackView, UIViewController;
@protocol PKPaletteAdditionalOptionsViewDelegate, PKPalettePopoverPresenting;

@interface PKPaletteAdditionalOptionsView : UIView <PKPaletteMoreOptionsViewControllerDelegate, UIPopoverPresentationControllerDelegate, PKEdgeLocatable, PKPalettePopoverUpdating, PKPalettePopoverDismissing, PKPaletteViewSizeScaling>
{
    _Bool _supportsAnnotationEditing;
    _Bool _autoHideOn;
    _Bool _isFingerDrawsOn;
    _Bool _shouldShowFingerDrawsOption;
    _Bool _shouldShowTapToRadarOption;
    _Bool _wantsEllipsisButtonVisible;
    _Bool _wantsInputAssistantViewVisible;
    _Bool _enableKeyboardButtons;
    unsigned long long _edgeLocation;
    double _scalingFactor;
    id <PKPalettePopoverPresenting> _palettePopoverPresenting;
    id <PKPaletteAdditionalOptionsViewDelegate> _delegate;
    long long _floatingKeyboardType;
    UIStackView *_contentStackView;
    UIStackView *_stackView;
    PKPaletteButton *_plusButton;
    PKPaletteButton *_ellipsisButton;
    PKPaletteButtonGroupView *_keyboardButtonGroupView;
    PKPaletteKeyboardButton *_keyboardButton;
    PKPaletteButton *_returnKeyButton;
    PKPaletteMoreOptionsViewController *_moreOptionsViewController;
    UIViewController *_presentedPopoverViewController;
    NSLayoutConstraint *_plusButtonWidthConstraint;
    NSLayoutConstraint *_plusButtonHeightConstraint;
    NSLayoutConstraint *_ellipsisButtonWidthConstraint;
    NSLayoutConstraint *_ellipsisButtonHeightConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *ellipsisButtonHeightConstraint; // @synthesize ellipsisButtonHeightConstraint=_ellipsisButtonHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *ellipsisButtonWidthConstraint; // @synthesize ellipsisButtonWidthConstraint=_ellipsisButtonWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *plusButtonHeightConstraint; // @synthesize plusButtonHeightConstraint=_plusButtonHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *plusButtonWidthConstraint; // @synthesize plusButtonWidthConstraint=_plusButtonWidthConstraint;
@property(retain, nonatomic) UIViewController *presentedPopoverViewController; // @synthesize presentedPopoverViewController=_presentedPopoverViewController;
@property(retain, nonatomic) PKPaletteMoreOptionsViewController *moreOptionsViewController; // @synthesize moreOptionsViewController=_moreOptionsViewController;
@property(retain, nonatomic) PKPaletteButton *returnKeyButton; // @synthesize returnKeyButton=_returnKeyButton;
@property(retain, nonatomic) PKPaletteKeyboardButton *keyboardButton; // @synthesize keyboardButton=_keyboardButton;
@property(retain, nonatomic) PKPaletteButtonGroupView *keyboardButtonGroupView; // @synthesize keyboardButtonGroupView=_keyboardButtonGroupView;
@property(retain, nonatomic) PKPaletteButton *ellipsisButton; // @synthesize ellipsisButton=_ellipsisButton;
@property(retain, nonatomic) PKPaletteButton *plusButton; // @synthesize plusButton=_plusButton;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UIStackView *contentStackView; // @synthesize contentStackView=_contentStackView;
@property(nonatomic) long long floatingKeyboardType; // @synthesize floatingKeyboardType=_floatingKeyboardType;
@property(nonatomic) _Bool enableKeyboardButtons; // @synthesize enableKeyboardButtons=_enableKeyboardButtons;
@property(nonatomic) _Bool wantsInputAssistantViewVisible; // @synthesize wantsInputAssistantViewVisible=_wantsInputAssistantViewVisible;
@property(nonatomic) _Bool wantsEllipsisButtonVisible; // @synthesize wantsEllipsisButtonVisible=_wantsEllipsisButtonVisible;
@property(nonatomic) _Bool shouldShowTapToRadarOption; // @synthesize shouldShowTapToRadarOption=_shouldShowTapToRadarOption;
@property(nonatomic) _Bool shouldShowFingerDrawsOption; // @synthesize shouldShowFingerDrawsOption=_shouldShowFingerDrawsOption;
@property(nonatomic) _Bool isFingerDrawsOn; // @synthesize isFingerDrawsOn=_isFingerDrawsOn;
@property(nonatomic, getter=isAutoHideOn) _Bool autoHideOn; // @synthesize autoHideOn=_autoHideOn;
@property(nonatomic) _Bool supportsAnnotationEditing; // @synthesize supportsAnnotationEditing=_supportsAnnotationEditing;
@property(nonatomic) __weak id <PKPaletteAdditionalOptionsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <PKPalettePopoverPresenting> palettePopoverPresenting; // @synthesize palettePopoverPresenting=_palettePopoverPresenting;
@property(nonatomic) double scalingFactor; // @synthesize scalingFactor=_scalingFactor;
@property(nonatomic) unsigned long long edgeLocation; // @synthesize edgeLocation=_edgeLocation;
- (void)_handleReturnKeyButton;
- (void)_handleKeyboardButton;
- (struct CGRect)plusButtonFrame;
- (void)dismissPalettePopoverWithCompletion:(CDUnknownBlockType)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)moreOptionsViewControllerDidSelectTapToRadar:(id)arg1;
- (void)moreOptionsViewControllerDidSelectOpenPencilSettings:(id)arg1;
- (void)moreOptionsViewControllerDidToggleFingerDraws:(id)arg1;
- (void)moreOptionsViewControllerDidToggleAutoHide:(id)arg1;
- (void)updatePopoverUI;
- (void)_didSelectEllipsisButton:(id)arg1;
- (void)_didSelectPlusButton:(id)arg1;
- (id)_keyboardButtonGroupViewButtons;
- (void)_updateUI;
- (struct CGSize)intrinsicContentSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)willMoveToSuperview:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
