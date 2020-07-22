//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarServiceItemView
{
    NSString *_serviceString;
    NSString *_crossfadeString;
    unsigned long long _crossfadeStep;
    double _maxWidth;
    double _serviceWidth;
    double _crossfadeWidth;
    int _contentType;
    _Bool _loopingNecessaryForString;
    _Bool _loopNowIfNecessary;
    _Bool _loopingNow;
    double _letterSpacing;
}

- (void).cxx_destruct;
- (id)accessibilityHUDRepresentation;
- (_Bool)_loopingNecessary;
- (void)_crossfadeStepAnimation;
- (_Bool)_crossfaded;
- (void)_finalAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_loopAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)performPendedActions;
- (double)extraRightPadding;
- (_Bool)animatesDataChange;
- (void)setVisible:(_Bool)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;
- (id)contentsImage;
- (id)_crossfadeContentsImage;
- (id)_serviceContentsImage;
- (id)_contentsImageFromString:(id)arg1 withWidth:(double)arg2 letterSpacing:(double)arg3;
- (double)updateContentsAndWidth;
- (long long)legibilityStyle;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (_Bool)updateForContentType:(int)arg1 serviceString:(id)arg2 serviceCrossfadeString:(id)arg3 maxWidth:(double)arg4 actions:(int)arg5;
- (double)addContentOverlap:(double)arg1;
- (double)resetContentOverlap;
- (double)standardPadding;

@end

