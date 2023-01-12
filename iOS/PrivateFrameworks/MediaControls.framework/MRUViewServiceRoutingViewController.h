//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MPAVOutputDeviceRoutingDataSource, MPMediaControlsConfiguration, MRUNowPlayingController, MRURoutingViewController, MRUVendorSpecificDeviceManager, MRUViewServiceRoutingView, MRUVisualStylingProvider, MediaControlsEndpointsManager, NSMutableDictionary, NSString, UITableViewDiffableDataSource;
@protocol MRUViewServiceRoutingViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MRUViewServiceRoutingViewController : UIViewController
{
    _Bool _onScreen;
    _Bool _canShowRemoteDevices;
    _Bool _supportsQueueHandoff;
    MPMediaControlsConfiguration *_configuration;
    MRUVisualStylingProvider *_stylingProvider;
    id <MRUViewServiceRoutingViewControllerDelegate> _delegate;
    MediaControlsEndpointsManager *_endpointsManager;
    MRURoutingViewController *_routingViewController;
    MPAVOutputDeviceRoutingDataSource *_outputDeviceRoutingDataSource;
    UITableViewDiffableDataSource *_dataSource;
    NSMutableDictionary *_nowPlayingControllers;
    MRUNowPlayingController *_selectedNowPlayingController;
    CDUnknownBlockType _replaceRoutes;
    UIViewController *_alertViewController;
    MRUVendorSpecificDeviceManager *_vendorSpecificManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MRUVendorSpecificDeviceManager *vendorSpecificManager; // @synthesize vendorSpecificManager=_vendorSpecificManager;
@property(retain, nonatomic) UIViewController *alertViewController; // @synthesize alertViewController=_alertViewController;
@property(nonatomic) _Bool supportsQueueHandoff; // @synthesize supportsQueueHandoff=_supportsQueueHandoff;
@property(nonatomic) _Bool canShowRemoteDevices; // @synthesize canShowRemoteDevices=_canShowRemoteDevices;
@property(nonatomic, getter=isOnScreen) _Bool onScreen; // @synthesize onScreen=_onScreen;
@property(copy, nonatomic) CDUnknownBlockType replaceRoutes; // @synthesize replaceRoutes=_replaceRoutes;
@property(retain, nonatomic) MRUNowPlayingController *selectedNowPlayingController; // @synthesize selectedNowPlayingController=_selectedNowPlayingController;
@property(retain, nonatomic) NSMutableDictionary *nowPlayingControllers; // @synthesize nowPlayingControllers=_nowPlayingControllers;
@property(retain, nonatomic) UITableViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) MPAVOutputDeviceRoutingDataSource *outputDeviceRoutingDataSource; // @synthesize outputDeviceRoutingDataSource=_outputDeviceRoutingDataSource;
@property(retain, nonatomic) MRURoutingViewController *routingViewController; // @synthesize routingViewController=_routingViewController;
@property(retain, nonatomic) MediaControlsEndpointsManager *endpointsManager; // @synthesize endpointsManager=_endpointsManager;
@property(nonatomic) __weak id <MRUViewServiceRoutingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(retain, nonatomic) MPMediaControlsConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)updateCell:(id)arg1 forIdentifier:(id)arg2;
- (void)updateCellForIdentifier:(id)arg1;
- (void)updateRoutingViewControllerScrollIndicatorInsets;
- (void)updateSelectedViewController;
- (void)updateRoutingViewController;
- (void)updateDiscoveryMode;
- (void)updateMoreButtonVisibility;
- (void)updateNowPlayingControllers;
- (void)routingViewControllerDidUpdateItems:(id)arg1;
- (void)routingViewController:(id)arg1 didSelectRoutingViewItem:(id)arg2;
- (void)nowPlayingController:(id)arg1 didChangeQuickControlItem:(id)arg2;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeNowPlayingInfo:(id)arg3;
- (void)nowPlayingController:(id)arg1 metadataController:(id)arg2 didChangeArtwork:(id)arg3;
- (void)nowPlayingController:(id)arg1 endpointController:(id)arg2 didChangeRoute:(id)arg3;
- (_Bool)nowPlayingControllerShouldAutomaticallyUpdateResponse:(id)arg1;
- (void)endpointsManager:(id)arg1 defersRoutesReplacement:(CDUnknownBlockType)arg2;
- (void)endpointsManager:(id)arg1 activeSystemRouteDidChange:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHaveFullLengthBottomSeparatorForSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didSelectQuickControl:(id)arg1;
- (void)didSelectListState:(id)arg1;
- (_Bool)canShowMoreButton;
- (id)selectedIdentifier;
- (void)setState:(long long)arg1;
- (_Bool)_canShowWhileLocked;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) MRUViewServiceRoutingView *view; // @dynamic view;
@property(retain, nonatomic) MRUViewServiceRoutingView *viewIfLoaded; // @dynamic viewIfLoaded;

@end

