//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>

@class FBOrderedRequesters, FBScene, FBSceneHostWrapperView, FBSceneLayerHostContainerView, FBSceneLayerManager, NSHashTable, NSMutableDictionary, NSMutableSet, NSString, UIColor;
@protocol FBSceneHostManagerDelegate;

@interface FBSceneHostManager : NSObject <BSDescriptionProviding>
{
    FBSceneLayerManager *_layerManager;
    FBScene *_scene;
    NSString *_identifier;
    long long _contentState;
    _Bool _contentStateIsChanging;
    UIColor *_defaultBackgroundColorWhileHosting;
    UIColor *_defaultBackgroundColorWhileNotHosting;
    unsigned long long _defaultHostedLayerTypes;
    unsigned long long _defaultRenderingMode;
    NSString *_defaultMinificationFilterName;
    FBSceneLayerHostContainerView *_hostView;
    FBSceneHostWrapperView *_activeWrapperView;
    _Bool _invalidated;
    FBOrderedRequesters *_hostRequesters;
    NSMutableDictionary *_hostWrapperViewsByRequester;
    NSMutableSet *_disableHostingAssertions;
    NSHashTable *_observers;
    id <FBSceneHostManagerDelegate> _delegate;
    struct {
        unsigned int delegateOverrideRequester:1;
        unsigned int delegateShouldEnableHostingForRequester:1;
    } _flags;
    _Bool _defaultClippingDisabled;
    struct CGAffineTransform _defaultHostViewTransform;
}

@property(readonly, nonatomic) long long contentState; // @synthesize contentState=_contentState;
@property(readonly, nonatomic) FBScene *scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *defaultMinificationFilterName; // @synthesize defaultMinificationFilterName=_defaultMinificationFilterName;
@property(nonatomic) unsigned long long defaultRenderingMode; // @synthesize defaultRenderingMode=_defaultRenderingMode;
@property(nonatomic) unsigned long long defaultHostedLayerTypes; // @synthesize defaultHostedLayerTypes=_defaultHostedLayerTypes;
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <FBSceneHostManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)_snapshotContextForFrame:(struct CGRect)arg1 excludedContextIDs:(id)arg2 opaque:(_Bool)arg3 outTransform:(struct CGAffineTransform *)arg4;
- (id)_snapshotContextForFrame:(struct CGRect)arg1 excludedLayers:(id)arg2 opaque:(_Bool)arg3;
- (id)_overrideRequesterIfNecessary:(id)arg1;
- (void)_activateRequester:(id)arg1;
- (id)_wrapperViewForRequester:(id)arg1;
- (id)_hostViewForRequester:(id)arg1 enableAndOrderFront:(_Bool)arg2;
- (id)_hostViewForRequester:(id)arg1;
- (id)_activeHostRequester;
- (void)_updateActiveHostRequester;
- (void)_setContentState:(long long)arg1;
- (void)_callOutToObservers:(CDUnknownBlockType)arg1;
- (struct CGImage *)snapshotCGImageRefForFrame:(struct CGRect)arg1 excludingContexts:(id)arg2 opaque:(_Bool)arg3 outTransform:(struct CGAffineTransform *)arg4;
- (id)snapshotUIImageForFrame:(struct CGRect)arg1 excludingContexts:(id)arg2 opaque:(_Bool)arg3 outTransform:(struct CGAffineTransform *)arg4;
- (id)snapshotViewWithFrame:(struct CGRect)arg1 excludingContexts:(id)arg2 opaque:(_Bool)arg3;
- (id)snapshotViewForSnapshot:(id)arg1;
- (id)snapshotViewWithContext:(id)arg1;
- (id)snapshotContextForRequester:(id)arg1;
- (id)disableHostingForReason:(id)arg1;
- (void)setLayer:(id)arg1 hidden:(_Bool)arg2 forRequester:(id)arg3;
- (void)setLayer:(id)arg1 alpha:(double)arg2 forRequester:(id)arg3;
- (void)setContextId:(unsigned int)arg1 hidden:(_Bool)arg2 forRequester:(id)arg3;
- (void)orderRequesterFront:(id)arg1;
- (void)disableHostingForRequester:(id)arg1;
- (void)invalidate;
- (void)enableHostingForRequester:(id)arg1 priority:(long long)arg2;
- (void)enableHostingForRequester:(id)arg1 orderFront:(_Bool)arg2;
- (id)hostViewForRequester:(id)arg1 enableAndOrderFront:(_Bool)arg2 appearanceStyle:(unsigned long long)arg3;
- (id)hostViewForRequester:(id)arg1 enableAndOrderFront:(_Bool)arg2;
- (id)hostViewForRequester:(id)arg1 appearanceStyle:(unsigned long long)arg2;
- (id)hostViewForRequester:(id)arg1;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) UIColor *defaultBackgroundColorWhileNotHosting;
@property(copy, nonatomic) UIColor *defaultBackgroundColorWhileHosting;
@property(nonatomic) struct CGAffineTransform defaultHostViewTransform; // @synthesize defaultHostViewTransform=_defaultHostViewTransform;
@property(nonatomic) _Bool defaultClippingDisabled; // @synthesize defaultClippingDisabled=_defaultClippingDisabled;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithLayerManager:(id)arg1 scene:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

