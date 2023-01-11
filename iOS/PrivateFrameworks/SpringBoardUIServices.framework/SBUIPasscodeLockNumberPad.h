//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SpringBoardUIServices/CAAnimationDelegate-Protocol.h>
#import <SpringBoardUIServices/SBNumberPadDelegate-Protocol.h>

@class NSArray, NSString, SBNumberPadWithDelegate, SBUIButton, UIColor, UIControl;
@protocol SBUIPasscodeLockNumberPadDelegate, SBUIPasscodeNumberPadButton;

@interface SBUIPasscodeLockNumberPad : UIView <SBNumberPadDelegate, CAAnimationDelegate>
{
    SBNumberPadWithDelegate *_numberPad;
    UIColor *_customBackgroundColor;
    _Bool _useLightStyle;
    _Bool _visible;
    _Bool _showsBackspaceButton;
    _Bool _showsEmergencyCallButton;
    _Bool _showsCancelButton;
    id <SBUIPasscodeLockNumberPadDelegate> _delegate;
    double _ancillaryButtonOffset;
    UIControl<SBUIPasscodeNumberPadButton> *_downButton;
    SBUIButton *_emergencyCallButton;
    SBUIButton *_backspaceButton;
    SBUIButton *_cancelButton;
    UIColor *_reduceTransparencyButtonColor;
}

+ (struct UIEdgeInsets)_inputButtonCircleSpacing;
+ (struct CGSize)_inputButtonCircleSize;
+ (id)_buttonForCharacter:(unsigned int)arg1 withLightStyle:(_Bool)arg2;
@property(retain, nonatomic) UIColor *reduceTransparencyButtonColor; // @synthesize reduceTransparencyButtonColor=_reduceTransparencyButtonColor;
@property(readonly, nonatomic) SBUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) SBUIButton *backspaceButton; // @synthesize backspaceButton=_backspaceButton;
@property(readonly, nonatomic) SBUIButton *emergencyCallButton; // @synthesize emergencyCallButton=_emergencyCallButton;
@property(retain, nonatomic) UIControl<SBUIPasscodeNumberPadButton> *downButton; // @synthesize downButton=_downButton;
@property(nonatomic) double ancillaryButtonOffset; // @synthesize ancillaryButtonOffset=_ancillaryButtonOffset;
@property(nonatomic) _Bool showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property(nonatomic) _Bool showsEmergencyCallButton; // @synthesize showsEmergencyCallButton=_showsEmergencyCallButton;
@property(nonatomic) _Bool showsBackspaceButton; // @synthesize showsBackspaceButton=_showsBackspaceButton;
@property(nonatomic) __weak id <SBUIPasscodeLockNumberPadDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_emergencyCallButtonHit;
- (void)_backspaceButtonHit;
- (void)_cancelButtonHit;
- (void)_configureAdditionalButtons;
- (id)_fontForAncillaryButton;
- (double)_distanceToTopOfFirstButton;
- (void)_numberPadTouchDrag:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchCancelled:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchUp:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchDown:(id)arg1 forEvent:(id)arg2;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithDefaultSizeAndLightStyle:(_Bool)arg1;
@property(readonly, nonatomic) __weak NSArray *buttons;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

