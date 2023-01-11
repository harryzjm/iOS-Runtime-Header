//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UISceneComponentProviding-Protocol.h>

@class NSDictionary, NSMutableSet, NSString, UIScene, UIWindowScene;

@interface UIStatusBarManager : NSObject <_UISceneComponentProviding>
{
    _Bool _statusBarHidden;
    _Bool _inStatusBarFadeAnimation;
    long long _statusBarStyle;
    UIWindowScene *_windowScene;
    NSMutableSet *_localStatusBars;
    NSDictionary *_statusBarPartStyles;
    double _statusBarAlpha;
    CDUnknownBlockType _debugMenuHandler;
}

+ (id)_implicitStatusBarAnimationParametersWithClass:(Class)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType debugMenuHandler; // @synthesize debugMenuHandler=_debugMenuHandler;
@property(readonly, nonatomic) double statusBarAlpha; // @synthesize statusBarAlpha=_statusBarAlpha;
@property(readonly, nonatomic, getter=isInStatusBarFadeAnimation) _Bool inStatusBarFadeAnimation; // @synthesize inStatusBarFadeAnimation=_inStatusBarFadeAnimation;
@property(readonly, nonatomic) NSDictionary *statusBarPartStyles; // @synthesize statusBarPartStyles=_statusBarPartStyles;
@property(retain, nonatomic) NSMutableSet *localStatusBars; // @synthesize localStatusBars=_localStatusBars;
@property(retain, nonatomic) UIWindowScene *windowScene; // @synthesize windowScene=_windowScene;
@property(readonly, nonatomic, getter=isStatusBarHidden) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(readonly, nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
- (_Bool)statusBarHidden;
- (void)_handleScrollToTopAtXPosition:(double)arg1;
- (struct CGPoint)_adjustedLocationForXPosition:(double)arg1;
- (void)handleTapAction:(id)arg1;
- (void)updateLocalStatusBars;
- (void)_updateLocalStatusBar:(id)arg1;
- (id)createLocalStatusBar;
- (void)deactivateLocalStatusBar:(id)arg1;
- (void)activateLocalStatusBar:(id)arg1;
- (void)setupForSingleLocalStatusBar;
- (_Bool)_updateAlpha;
- (_Bool)_updateStyleForWindow:(id)arg1 animationParameters:(id *)arg2;
- (_Bool)_updateVisibilityForWindow:(id)arg1 targetOrientation:(long long)arg2 animationParameters:(id *)arg3;
- (void)_visibilityChangedWithOriginalOrientation:(long long)arg1 targetOrientation:(long long)arg2 animationParameters:(id)arg3;
- (CDUnknownBlockType)_updateStatusBarAppearanceWithClientSettings:(id)arg1 transitionContext:(id)arg2 animationParameters:(id)arg3;
- (CDUnknownBlockType)updateStatusBarAppearanceWithClientSettings:(id)arg1 transitionContext:(id)arg2;
- (void)updateStatusBarAppearanceWithAnimationParameters:(id)arg1;
- (void)updateStatusBarAppearance;
- (double)defaultStatusBarHeightInOrientation:(long long)arg1;
@property(readonly, nonatomic) double defaultStatusBarHeight;
@property(readonly, nonatomic) double statusBarHeight;
@property(readonly, nonatomic) struct CGRect statusBarFrame;
- (struct CGRect)statusBarFrameForStatusBarHeight:(double)arg1;
- (struct CGRect)statusBarFrameForStatusBarHeight:(double)arg1 inOrientation:(long long)arg2;
- (id)_settingsDiffActionsForScene:(id)arg1;
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene;
- (id)initWithScene:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
