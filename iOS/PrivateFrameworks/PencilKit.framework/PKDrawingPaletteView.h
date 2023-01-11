//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/PKDrawingPaletteViewStateSubject-Protocol.h>
#import <PencilKit/PKPaletteAdditionalOptionsViewDelegate-Protocol.h>
#import <PencilKit/PKPaletteColorPickerViewDelegate-Protocol.h>
#import <PencilKit/PKPaletteContentViewInputAssistantDelegate-Protocol.h>
#import <PencilKit/PKPaletteFloatingKeyboardControllerDelegate-Protocol.h>
#import <PencilKit/PKPalettePopoverUpdating-Protocol.h>
#import <PencilKit/PKPaletteToolPickerViewDelegate-Protocol.h>
#import <PencilKit/PKPaletteToolPreviewDelegate-Protocol.h>
#import <PencilKit/PKPaletteUndoRedoViewDelegate-Protocol.h>
#import <PencilKit/PKPaletteViewStateSubject-Protocol.h>
#import <PencilKit/PKTextInputWindowFirstResponderControllerDelegate-Protocol.h>

@class MTMaterialView, NSArray, NSLayoutConstraint, NSString, NSUndoManager, PKInk, PKPaletteContentView, PKPaletteFloatingKeyboardController, PKPaletteInputAssistantButtonProvider, PKPaletteTapToRadarCommand, PKTextInputWindowFirstResponder, PKTextInputWindowFirstResponderController, UIPencilInteraction, UIView, UIWindowScene;
@protocol PKPaletteTool, PKPaletteViewAnnotationDelegate;

