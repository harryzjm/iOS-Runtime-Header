//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSwitcherLiveContentOverlay-Protocol.h>

@class NSMutableDictionary, NSString, SBFHomeGrabberSettings, SBMainDisplaySceneLayoutViewController, SBOrientationTransformWrapperView, SBWindowSelfHostWrapper, UIView;

@interface SBSceneLayoutLiveContentOverlay : NSObject <SBSwitcherLiveContentOverlay>
{
    _Bool _wantsMinificationFilter;
    _Bool _asynchronousRenderingTemporarilyDisabled;
    long long _containerOrientation;
    long long _rasterizationStyle;
    SBMainDisplaySceneLayoutViewController *_sceneLayoutViewController;
    SBWindowSelfHostWrapper *_sceneLayoutWindowHostWrapper;
    SBOrientationTransformWrapperView *_sceneLayoutOrientationWrapperView;
    SBFHomeGrabberSettings *_grabberSettings;
    NSMutableDictionary *_statusBarAssertions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool asynchronousRenderingTemporarilyDisabled; // @synthesize asynchronousRenderingTemporarilyDisabled=_asynchronousRenderingTemporarilyDisabled;
@property(readonly, nonatomic) _Bool wantsMinificationFilter; // @synthesize wantsMinificationFilter=_wantsMinificationFilter;
@property(retain, nonatomic) NSMutableDictionary *statusBarAssertions; // @synthesize statusBarAssertions=_statusBarAssertions;
@property(readonly, nonatomic) SBFHomeGrabberSettings *grabberSettings; // @synthesize grabberSettings=_grabberSettings;
@property(readonly, nonatomic) SBOrientationTransformWrapperView *sceneLayoutOrientationWrapperView; // @synthesize sceneLayoutOrientationWrapperView=_sceneLayoutOrientationWrapperView;
@property(readonly, nonatomic) SBWindowSelfHostWrapper *sceneLayoutWindowHostWrapper; // @synthesize sceneLayoutWindowHostWrapper=_sceneLayoutWindowHostWrapper;
@property(readonly, nonatomic) __weak SBMainDisplaySceneLayoutViewController *sceneLayoutViewController; // @synthesize sceneLayoutViewController=_sceneLayoutViewController;
@property(readonly, nonatomic) long long rasterizationStyle; // @synthesize rasterizationStyle=_rasterizationStyle;
@property(nonatomic) long long containerOrientation; // @synthesize containerOrientation=_containerOrientation;
- (id)_sceneHandleForHardwareButtonEvents;
- (_Bool)handleHeadsetButtonPress:(_Bool)arg1;
- (_Bool)handleVolumeDownButtonPress;
- (_Bool)handleVolumeUpButtonPress;
- (_Bool)handleLockButtonPress;
- (_Bool)handleHomeButtonLongPress;
- (_Bool)handleHomeButtonDoublePress;
- (_Bool)handleHomeButtonPress;
- (void)_evaluateAsynchronousRenderingEnablement;
- (void)disableAsynchronousRenderingForNextCommit;
- (void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(_Bool)arg2;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (void)setUsesBrightSceneViewBackgroundMaterial:(_Bool)arg1;
- (void)setHomeGrabberHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setStatusBarHidden:(_Bool)arg1 nubViewHidden:(_Bool)arg2 animator:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) UIView *contentOverlayView;
- (void)dealloc;
- (id)initWithSceneLayoutViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
