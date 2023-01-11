//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

@interface _SFNavigationBarTheme
{
    _Bool _backdropIsExtreme;
    _Bool _backdropIsRed;
    _Bool _backdropIsGreen;
    _Bool _platterBackdropIsDark;
    long long _platterOverrideUserInterfaceStyle;
    long long _platterTextFieldOverrideUserInterfaceStyle;
    long long _platterKeyboardOverrideAppearance;
    UIColor *_textColor;
    UIColor *_secureTextColor;
    UIColor *_warningTextColor;
    UIColor *_annotationTextColor;
    UIColor *_platterTextColor;
    UIColor *_platterSecureTextColor;
    UIColor *_platterWarningTextColor;
    UIColor *_platterAnnotationTextColor;
    UIColor *_platterPlaceholderTextColor;
    UIColor *_platterSelectionColor;
}

@property(readonly, nonatomic) UIColor *platterSelectionColor; // @synthesize platterSelectionColor=_platterSelectionColor;
@property(readonly, nonatomic) UIColor *platterPlaceholderTextColor; // @synthesize platterPlaceholderTextColor=_platterPlaceholderTextColor;
@property(readonly, nonatomic) UIColor *platterAnnotationTextColor; // @synthesize platterAnnotationTextColor=_platterAnnotationTextColor;
@property(readonly, nonatomic) UIColor *platterWarningTextColor; // @synthesize platterWarningTextColor=_platterWarningTextColor;
@property(readonly, nonatomic) UIColor *platterSecureTextColor; // @synthesize platterSecureTextColor=_platterSecureTextColor;
@property(readonly, nonatomic) UIColor *platterTextColor; // @synthesize platterTextColor=_platterTextColor;
@property(readonly, nonatomic) _Bool platterBackdropIsDark; // @synthesize platterBackdropIsDark=_platterBackdropIsDark;
@property(readonly, nonatomic) UIColor *annotationTextColor; // @synthesize annotationTextColor=_annotationTextColor;
@property(readonly, nonatomic) UIColor *warningTextColor; // @synthesize warningTextColor=_warningTextColor;
@property(readonly, nonatomic) UIColor *secureTextColor; // @synthesize secureTextColor=_secureTextColor;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) _Bool backdropIsGreen; // @synthesize backdropIsGreen=_backdropIsGreen;
@property(readonly, nonatomic) _Bool backdropIsRed; // @synthesize backdropIsRed=_backdropIsRed;
@property(readonly, nonatomic) _Bool backdropIsExtreme; // @synthesize backdropIsExtreme=_backdropIsExtreme;
@property(readonly, nonatomic) long long platterKeyboardOverrideAppearance; // @synthesize platterKeyboardOverrideAppearance=_platterKeyboardOverrideAppearance;
@property(readonly, nonatomic) long long platterTextFieldOverrideUserInterfaceStyle; // @synthesize platterTextFieldOverrideUserInterfaceStyle=_platterTextFieldOverrideUserInterfaceStyle;
@property(readonly, nonatomic) long long platterOverrideUserInterfaceStyle; // @synthesize platterOverrideUserInterfaceStyle=_platterOverrideUserInterfaceStyle;
- (void).cxx_destruct;
- (id)_colorForPlatterTextColor:(id)arg1 regularColor:(id)arg2 withPlatterAlpha:(double)arg3;
- (id)annotationTextColorForPlatterAlpha:(double)arg1;
- (id)platterWarningTextColorForPlatterAlpha:(double)arg1;
- (id)platterSecureTextColorForPlatterAlpha:(double)arg1;
- (id)platterTextColorForPlatterAlpha:(double)arg1;
- (id)URLAccessoryButtonTintColorForInputMode:(unsigned long long)arg1;
- (id)initWithBarTintStyle:(unsigned long long)arg1 preferredBarTintColor:(id)arg2 controlsTintColor:(id)arg3;

@end
