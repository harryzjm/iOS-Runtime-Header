//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <MobileSafari/SFCapsuleContentView-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UITextField, _SFBarTheme, _SFDimmingButton;
@protocol SFCapsuleContentViewSizeUpdating;

@interface SFCapsuleURLField : UIView <SFCapsuleContentView>
{
    NSLayoutConstraint *_textFieldTrailingConstraint;
    _SFDimmingButton *_clearTextButton;
    NSLayoutConstraint *_voiceSearchToClearButtonConstraint;
    NSLayoutConstraint *_voiceSearchToCapsuleConstraint;
    _SFDimmingButton *_voiceSearchButton;
    NSArray *_voiceSearchButtonConstraints;
    UITextField *_textField;
    CDUnknownBlockType _voiceSearchTappedAction;
    struct _NSRange _rangeOfKeyText;
    struct CGAffineTransform _keyContentTransform;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange rangeOfKeyText; // @synthesize rangeOfKeyText=_rangeOfKeyText;
@property(copy, nonatomic) CDUnknownBlockType voiceSearchTappedAction; // @synthesize voiceSearchTappedAction=_voiceSearchTappedAction;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) struct CGAffineTransform keyContentTransform; // @synthesize keyContentTransform=_keyContentTransform;
- (void)_voiceSearchButtonTapped:(id)arg1;
- (void)_clearTextButtonTapped:(id)arg1;
- (void)_updateClearButtonVisibility;
- (void)textFieldDidChange:(id)arg1;
- (void)_tap:(id)arg1;
- (void)updateConstraints;
@property(nonatomic) _Bool showsVoiceSearchButton;
@property(readonly, nonatomic) struct CGRect keyContentRect;
- (id)_newDimmingButtonWithSystemImageNamed:(id)arg1 action:(SEL)arg2 accessibilityIdentifier:(id)arg3;
- (id)initWithTextField:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic, setter=setMinimized:) _Bool isMinimized;
@property(nonatomic, setter=setSelected:) _Bool isSelected;
@property(nonatomic) long long layoutStyle;
@property(nonatomic) double minimizationPercent;
@property(nonatomic) double minimizedContentHorizontalInset;
@property(nonatomic) __weak id <SFCapsuleContentViewSizeUpdating> sizeUpdater;
@property(readonly) Class superclass;
@property(retain, nonatomic) _SFBarTheme *theme;

@end
