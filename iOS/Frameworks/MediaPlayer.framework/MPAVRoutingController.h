//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/_MPStateDumpPropertyListTransformable-Protocol.h>

@class MPAVRoute, MPAVRoutingControllerSelectionQueue, MPAVRoutingDataSource, NSArray, NSSet, NSString;
@protocol MPAVOutputDevicePlaybackDataSource, MPAVRoutingControllerDelegate;

@interface MPAVRoutingController : NSObject <_MPStateDumpPropertyListTransformable>
{
    NSArray *_cachedRoutes;
    NSArray *_cachedPickedRoutes;
    long long _externalScreenType;
    _Bool _hasExternalScreenType;
    _Bool _scheduledSendDelegateRoutesChanged;
    long long _volumeControlStateForPickedRoute;
    MPAVRoutingControllerSelectionQueue *_routingControllerSelectionQueue;
    int _deviceAvailabilityNotifyToken;
    _Bool _deviceAvailabilityOverrideState;
    _Bool _fetchAvailableRoutesSynchronously;
    _Bool _representsLongFormVideoContent;
    id <MPAVRoutingControllerDelegate> _delegate;
    MPAVRoutingDataSource *_dataSource;
    NSString *_name;
    long long _discoveryMode;
    NSString *_category;
    long long _routeTypes;
    MPAVRoute *_legacyCachedRoute;
    id <MPAVOutputDevicePlaybackDataSource> _playbackDataSource;
    NSString *_presentedBundleID;
    NSString *_representedBundleID;
}

+ (void)_getActiveRouteWithTimeout:(double)arg1 discoveredRoutes:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)_currentDeviceRoutingIconImageName;
+ (_Bool)bundleIdRepresentsLongFormVideoContent:(id)arg1;
+ (id)systemRouteWithContextUID:(id)arg1;
+ (id)systemRoute;
+ (void)setActiveRoute:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)setActiveRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)getActiveRouteWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)getActiveRouteWithCompletion:(CDUnknownBlockType)arg1;
+ (id)_iconImageNameForDeviceSubtypes:(id)arg1;
+ (id)_iconImageNameForDeviceComposition:(id)arg1;
+ (id)_currentDeviceRoutingIconImage;
+ (id)_iconNameForRoute:(id)arg1;
+ (id)_iconImageForRoute:(id)arg1;
+ (id)_iconImageForRoutes:(id)arg1;
+ (id)_iconImageForIdentifier:(id)arg1;
+ (id)_sharedSerialQueue;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool representsLongFormVideoContent; // @synthesize representsLongFormVideoContent=_representsLongFormVideoContent;
@property(copy, nonatomic) NSString *representedBundleID; // @synthesize representedBundleID=_representedBundleID;
@property(copy, nonatomic) NSString *presentedBundleID; // @synthesize presentedBundleID=_presentedBundleID;
@property(nonatomic) __weak id <MPAVOutputDevicePlaybackDataSource> playbackDataSource; // @synthesize playbackDataSource=_playbackDataSource;
@property(retain, nonatomic) MPAVRoute *legacyCachedRoute; // @synthesize legacyCachedRoute=_legacyCachedRoute;
@property(nonatomic) long long routeTypes; // @synthesize routeTypes=_routeTypes;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(nonatomic) _Bool fetchAvailableRoutesSynchronously; // @synthesize fetchAvailableRoutesSynchronously=_fetchAvailableRoutesSynchronously;
@property(nonatomic) long long discoveryMode; // @synthesize discoveryMode=_discoveryMode;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) MPAVRoutingDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <MPAVRoutingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_stateDumpObject;
- (_Bool)removePickedRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)removePickedRoute:(id)arg1;
- (_Bool)addPickedRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)addPickedRoute:(id)arg1;
@property(readonly, nonatomic) _Bool supportsMultipleSelection;
- (_Bool)_pickRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)pickRoute:(id)arg1 withPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)pickRoute:(id)arg1 withPassword:(id)arg2;
- (_Bool)pickRoute:(id)arg1;
- (void)_registerNotifications;
- (void)_volumeControlAvailabilityDidChangeNotification:(id)arg1;
- (void)_routeStatusDidChangeNotification:(id)arg1;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;
- (void)_mediaServerDiedNotification:(id)arg1;
- (void)_externalScreenTypeDidChangeNotification:(id)arg1;
- (void)_activeAudioRouteDidChangeNotification:(id)arg1;
- (long long)_volumeControlStateForPickedRoute;
- (void)_updateCachedRoutes;
- (void)_unregisterNotifications;
- (void)_setVolumeControlStateForPickedRoute:(long long)arg1;
- (void)_setExternalScreenType:(long long)arg1;
- (void)_sendDelegatePickedRoutesChanged;
- (void)_sendDelegateFailedToPickRouteWithError:(id)arg1;
- (void)_scheduleSendDelegateRoutesChanged;
- (void)_promptForHijackIfNeeded:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)_pickedRoutesInArray:(id)arg1;
- (id)_pickedRouteInArray:(id)arg1;
- (void)_onQueueSetExternalScreenType:(long long)arg1;
- (long long)_externalScreenType:(_Bool *)arg1;
- (_Bool)_deviceAvailabilityOverrideState;
- (void)_clearLegacyCachedRoute;
- (void)_syncUpdateRoutes;
- (void)unpickTVRoutes;
- (void)clearCachedRoutes;
- (_Bool)wirelessDisplayRoutesAvailable;
- (_Bool)wirelessDisplayRouteIsPicked;
- (id)videoRouteForRoute:(id)arg1;
- (void)unpickAirPlayScreenRouteWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)routeOtherThanHandsetAvailable;
- (_Bool)routeOtherThanHandsetAndSpeakerAvailable;
- (_Bool)receiverRouteIsPicked;
- (_Bool)speakerRouteIsPicked;
- (void)selectRoutes:(id)arg1 operation:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)selectRoute:(id)arg1 operation:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)pickSpeakerRoute;
- (_Bool)pickHandsetRoute;
- (_Bool)pickBestDeviceRoute;
- (_Bool)handsetRouteIsPicked;
- (void)getActiveRouteWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAvailableRoutesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchAvailableRoutesWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)updatePickedRoutes;
- (id)updateAvailableRoutes;
- (_Bool)airtunesRouteIsPicked;
@property(readonly, nonatomic) _Bool volumeControlIsAvailable;
- (_Bool)routeIsPendingPick:(id)arg1;
- (_Bool)routeIsLeaderOfEndpoint:(id)arg1;
@property(readonly, nonatomic) NSSet *pendingPickedRoutes;
@property(readonly, nonatomic) MPAVRoute *pendingPickedRoute;
@property(readonly, nonatomic) NSArray *pickedRoutes;
@property(readonly, nonatomic) MPAVRoute *pickedRoute;
@property(readonly, nonatomic) _Bool hasPendingPickedRoutes;
@property(readonly, nonatomic) long long externalScreenType;
@property(readonly, copy, nonatomic) NSArray *availableRoutes;
- (id)cachedPickedRoutes;
- (void)setCachedRoutes:(id)arg1;
- (id)cachedRoutes;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithDataSource:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
