//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBScene, NSMutableOrderedSet, NSMutableSet, NSString, UIScenePresentationContext, UIScenePresentationManager, _UISceneLayerHostContainerView, _UIScenePresenter;
@protocol _UIScenePresenterOwnerDelegate;

__attribute__((visibility("hidden")))
@interface _UIScenePresenterOwner : NSObject
{
    id _context;
    UIScenePresentationManager *_scenePresentationManager;
    _UISceneLayerHostContainerView *_realSceneHostViewsContainer;
    NSMutableOrderedSet *_activePresentersByPriority;
    NSMutableSet *_inactivePresentersByPriority;
    _UIScenePresenter *_prioritizedPresenter;
    _Bool _invalidated;
    id <_UIScenePresenterOwnerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <_UIScenePresenterOwnerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id context; // @synthesize context=_context;
- (void)_setActivePrioritizedPresenter:(id)arg1;
- (void)_updateActivePrioritizedPresenterIfNecessary;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)invalidate;
- (void)_invalidatePresenter:(id)arg1;
- (void)_deactivatePresenter:(id)arg1;
- (void)_activatePresenter:(id)arg1;
- (_Bool)_isPresenterHosting:(id)arg1;
- (_Bool)_isPresenterActive:(id)arg1;
- (id)presenterWithIdentifier:(id)arg1;
- (id)activePrioritizedPresenter;
- (void)enumeratePresentersUsingBlock:(CDUnknownBlockType)arg1;
- (void)addPresenter:(id)arg1;
@property(readonly, copy, nonatomic) UIScenePresentationContext *defaultPresentationContext;
@property(readonly, nonatomic) __weak FBScene *scene;
- (void)dealloc;
- (id)initWithScenePresentationManager:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

