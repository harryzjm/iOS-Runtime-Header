//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKEdgeLocatable-Protocol.h>
#import <PencilKit/PKPaletteViewSizeScaling-Protocol.h>

@class NSLayoutConstraint, NSString, PKPaletteToolPickerView;

@interface PKPaletteToolPickerContainerView : UIView <PKEdgeLocatable, PKPaletteViewSizeScaling>
{
    unsigned long long _edgeLocation;
    double _scalingFactor;
    PKPaletteToolPickerView *_toolPickerView;
    NSLayoutConstraint *_toolPickerViewTopConstraint;
    NSLayoutConstraint *_toolPickerViewBottomConstraint;
    NSLayoutConstraint *_toolPickerViewLeftConstraint;
    NSLayoutConstraint *_toolPickerViewRightConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *toolPickerViewRightConstraint; // @synthesize toolPickerViewRightConstraint=_toolPickerViewRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *toolPickerViewLeftConstraint; // @synthesize toolPickerViewLeftConstraint=_toolPickerViewLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *toolPickerViewBottomConstraint; // @synthesize toolPickerViewBottomConstraint=_toolPickerViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *toolPickerViewTopConstraint; // @synthesize toolPickerViewTopConstraint=_toolPickerViewTopConstraint;
@property(readonly, nonatomic) PKPaletteToolPickerView *toolPickerView; // @synthesize toolPickerView=_toolPickerView;
@property(nonatomic) double scalingFactor; // @synthesize scalingFactor=_scalingFactor;
@property(nonatomic) unsigned long long edgeLocation; // @synthesize edgeLocation=_edgeLocation;
- (void)traitCollectionDidChange:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateUI;
- (void)updateConstraints;
- (struct CGSize)intrinsicContentSize;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
