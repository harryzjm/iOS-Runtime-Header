//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class CLLocation, GEOAutomobileOptions, GEOComposedWaypoint, MapsSuggestionsETARequirements, NSLock, NSMutableDictionary, NSString;
@protocol MapsSuggestionsNetworkRequester, MapsSuggestionsPredictor, OS_dispatch_queue;

@interface MapsSuggestionsETARequester : NSObject <MapsSuggestionsObject>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <MapsSuggestionsNetworkRequester> _networkRequester;
    id <MapsSuggestionsPredictor> _transportModePredictor;
    MapsSuggestionsETARequirements *_etaRequirements;
    CLLocation *_currentLocationUsed;
    GEOComposedWaypoint *_currentLocationWaypoint;
    NSMutableDictionary *_waypoints;
    NSLock *_waypointsLock;
    int _forcedTransportMode;
    int _mapType;
    GEOAutomobileOptions *_automobileOptions;
}

- (void).cxx_destruct;
@property int mapType; // @synthesize mapType=_mapType;
@property(retain) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
- (id)networkRequester;
- (void)forceTransportType:(int)arg1;
- (_Bool)transportTypeFromLocation:(id)arg1 toEntry:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSString *uniqueName;
- (_Bool)ETAsFromLocation:(id)arg1 toEntries:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithNetworkRequester:(id)arg1 transportModePredictor:(id)arg2 requirements:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
