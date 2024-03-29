//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAMatchMoveAnimation, NSMutableArray, UIView, UIWindowSceneActivationConfiguration, _UIPortalView;

__attribute__((visibility("hidden")))
@interface _UIWindowSceneActivationAnimator : NSObject
{
    _Bool _deparented;
    _Bool _isDeallocating;
    UIWindowSceneActivationConfiguration *_configuration;
    _UIPortalView *_incomingScenePortalView;
    UIView *_morphContainerView;
    UIView *_deparentingWrapper;
    UIView *_deparentingPortalAlphaSourceView;
    long long _state;
    NSMutableArray *_alongsideAnimations;
    NSMutableArray *_alongsideCompletions;
    CAMatchMoveAnimation *_incomingSceneAnchorAnimation;
    struct CGRect _expectedFrame;
    struct UIRectCornerRadii _expectedCornerRadii;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDeallocating; // @synthesize isDeallocating=_isDeallocating;
@property(nonatomic) _Bool deparented; // @synthesize deparented=_deparented;
@property(retain, nonatomic) CAMatchMoveAnimation *incomingSceneAnchorAnimation; // @synthesize incomingSceneAnchorAnimation=_incomingSceneAnchorAnimation;
@property(readonly, nonatomic) NSMutableArray *alongsideCompletions; // @synthesize alongsideCompletions=_alongsideCompletions;
@property(readonly, nonatomic) NSMutableArray *alongsideAnimations; // @synthesize alongsideAnimations=_alongsideAnimations;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) struct UIRectCornerRadii expectedCornerRadii; // @synthesize expectedCornerRadii=_expectedCornerRadii;
@property(nonatomic) struct CGRect expectedFrame; // @synthesize expectedFrame=_expectedFrame;
@property(retain, nonatomic) UIView *deparentingPortalAlphaSourceView; // @synthesize deparentingPortalAlphaSourceView=_deparentingPortalAlphaSourceView;
@property(retain, nonatomic) UIView *deparentingWrapper; // @synthesize deparentingWrapper=_deparentingWrapper;
@property(retain, nonatomic) UIView *morphContainerView; // @synthesize morphContainerView=_morphContainerView;
@property(retain, nonatomic) _UIPortalView *incomingScenePortalView; // @synthesize incomingScenePortalView=_incomingScenePortalView;
@property(retain, nonatomic) UIWindowSceneActivationConfiguration *configuration; // @synthesize configuration=_configuration;
- (long long)_preferredCollapsedShadowStyle;
- (double)_startingShadowIntensity;
- (void)_sendBSAction:(id)arg1;
- (void)_performAllAlongsideCompletions;
- (void)_performAllAlongsideAnimations:(id)arg1;
- (void)_cleanUp;
- (void)_sendCompletionActionCallingAlongsideCompletions:(_Bool)arg1;
- (id)_previewForIncomingScenePortal;
- (id)_sourceViewContainer;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)addAnimations:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)reparent;
- (void)deparent;
- (_Bool)animateWithSourcePreview:(id)arg1 velocity:(double)arg2;
- (void)prewarmWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

@end

