//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEONavigationServerRequestStateXPCInterface-Protocol.h>

@class GEONavigationServer, NSString;

__attribute__((visibility("hidden")))
@interface GEONavigationServerPeer <GEONavigationServerRequestStateXPCInterface>
{
    GEONavigationServer *_delegate;
}

@property(nonatomic) __weak GEONavigationServer *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)requestUpdates;
- (void)requestNavigationVoiceVolume;
- (void)requestTrafficIncidentDetailsData;
- (void)requestPositionFromDestination;
- (void)requestPositionFromManeuver;
- (void)requestPositionFromSign;
- (void)requestRideSelections;
- (void)requestStepNameInfo;
- (void)requestStepIndex;
- (void)requestActiveRouteDetailsData;
- (void)requestGuidanceState;
- (void)requestTransitSummary;
- (void)requestRouteSummary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

