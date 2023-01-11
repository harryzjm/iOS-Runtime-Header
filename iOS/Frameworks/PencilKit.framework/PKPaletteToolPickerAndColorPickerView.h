//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKEdgeLocatable-Protocol.h>
#import <PencilKit/PKPalettePopoverDismissing-Protocol.h>
#import <PencilKit/PKPaletteViewSizeScaling-Protocol.h>

@class NSLayoutConstraint, NSString, PKDrawingPaletteInputAssistantView, PKPaletteColorPickerContainerView, PKPaletteColorPickerView, PKPaletteToolPickerContainerView, PKPaletteToolPickerView, UIStackView;

@interface PKPaletteToolPickerAndColorPickerView : UIView <PKEdgeLocatable, PKPalettePopoverDismissing, PKPaletteViewSizeScaling>
{
    _Bool _isSmallestSupportedCompactWidth;
    _Bool _colorPickerViewVisible;
    _Bool _inputAssistantViewVisible;
    unsigned long long _edgeLocation;
    double _scalingFactor;
    PKPaletteToolPickerContainerView *_toolPickerContainerView;
    PKPaletteColorPickerContainerView *_colorPickerContainerView;
    PKDrawingPaletteInputAssistantView *_paletteInputAssistantView;
    long long _contextEditingMode;
    UIStackView *_stackView;
    NSLayoutConstraint *_toolPickerContainerViewWidthConstraint;
    NSLayoutConstraint *_toolPickerContainerViewHeightConstraint;
    NSLayoutConstraint *_compactToolPickerContainerViewWidthConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *compactToolPickerContainerViewWidthConstraint; // @synthesize compactToolPickerContainerViewWidthConstraint=_compactToolPickerContainerViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *toolPickerContainerViewHeightConstraint; // @synthesize toolPickerContainerViewHeightConstraint=_toolPickerContainerViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *toolPickerContainerViewWidthConstraint; // @synthesize toolPickerContainerViewWidthConstraint=_toolPickerContainerViewWidthConstraint;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic, getter=isInputAssistantViewVisible) _Bool inputAssistantViewVisible; // @synthesize inputAssistantViewVisible=_inputAssistantViewVisible;
@property(nonatomic, getter=isColorPickerViewVisible) _Bool colorPickerViewVisible; // @synthesize colorPickerViewVisible=_colorPickerViewVisible;
@property(nonatomic) _Bool isSmallestSupportedCompactWidth; // @synthesize isSmallestSupportedCompactWidth=_isSmallestSupportedCompactWidth;
@property(nonatomic) long long contextEditingMode; // @synthesize contextEditingMode=_contextEditingMode;
@property(readonly, nonatomic) PKDrawingPaletteInputAssistantView *paletteInputAssistantView; // @synthesize paletteInputAssistantView=_paletteInputAssistantView;
@property(retain, nonatomic) PKPaletteColorPickerContainerView *colorPickerContainerView; // @synthesize colorPickerContainerView=_colorPickerContainerView;
@property(retain, nonatomic) PKPaletteToolPickerContainerView *toolPickerContainerView; // @synthesize toolPickerContainerView=_toolPickerContainerView;
@property(nonatomic) double scalingFactor; // @synthesize scalingFactor=_scalingFactor;
@property(nonatomic) unsigned long long edgeLocation; // @synthesize edgeLocation=_edgeLocation;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dismissPalettePopoverWithCompletion:(CDUnknownBlockType)arg1;
- (double)_stackViewSpacing;
- (void)_updateUI;
- (_Bool)_useCompactSize;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) PKPaletteColorPickerView *colorPickerView;
@property(readonly, nonatomic) PKPaletteToolPickerView *toolPickerView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
