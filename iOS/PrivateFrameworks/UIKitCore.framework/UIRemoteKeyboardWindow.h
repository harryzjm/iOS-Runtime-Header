//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextEffectsWindow.h"

@class CAContext, FBSScene, FBSSceneIdentityToken, FBSSceneLayer, NSDictionary, NSString, UIScreen, _UIContextBinder;

__attribute__((visibility("hidden")))
@interface UIRemoteKeyboardWindow : UITextEffectsWindow
{
    NSDictionary *_perScreenOptions;
    UIScreen *_intendedScreen;
    _Bool _arePlaceholdersInitialised;
    FBSSceneLayer *_keyboardSceneLayer;
    FBSScene *_activeScene;
    _Bool _resetRequired;
}

+ (id)remoteKeyboardWindowForScreen:(id)arg1 create:(_Bool)arg2;
+ (_Bool)_isHostedInAnotherProcess;
- (void).cxx_destruct;
- (void)_configureAlphaIfNecessary;
- (_Bool)_isEligibleForFocusOcclusion;
- (_Bool)isTransparentFocusItem;
- (void)dealloc;
- (long long)_orientationForClassicPresentation;
- (void)endDisablingInterfaceAutorotation;
- (void)resetScene;
- (void)_resetScene;
@property(readonly, nonatomic) FBSSceneIdentityToken *activeSceneIdentity;
- (void)detachBindable;
- (_Bool)shouldDetachBindable;
- (void)attachBindable;
- (_Bool)shouldAttachBindable;
- (id)_layerForCoordinateSpaceConversion;
- (double)_adjustedWindowLevelFromLevel:(double)arg1;
- (_Bool)_isTextEffectsWindowNotificationOwner;
- (_Bool)_isRemoteKeyboardWindow;
- (_Bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 updateStatusBar:(_Bool)arg3 duration:(double)arg4 force:(_Bool)arg5 isRotating:(_Bool)arg6;
- (void)setWindowLevel:(double)arg1;
- (_Bool)_isFullscreen;
- (_Bool)_usesWindowServerHitTesting;
- (long long)_orientationInSceneSpace;
- (_Bool)_canIgnoreInteractionEvents;
- (_Bool)_alwaysGetsContexts;
- (_Bool)_isHostedInAnotherProcess;
- (_Bool)_isWindowServerHostingManaged;
- (_Bool)_wantsSceneAssociation;
- (_Bool)_isAlwaysKeyboardWindow;
- (_Bool)isInternalWindow;
- (void)invalidate;
@property(readonly) NSDictionary *_options;
@property(readonly) UIScreen *_intendedScreen;
- (_Bool)_matchingOptions:(id)arg1;
- (id)_initWithScreen:(id)arg1 options:(id)arg2;
- (id)_initBasicWithScreen:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) CDStruct_b73e569c _bindingDescription;
@property(nonatomic, setter=_setBoundContext:) __weak CAContext *_boundContext;
@property(nonatomic, setter=_setContextBinder:) __weak _UIContextBinder *_contextBinder;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

