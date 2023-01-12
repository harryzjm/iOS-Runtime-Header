//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class GCControllerButtonInput, NSString, UIBezierPath, UIButton, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface GCControllerButtonInputView : UIView
{
    struct CGRect _innerFrame;
    UIVisualEffectView *_background;
    UIVisualEffectView *_saturationVibrancyEffectView;
    UIVisualEffectView *_additivevibrancyEffectView;
    UIButton *_button;
    NSString *_systemImageName;
    NSString *_text;
    GCControllerButtonInput *_buttonInput;
    UIBezierPath *_customImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIBezierPath *customImage; // @synthesize customImage=_customImage;
@property(retain) GCControllerButtonInput *buttonInput; // @synthesize buttonInput=_buttonInput;
- (void)setSystemImage;
- (void)setText;
- (void)triggerButtonWithValue:(float)arg1;
- (void)setupActions;
- (void)initUI;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSystemImageName:(id)arg1;
- (id)initWithText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
