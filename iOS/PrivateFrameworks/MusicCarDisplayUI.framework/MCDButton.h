//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class CALayer;

@interface MCDButton : UIButton
{
    CALayer *_focusColorLayer;
    _Bool _showBezelInTouch;
    _Bool _hideBezelInKnob;
}

+ (id)buttonWithType:(long long)arg1;
@property(nonatomic) _Bool hideBezelInKnob; // @synthesize hideBezelInKnob=_hideBezelInKnob;
@property(nonatomic) _Bool showBezelInTouch; // @synthesize showBezelInTouch=_showBezelInTouch;
- (void).cxx_destruct;
- (_Bool)shouldUpdateButtonOpacityForKnobUnfocused;
- (id)colorForKnobFocused;
- (id)colorForKnobFocusLayerSelected;
- (id)colorForKnobFocusLayer;
- (void)updateButtonOpacityForKnobUnfocused;
- (id)colorForKnobContentSelected;
- (id)colorForTouchFocusLayerSelected;
- (id)colorForTouchFocusLayer;
- (id)colorForTouchContentSelected;
- (void)_updateButtonStyle;
- (void)layoutSubviews;
- (id)_buttonBackGroundColorTouch;
- (id)tintColorForUnhighlightedTextLabel;
- (void)setHidden:(_Bool)arg1;
@property(nonatomic, getter=isSelected) _Bool selected; // @dynamic selected;
- (void)willMoveToWindow:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;

@end

