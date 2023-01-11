//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/SXReachabilityObserver-Protocol.h>
#import <Silex/SXViewportChangeListener-Protocol.h>

@class NFPendingPromise, NFStateMachine, NSString, SXComponentExposureMonitor, SXWebContentComponentExposureEvent, SXWebContentComponentInteractionManager, SXWebContentContainerViewController, UIActivityIndicatorView, UILabel, UITapGestureRecognizer;
@protocol SXReachabilityProvider, SXResourceDataSource, SXWebContentConfigurationProvider, SXWebContentLoadingPolicyProvider, SXWebContentNavigationManager;

@interface SXWebContentComponentView <SXViewportChangeListener, SXReachabilityObserver>
{
    SXWebContentContainerViewController *_containerViewController;
    id <SXWebContentConfigurationProvider> _configurationProvider;
    id <SXWebContentNavigationManager> _navigationManager;
    SXWebContentComponentInteractionManager *_interactionManager;
    id <SXReachabilityProvider> _reachabilityProvider;
    id <SXResourceDataSource> _resourceDataSource;
    id <SXWebContentLoadingPolicyProvider> _loadingPolicyProvider;
    NFStateMachine *_stateMachine;
    UIActivityIndicatorView *_loadingIndicator;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILabel *_errorLabel;
    NFPendingPromise *_invalidationPromise;
    SXComponentExposureMonitor *_componentExposureMonitor;
    SXWebContentComponentExposureEvent *_componentExposureEvent;
    CDUnknownBlockType _queuedExposureBeginWork;
}

@property(copy, nonatomic) CDUnknownBlockType queuedExposureBeginWork; // @synthesize queuedExposureBeginWork=_queuedExposureBeginWork;
@property(retain, nonatomic) SXWebContentComponentExposureEvent *componentExposureEvent; // @synthesize componentExposureEvent=_componentExposureEvent;
@property(readonly, nonatomic) SXComponentExposureMonitor *componentExposureMonitor; // @synthesize componentExposureMonitor=_componentExposureMonitor;
@property(retain, nonatomic) NFPendingPromise *invalidationPromise; // @synthesize invalidationPromise=_invalidationPromise;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(readonly, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(readonly, nonatomic) NFStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(readonly, nonatomic) id <SXWebContentLoadingPolicyProvider> loadingPolicyProvider; // @synthesize loadingPolicyProvider=_loadingPolicyProvider;
@property(readonly, nonatomic) id <SXResourceDataSource> resourceDataSource; // @synthesize resourceDataSource=_resourceDataSource;
@property(readonly, nonatomic) id <SXReachabilityProvider> reachabilityProvider; // @synthesize reachabilityProvider=_reachabilityProvider;
@property(readonly, nonatomic) SXWebContentComponentInteractionManager *interactionManager; // @synthesize interactionManager=_interactionManager;
@property(readonly, nonatomic) id <SXWebContentNavigationManager> navigationManager; // @synthesize navigationManager=_navigationManager;
@property(readonly, nonatomic) id <SXWebContentConfigurationProvider> configurationProvider; // @synthesize configurationProvider=_configurationProvider;
@property(readonly, nonatomic) SXWebContentContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
- (void).cxx_destruct;
- (void)reachabilityChanged:(_Bool)arg1;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)layoutErrorView;
- (void)layoutWebView;
- (void)layoutLoadingIndicator;
- (void)layout;
- (id)createDisabledState;
- (id)createErrorState;
- (id)createPresentationState;
- (id)createLoadingState;
- (id)createStateMachine;
- (void)reloadWebContent;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)configureConfigurationProvider;
- (void)configureErrorProvider;
- (void)configurePresentationManager;
- (void)configureViewController;
- (void)loadWebContent;
- (void)submitExposureEvent;
- (void)configureComponentExposureMonitor;
- (void)configure;
- (void)handleTap:(id)arg1;
- (void)layoutSubviews;
- (id)initWithDocumentController:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 analyticsReporting:(id)arg4 componentStyleRendererFactory:(id)arg5 containerViewController:(id)arg6 configurationProvider:(id)arg7 navigationManager:(id)arg8 componentExposureMonitor:(id)arg9 interactionManagerFactory:(id)arg10 reachabilityProvider:(id)arg11 resourceDataSource:(id)arg12 loadingPolicyProvider:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

