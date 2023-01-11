//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PencilKit/_PKColorAlphaSliderDelegate-Protocol.h>

@class NSString, PKInk, _PKColorAlphaSlider, _PKInkThicknessPicker;
@protocol _PKInkAttributesPickerViewDelegate;

@interface _PKInkAttributesPickerView : UIView <_PKColorAlphaSliderDelegate>
{
    id <_PKInkAttributesPickerViewDelegate> _delegate;
    PKInk *_ink;
    unsigned long long _displayMode;
    double _minimumOpacityValue;
    _PKInkThicknessPicker *_thicknessPicker;
    _PKColorAlphaSlider *_colorAlphaSlider;
    UIView *_separatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) _PKColorAlphaSlider *colorAlphaSlider; // @synthesize colorAlphaSlider=_colorAlphaSlider;
@property(retain, nonatomic) _PKInkThicknessPicker *thicknessPicker; // @synthesize thicknessPicker=_thicknessPicker;
@property(nonatomic) double minimumOpacityValue; // @synthesize minimumOpacityValue=_minimumOpacityValue;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(retain, nonatomic) PKInk *ink; // @synthesize ink=_ink;
@property(nonatomic) __weak id <_PKInkAttributesPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_colorAlphaSliderUserDidEndDraggingSlider:(id)arg1;
- (void)_colorAlphaSliderUserDidStartDraggingSlider:(id)arg1;
- (void)_opacityValueChanged:(id)arg1;
- (void)_thicknessValueChanged:(id)arg1;
- (void)setInk:(id)arg1 animated:(_Bool)arg2;
- (void)_updateUI;
@property(nonatomic) long long colorUserInterfaceStyle;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithInk:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
