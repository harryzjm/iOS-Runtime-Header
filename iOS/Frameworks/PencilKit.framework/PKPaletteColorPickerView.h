//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKEdgeLocatable-Protocol.h>
#import <PencilKit/PKPaletteColorPickerControllerDelegate-Protocol.h>
#import <PencilKit/PKPalettePopoverDismissing-Protocol.h>
#import <PencilKit/PKPalettePopoverUpdating-Protocol.h>
#import <PencilKit/PKPaletteQuickColorPicking-Protocol.h>
#import <PencilKit/PKPaletteViewSizeScaling-Protocol.h>
#import <PencilKit/UICollectionViewDataSource-Protocol.h>
#import <PencilKit/UICollectionViewDelegate-Protocol.h>
#import <PencilKit/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <PencilKit/UIGestureRecognizerDelegate-Protocol.h>
#import <PencilKit/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSArray, NSString, PKPaletteMulticolorSwatch, UICollectionView, UIColor, UILongPressGestureRecognizer;
@protocol PKPaletteColorPickerController, PKPalettePopoverPresenting><PKPaletteColorPickerViewDelegate;

@interface PKPaletteColorPickerView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UIPopoverPresentationControllerDelegate, UIGestureRecognizerDelegate, PKPaletteColorPickerControllerDelegate, PKEdgeLocatable, PKPaletteQuickColorPicking, PKPalettePopoverUpdating, PKPalettePopoverDismissing, PKPaletteViewSizeScaling>
{
    unsigned long long _edgeLocation;
    double _scalingFactor;
    id <PKPalettePopoverPresenting><PKPaletteColorPickerViewDelegate> _delegate;
    long long _colorUserInterfaceStyle;
    long long _colorPickerMode;
    UICollectionView *_collectionView;
    NSArray *_swatches;
    PKPaletteMulticolorSwatch *_multicolorSwatch;
    NSArray *_swatchColors;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    id <PKPaletteColorPickerController> _colorPickerController;
    UIColor *_analyticsInitialColor;
    long long _analyticsColorChangeCount;
}

+ (id)collectionViewFlowLayoutWithItemSize:(struct CGSize)arg1 minimumLineSpacing:(double)arg2 minimumInteritemSpacing:(double)arg3;
- (void).cxx_destruct;
@property(nonatomic) long long analyticsColorChangeCount; // @synthesize analyticsColorChangeCount=_analyticsColorChangeCount;
@property(retain, nonatomic) UIColor *analyticsInitialColor; // @synthesize analyticsInitialColor=_analyticsInitialColor;
@property(retain, nonatomic) id <PKPaletteColorPickerController> colorPickerController; // @synthesize colorPickerController=_colorPickerController;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) NSArray *swatchColors; // @synthesize swatchColors=_swatchColors;
@property(retain, nonatomic) PKPaletteMulticolorSwatch *multicolorSwatch; // @synthesize multicolorSwatch=_multicolorSwatch;
@property(retain, nonatomic) NSArray *swatches; // @synthesize swatches=_swatches;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) long long colorPickerMode; // @synthesize colorPickerMode=_colorPickerMode;
@property(nonatomic) long long colorUserInterfaceStyle; // @synthesize colorUserInterfaceStyle=_colorUserInterfaceStyle;
@property(nonatomic) __weak id <PKPalettePopoverPresenting><PKPaletteColorPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double scalingFactor; // @synthesize scalingFactor=_scalingFactor;
@property(nonatomic) unsigned long long edgeLocation; // @synthesize edgeLocation=_edgeLocation;
- (id)traitCollectionWithCurrentInterfaceStyle;
- (void)reloadColorsForCurrentColorPickerMode;
- (void)toggleColorSelectionPopover;
- (void)_reloadSwatchColorsForTraitCollection:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dismissPalettePopoverWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setMulticolorSwatchColor:(id)arg1;
- (void)colorPickerControllerDidChangeSelectedColor:(id)arg1;
- (void)updatePopoverUI;
- (id)_popoverPresentingSourceview;
- (struct CGRect)_popoverPresentingSourceRect;
- (void)_showExtendedColorPicker;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (id)colorAtPoint:(struct CGPoint)arg1;
- (id)swatchWithIdentifier:(id)arg1;
- (id)swatchWithColor:(id)arg1;
- (id)_selectedSwatch;
@property(retain, nonatomic) UIColor *selectedColor;
- (_Bool)_colorPickerAllowsColorSelection;
- (_Bool)_shouldDisplayExtendedColorPickerPopoverFromColorSwatch:(id)arg1;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)intrinsicContentSize;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_swatchLongPressHandler:(id)arg1;
- (struct CGSize)swatchSize;
- (unsigned long long)_multicolorSwatchIndexForEdge:(unsigned long long)arg1;
- (void)_updateUI;
- (id)_swatchColorsForTraitCollection:(id)arg1;
- (void)_enableOrDisableLongPressGesture;
- (void)didChangePreferredContentSize:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
