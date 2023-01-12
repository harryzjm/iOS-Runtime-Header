//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, PDFPageViewPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageView : UIView
{
    PDFPageViewPrivate *_private;
    _Bool _overlayViewInstalled;
}

- (void).cxx_destruct;
@property(getter=isOverlayViewInstalled) _Bool overlayViewInstalled; // @synthesize overlayViewInstalled=_overlayViewInstalled;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setState:(long long)arg1 onButtonWidgetAnnotation:(id)arg2;
- (void)setStringValue:(id)arg1 onChoiceWidgetAnnotation:(id)arg2 withTableView:(id)arg3;
- (void)setStringValue:(id)arg1 onChoiceWidgetAnnotation:(id)arg2 withTextField:(id)arg3;
- (void)setStringValue:(id)arg1 onTextWidgetAnnotation:(id)arg2 withTextView:(id)arg3;
- (_Bool)_shouldReplaceStringOnAnnotation:(id)arg1 withTextView:(id)arg2;
- (void)_setAttributedStringForAnnotation:(id)arg1 stringValue:(id)arg2 textView:(id)arg3;
- (_Bool)_allowsFormFieldEntry;
- (void)_formChanged:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_addPDFAnnotation:(id)arg1;
- (void)_addPDFAnnotationStampSignature:(id)arg1;
- (void)_choiceWidgetDone;
- (void)_addPDFAnnotationChoiceWidget:(id)arg1;
- (void)_addPDFAnnotationTextWidget:(id)arg1;
- (struct CGPoint)convertPointToPageView:(struct CGPoint)arg1;
- (struct CGAffineTransform)_rotationTransformForPageView;
- (struct CGRect)convertRectToPageView:(struct CGRect)arg1;
- (void)_updateWidgetControl:(id)arg1 forBounds:(struct CGRect)arg2;
- (void)_setuppageAnnotationEffects;
- (void)updateBookmark;
- (void)removeBookmark;
- (void)addBookmark;
- (void)_setupBookmarkLayer;
- (void)setHidden:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)markupAnnotationsForIndexSet:(id)arg1;
- (void)addMarkupWithStyle:(unsigned long long)arg1 forIndexSet:(id)arg2;
- (void)removeControlForAnnotation:(id)arg1;
- (void)_rotateActiveAnnotation;
- (void)addControlForAnnotation:(id)arg1;
- (id)activeAnnotation;
- (void)removeAnnotation:(id)arg1;
- (void)_updateAnnotationVisibility:(id)arg1;
- (void)updateAnnotation:(id)arg1;
- (void)addAnnotation:(id)arg1;
- (void)colorWidgetBackgrounds:(_Bool)arg1;
- (void)hideTileLayer:(_Bool)arg1;
- (void)previewRotatePage:(double)arg1;
- (void)addSearchSelection:(id)arg1;
- (void)setSearchSelections:(id)arg1;
- (int)backgroundImageQuality;
- (id)backgroundImage;
- (_Bool)hasBackgroundImage;
- (void)setBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2;
- (id)pageLayer;
- (id)geometryInterface;
- (id)page;
- (void)_updateBackgroundColor;
- (void)_didRotatePageNotification:(id)arg1;
- (unsigned long long)visibilityDelegateIndex;
- (void)setVisibilityDelegateIndex:(unsigned long long)arg1;
- (void)applyTileLayoutScale:(double)arg1;
- (void)restoreOriginalTileLayout;
- (void)saveOriginalTileLayout;
- (void)clearTiles;
- (void)forceTileUpdate;
- (_Bool)enablesTileUpdates;
- (void)setEnableTileUpdates:(_Bool)arg1;
- (void)scalePageLayerEffects:(double)arg1;
- (struct CGAffineTransform)layerEffectTransform;
- (void)updatePageLayerEffects;
- (void)updatePageLayerEffectForID:(id)arg1;
- (id)pageLayerEffectForID:(id)arg1;
- (void)removePageLayerEffectForID:(id)arg1;
- (void)addPageLayerEffect:(id)arg1;
- (_Bool)isVisible;
- (long long)displayBox;
- (void)setNeedsTilesUpdate;
- (id)renderingProperties;
- (void)willMoveToSuperview:(id)arg1;
- (void)dealloc;
- (id)initWithPage:(id)arg1 geometryInterface:(id)arg2 andRenderingProperties:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

