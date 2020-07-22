//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OFUIView, UIColor;

@interface OKTransitionFadeThruColor
{
    OFUIView *_colorView;
    UIColor *_color;
}

+ (id)supportedSettings;
@property(retain) UIColor *color; // @synthesize color=_color;
- (void)makeCurrentTransitionInteractiveWithContext:(id)arg1 andProgress:(double)arg2;
- (void)updateInteractiveTransitionWithContext:(id)arg1 andProgress:(double)arg2;
- (void)startInteractiveTransitionWithContext:(id)arg1;
- (void)_transitionInView:(id)arg1 fromSubview:(id)arg2 toSubview:(id)arg3 wasInteractive:(_Bool)arg4 duration:(double)arg5 doEaseIn:(_Bool)arg6 doEaseOut:(_Bool)arg7 isCompleting:(_Bool)arg8 wasCancelled:(_Bool)arg9 fromProgress:(double)arg10 completionHandler:(CDUnknownBlockType)arg11;
- (void)setSettingColor:(id)arg1;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;

@end

