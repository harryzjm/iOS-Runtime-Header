//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAVRoutingController.h>

@class AVAudioSession, AVAudioSessionPortDescription, MPAVRoute, NSArray, NSString;

@interface RCAudioSessionRoutingMPAVRoutingController : MPAVRoutingController
{
    AVAudioSession *_audioSession;
    NSString *_audioSessionCategory;
    unsigned long long _audioSessionCategoryOptions;
    _Bool _hasCategoryEverBeenActive;
    AVAudioSessionPortDescription *_cachedPickedInputRoutePortDescription;
    MPAVRoute *_cachedPickedOutputRoute;
    NSArray *_cachedPickableOutputRoutes;
}

@property(readonly, nonatomic) _Bool hasCategoryEverBeenActive; // @synthesize hasCategoryEverBeenActive=_hasCategoryEverBeenActive;
@property(readonly, nonatomic) NSArray *cachedPickableOutputRoutes; // @synthesize cachedPickableOutputRoutes=_cachedPickableOutputRoutes;
@property(readonly, nonatomic) MPAVRoute *cachedPickedOutputRoute; // @synthesize cachedPickedOutputRoute=_cachedPickedOutputRoute;
@property(readonly, nonatomic) AVAudioSessionPortDescription *cachedPickedInputRoutePortDescription; // @synthesize cachedPickedInputRoutePortDescription=_cachedPickedInputRoutePortDescription;
- (void).cxx_destruct;
- (long long)_outputRouteFromAudioSession;
- (void)_updateHasCategoryEverBeenActive;
- (void)audioSessionRouteChangeNotification:(id)arg1;
- (void)audioSessionInterruptionNotification:(id)arg1;
- (_Bool)routeOtherThanHandsetAndSpeakerAvailable;
- (void)fetchAvailableRoutesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_rcDelegate;
- (void)setDelegate:(id)arg1;
- (long long)outputRouteTypeForNavigationIcon;
- (_Bool)makeAudioSessionCategoryActive:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isRoutingToPhoneCall;
@property(readonly, nonatomic) _Bool isRoutingToAirPlayMirrorDestination;
@property(readonly, nonatomic) _Bool isAudioSessionAppropriateForQueryingRoutes;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

