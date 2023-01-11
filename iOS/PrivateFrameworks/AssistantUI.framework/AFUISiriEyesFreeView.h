//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class SiriUIBackgroundBlurView, SiriUIVisualEffectView, UIImageView;

@interface AFUISiriEyesFreeView : UIView
{
    SiriUIBackgroundBlurView *_backdropView;
    SiriUIVisualEffectView *_eyesFreeEffectView;
    UIImageView *_eyesFreeLogoView;
    long long _eyesFreeMode;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long eyesFreeMode; // @synthesize eyesFreeMode=_eyesFreeMode;
- (id)backdropView;
- (void)_configureEyesFreePresentation:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 eyesFreeMode:(long long)arg2;

@end
