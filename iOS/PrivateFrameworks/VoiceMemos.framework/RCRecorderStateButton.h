//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class CALayer, UIColor;

@interface RCRecorderStateButton : UIButton
{
    UIColor *_outerColor;
    CALayer *_innerLayer;
    UIColor *_innerColor;
    _Bool _realEnabledState;
    _Bool _isForceDisabled;
    long long _AVCaptureState;
}

@property(nonatomic) _Bool isForceDisabled; // @synthesize isForceDisabled=_isForceDisabled;
@property(nonatomic) long long AVCaptureState; // @synthesize AVCaptureState=_AVCaptureState;
- (void).cxx_destruct;
- (void)_drawOuterCircle;
- (double)_currentStateInnerDrawingAlpha;
- (double)_currentStateTopLevelDrawingAlpha;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

