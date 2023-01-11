//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaControls/CCUIContentModuleContentViewController-Protocol.h>
#import <MediaControls/MPAVRoutingViewControllerDelegate-Protocol.h>
#import <MediaControls/MediaControlsCollectionViewDataSource-Protocol.h>
#import <MediaControls/MediaControlsCollectionViewDelegate-Protocol.h>
#import <MediaControls/MediaControlsEndpointsManagerDelegate-Protocol.h>
#import <MediaControls/MediaControlsPanelViewControllerDelegate-Protocol.h>

@class MPAVEndpointRoute, MPAVOutputDeviceRoutingDataSource, MPAVRoutingViewController, MPMediaControlsConfiguration, MediaControlsEndpointsManager, NSString;

@interface MediaControlsEndpointsViewController <MPAVRoutingViewControllerDelegate, MediaControlsPanelViewControllerDelegate, MediaControlsCollectionViewDataSource, MediaControlsCollectionViewDelegate, MediaControlsEndpointsManagerDelegate, CCUIContentModuleContentViewController>
{
    MPAVOutputDeviceRoutingDataSource *_outputDeviceRoutingDataSource;
    long long _lastSelectedModeForActivePanelViewController;
    _Bool _didRetrieveActiveSystemRouteOnce;
    _Bool _shouldReselectActiveSystemRoute;
    _Bool _prewarming;
    _Bool _shouldTransitionToVisibleWhenReady;
    _Bool _dismissing;
    _Bool _onScreen;
    MPMediaControlsConfiguration *_configuration;
    CDUnknownBlockType _routingCornerViewTappedBlock;
    MediaControlsEndpointsManager *_endpointsManager;
    MPAVRoutingViewController *_routingViewController;
    MPAVEndpointRoute *_selectedRoute;
    NSString *_routingContextUID;
}

@property(copy, nonatomic) NSString *routingContextUID; // @synthesize routingContextUID=_routingContextUID;
@property(retain, nonatomic) MPAVEndpointRoute *selectedRoute; // @synthesize selectedRoute=_selectedRoute;
@property(retain, nonatomic) MPAVRoutingViewController *routingViewController; // @synthesize routingViewController=_routingViewController;
@property(retain, nonatomic) MediaControlsEndpointsManager *endpointsManager; // @synthesize endpointsManager=_endpointsManager;
@property(nonatomic, getter=isOnScreen) _Bool onScreen; // @synthesize onScreen=_onScreen;
@property(nonatomic, getter=isDismissing) _Bool dismissing; // @synthesize dismissing=_dismissing;
@property(copy, nonatomic) CDUnknownBlockType routingCornerViewTappedBlock; // @synthesize routingCornerViewTappedBlock=_routingCornerViewTappedBlock;
@property(retain, nonatomic) MPMediaControlsConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)homeObserverDidUpdateKnownUIDs:(id)arg1;
- (void)_transitionToVisibleIfNeeded;
- (_Bool)_isReadyForAppearanceTransition;
- (void)_selectActiveSystemRouteIfNeeded;
- (void)_routeDidChangeNotification:(id)arg1;
- (void)_setSelectedRoute:(id)arg1 isUserSelected:(_Bool)arg2;
- (void)_setupRoutingViewController;
- (void)_setupEndpointsManager;
- (void)_updateSupportedModesForSelectedMediaControlsPanelViewController;
- (void)_updateModesForSelectedMediaControlsPanelViewController;
- (void)_supportedModesForSelectedRoute:(unsigned long long *)arg1 selectedMode:(long long *)arg2;
- (void)_updateEndpointRouteForOutputDeviceDataSource:(id)arg1;
- (void)_assignRouteViewControllerToSelectedPanelViewController;
- (void)_updateDiscoveryMode;
- (_Bool)_isSelectedRouteInRoutes;
- (void)endpointsManager:(id)arg1 defersRoutesReplacement:(CDUnknownBlockType)arg2;
- (void)endpointsManager:(id)arg1 activeSystemRouteDidChange:(id)arg2;
- (void)mediaControlsCollectionViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2 withReason:(long long)arg3;
- (void)mediaControlsCollectionViewController:(id)arg1 willSelectItemAtIndex:(long long)arg2 withReason:(long long)arg3;
- (_Bool)mediaControlsCollectionViewController:(id)arg1 canSelectItemAtIndex:(long long)arg2;
- (void)mediaControlsCollectionViewController:(id)arg1 didEndDisplayingViewController:(id)arg2 forItemAtIndex:(long long)arg3;
- (void)mediaControlsCollectionViewController:(id)arg1 didDisplayViewController:(id)arg2 forItemAtIndex:(long long)arg3;
- (void)mediaControlsCollectionViewController:(id)arg1 willDisplayViewController:(id)arg2 forItemAtIndex:(long long)arg3;
- (long long)defaultSelectedItemIndexForCollectionViewController:(id)arg1;
- (id)mediaControlsCollectionViewController:(id)arg1 viewControllerForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInCollectionViewController:(id)arg1;
- (void)_transitionToVisible:(_Bool)arg1;
- (void)reloadData;
- (void)setDisplayMode:(long long)arg1;
- (void)dismissMediaControlsPanelViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)routingViewController:(id)arg1 didPickRoute:(id)arg2;
- (void)mediaControlsPanelViewController:(id)arg1 willToggleRoutingPicker:(_Bool)arg2;
- (void)mediaControlsPanelViewController:(id)arg1 didToggleRoutingPicker:(_Bool)arg2;
- (void)stopPrewarming;
- (void)startPrewarming;
- (void)didSelectRoute:(id)arg1;
@property(readonly, nonatomic) _Bool providesOwnPlatter;
@property(readonly, nonatomic) double preferredExpandedContentWidth;
@property(readonly, nonatomic) double preferredExpandedContentHeight;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