@interface PKDrawingPaletteView <PKDrawingPaletteViewStateSubject, PKPaletteUndoRedoViewDelegate, PKPaletteToolPickerViewDelegate, PKPaletteColorPickerViewDelegate, PKPaletteAdditionalOptionsViewDelegate, PKPaletteToolPreviewDelegate, PKPalettePopoverUpdating, PKTextInputWindowFirstResponderControllerDelegate, PKPaletteFloatingKeyboardControllerDelegate, PKPaletteContentViewInputAssistantDelegate, PKPaletteViewStateSubject>
{
    NSUndoManager *_undoManager;
    _Bool _fingerDrawsOptionEnabled;
    _Bool _showsHandwritingTool;
    _Bool _pencilInteractionEnabledWhenNotVisible;
    _Bool _isEditingOpacity;
    _Bool _isEditingStrokeSelection;
    _Bool _supportsOpacityEditing;
    _Bool _wantsClearBackgroundColorInCompactSize;
    long long _colorUserInterfaceStyle;
    NSString *_handwritingToolLocaleIdentifier;
    MTMaterialView *_backgroundView;
    PKPaletteContentView *_contentView;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSLayoutConstraint *_contentViewWidthConstraint;
    NSLayoutConstraint *_contentViewHeightConstraint;
    UIView *_bottomThinSeparator;
    PKTextInputWindowFirstResponderController *_firstResponderController;
    PKPaletteFloatingKeyboardController *_floatingKeyboardController;
    PKPaletteInputAssistantButtonProvider *_inputAssistantButtonProvider;
    UIPencilInteraction *_pencilInteraction;
    PKPaletteTapToRadarCommand *_tapToRadarCommand;
    id <PKPaletteViewAnnotationDelegate> _annotationDelegate;
    UIView *_opacityEditingView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool wantsClearBackgroundColorInCompactSize; // @synthesize wantsClearBackgroundColorInCompactSize=_wantsClearBackgroundColorInCompactSize;
@property(readonly, nonatomic) UIView *opacityEditingView; // @synthesize opacityEditingView=_opacityEditingView;
@property(nonatomic) _Bool supportsOpacityEditing; // @synthesize supportsOpacityEditing=_supportsOpacityEditing;
@property(nonatomic) __weak id <PKPaletteViewAnnotationDelegate> annotationDelegate; // @synthesize annotationDelegate=_annotationDelegate;
@property(retain, nonatomic) PKPaletteTapToRadarCommand *tapToRadarCommand; // @synthesize tapToRadarCommand=_tapToRadarCommand;
@property(readonly, nonatomic) UIPencilInteraction *pencilInteraction; // @synthesize pencilInteraction=_pencilInteraction;
@property(retain, nonatomic) PKPaletteInputAssistantButtonProvider *inputAssistantButtonProvider; // @synthesize inputAssistantButtonProvider=_inputAssistantButtonProvider;
@property(retain, nonatomic) PKPaletteFloatingKeyboardController *floatingKeyboardController; // @synthesize floatingKeyboardController=_floatingKeyboardController;
@property(retain, nonatomic) PKTextInputWindowFirstResponderController *firstResponderController; // @synthesize firstResponderController=_firstResponderController;
@property(nonatomic) _Bool isEditingStrokeSelection; // @synthesize isEditingStrokeSelection=_isEditingStrokeSelection;
@property(nonatomic) _Bool isEditingOpacity; // @synthesize isEditingOpacity=_isEditingOpacity;
@property(retain, nonatomic) UIView *bottomThinSeparator; // @synthesize bottomThinSeparator=_bottomThinSeparator;
@property(retain, nonatomic) NSLayoutConstraint *contentViewHeightConstraint; // @synthesize contentViewHeightConstraint=_contentViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewWidthConstraint; // @synthesize contentViewWidthConstraint=_contentViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property(retain, nonatomic) PKPaletteContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MTMaterialView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic, getter=isPencilInteractionEnabledWhenNotVisible) _Bool pencilInteractionEnabledWhenNotVisible; // @synthesize pencilInteractionEnabledWhenNotVisible=_pencilInteractionEnabledWhenNotVisible;
@property(copy, nonatomic) NSString *handwritingToolLocaleIdentifier; // @synthesize handwritingToolLocaleIdentifier=_handwritingToolLocaleIdentifier;
@property(nonatomic) _Bool showsHandwritingTool; // @synthesize showsHandwritingTool=_showsHandwritingTool;
@property(nonatomic, getter=isFingerDrawsOptionEnabled) _Bool fingerDrawsOptionEnabled; // @synthesize fingerDrawsOptionEnabled=_fingerDrawsOptionEnabled;
@property(nonatomic) long long colorUserInterfaceStyle; // @synthesize colorUserInterfaceStyle=_colorUserInterfaceStyle;
- (void)_updateHandwritingAssistantItemsFromResponder:(id)arg1;
- (void)_updateHandwritingAssistantItems;
- (void)_updateInputResponderControllerInputAssistantSupressionState;
- (id)responderForFloatingKeyboardController:(id)arg1;
@property(readonly, nonatomic, getter=isHandwritingToolSelected) _Bool handwritingToolSelected;
@property(readonly, nonatomic) UIView *contextualEditingView;
@property(nonatomic) long long contextEditingMode;
- (struct CGRect)plusButtonFrame;
- (void)dismissPalettePopoverWithCompletion:(CDUnknownBlockType)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)endOpacityEditing;
- (void)startOpacityEditing;
- (void)didChangePalettePosition;
- (void)didEndAppearanceAnimation;
- (void)willStartAppearanceAnimation;
- (void)configureForDockedAtEdge:(unsigned long long)arg1;
- (void)configureForDockedAtCorner;
- (void)pencilInteractionDidTap:(id)arg1;
- (_Bool)_shouldHandlePencilInteractionWhenNotVisible;
- (_Bool)_canHandlePencilInteraction;
- (void)contentViewDidDismissInputAssistantView:(id)arg1;
- (void)contentViewDidSelectInputAssistantReturnKeyItem:(id)arg1;
- (void)contentViewDidSelectInputAssistantKeyboardItem:(id)arg1;
- (void)_presentOrDismissFloatingKeyboard;
@property(copy, nonatomic) NSArray *toolProperties;
@property(copy, nonatomic) NSArray *toolIdentifiers;
- (void)additionalOptionsViewDidPressTapToRadarButton:(id)arg1;
- (void)additionalOptionsViewDidPressReturnKeyButton:(id)arg1;
- (void)additionalOptionsViewDidPressKeyboardButton:(id)arg1;
- (void)additionalOptionsView:(id)arg1 didToggleAutoHideOption:(_Bool)arg2;
- (void)additionalOptionsViewDidSelectPlusButton:(id)arg1;
- (void)toolPreviewDidChangeToolColor:(id)arg1;
- (void)_centerPaletteContainerSubviewToCurrentlySelectedToolForEdge:(unsigned long long)arg1 needsContainerViewLayout:(_Bool)arg2;
- (void)_willDockPaletteToCorner:(unsigned long long)arg1;
- (void)_willDockPaletteToEdge:(unsigned long long)arg1 prepareForExpansion:(_Bool)arg2 isPaletteChangingOrientation:(_Bool)arg3;
- (void)hostView:(id)arg1 didDockPaletteToPosition:(long long)arg2;
- (void)hostView:(id)arg1 willDockPaletteToPosition:(long long)arg2 prepareForExpansion:(_Bool)arg3;
- (_Bool)colorPickerShouldDisplayColorSelection:(id)arg1;
- (void)colorPickerDidChangeSelectedColor:(id)arg1 isFromExtendedColorPicker:(_Bool)arg2;
- (void)toolPickerViewDidChangeTraitCollectionSizeClass:(id)arg1;
- (void)toolPickerDidToggleRulerTool:(id)arg1;
- (void)toolPickerDidChangeSelectedTool:(id)arg1;
- (void)floatingKeyboardController:(id)arg1 didChangeKeyboardType:(long long)arg2;
- (void)floatingKeyboardControllerWillHide:(id)arg1;
- (void)floatingKeyboardControllerWillShow:(id)arg1;
@property(readonly, nonatomic) PKTextInputWindowFirstResponder *windowFirstResponder;
- (void)windowFirstResponderController:(id)arg1 didChangeFirstResponder:(id)arg2;
@property(readonly, nonatomic) UIWindowScene *windowScene;
- (void)undoRedoViewDidTapRedo:(id)arg1;
- (void)undoRedoViewDidTapUndo:(id)arg1;
- (void)_updateToolPreviewForEdge:(unsigned long long)arg1;
- (_Bool)_isPaletteContentViewHidden;
- (void)_updateToolPreview;
- (id)_selectedToolViewInToolPicker;
@property(readonly, nonatomic) id <PKPaletteTool> selectedTool;
- (void)_updateColorPickerSelectedColor;
- (void)setSelectedAnnotationType:(long long)arg1;
- (void)_setToolPickerViewSelectedToolColor:(id)arg1 ignoreColorOpacity:(_Bool)arg2;
- (void)_setSelectedColor:(id)arg1;
@property(retain, nonatomic) PKInk *selectedToolInk;
- (unsigned long long)paletteViewType;
- (void)_changeWasDone:(id)arg1;
- (void)_changeWasRedone:(id)arg1;
- (void)_changeWasUndone:(id)arg1;
- (void)_releaseUndoManager;
- (void)setUndoManager:(id)arg1;
- (id)undoManager;
- (void)_updateUIForAnnotationSupportIfNeeded;
@property(readonly, nonatomic) long long floatingKeyboardType;
@property(readonly, nonatomic) _Bool enableKeyboardButtons;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
@property(readonly, copy, nonatomic) NSArray *inputAssistantItems;
- (void)updateUndoRedo;
@property(readonly, nonatomic, getter=isAnnotationSupportEnabled) _Bool annotationSupportEnabled;
- (id)_clippingViewBackgroundColor;
- (void)layoutSubviews;
- (void)updatePopoverUI;
- (struct CGSize)paletteSizeForEdge:(unsigned long long)arg1;
- (double)compactPaletteHeight;
- (void)updateConstraints;
- (_Bool)_isPaletteConsideredMinimized;
- (_Bool)_shouldShowFingerDrawsOption;
- (_Bool)_canShowFingerDrawsOption;
- (void)_updateUI;
- (_Bool)shouldAdjustShadowRadiusForMinimized;
- (double)shadowRadius;
- (double)shadowOpacity;
- (double)borderWidthForTraitCollection:(id)arg1;
- (id)borderColorForTraitCollection:(id)arg1;
- (void)_installPaletteContentViewInView:(id)arg1;
- (double)dampingRatioForThrowingFromPosition:(long long)arg1 toPosition:(long long)arg2 withVelocity:(struct CGPoint)arg3;
- (double)responseForThrowingFromPosition:(long long)arg1 toPosition:(long long)arg2 withVelocity:(struct CGPoint)arg3;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)safeAreaInsetsDidChange;
- (void)selectPenTool;
- (void)didChangePaletteScaleFactor;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic, getter=isAutoHideEnabled) _Bool autoHideEnabled;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double paletteScaleFactor;
@property(readonly) Class superclass;

@end
