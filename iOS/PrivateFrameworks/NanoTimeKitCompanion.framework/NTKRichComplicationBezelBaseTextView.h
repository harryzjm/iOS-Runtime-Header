//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;
@protocol NTKColoringView;

@interface NTKRichComplicationBezelBaseTextView
{
    UIView<NTKColoringView> *_label;
    double _labelRotationInDegree;
    double _labelScale;
}

- (void).cxx_destruct;
- (void)_transitToHighlightState:(_Bool)arg1 fraction:(double)arg2;
- (void)_editingDidEnd;
- (void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
- (void)_setWhistlerAnalogEditingTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3;
- (void)_layoutLabel;
- (void)layoutSubviews;
- (void)setForegroundColor:(id)arg1;
- (id)_labelFont;
- (id)_createLabelViewWithFont:(id)arg1;
- (id)label;
- (id)init;

@end
