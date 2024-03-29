//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsSuggestionsFwdGeocodingRelevanceScoreProvider, MapsSuggestionsPortrait, MapsSuggestionsPortraitRelevanceScoreProvider, MapsSuggestionsRelevanceScorer, MapsSuggestionsRoutineRelevanceScoreProvider, NSString, NSXPCConnection;
@protocol MapsSuggestionsInsightsUpdates, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface MapsSuggestionsRealInsights : NSObject
{
    struct Queue _queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_closeTimer;
    MapsSuggestionsFwdGeocodingRelevanceScoreProvider *_fwdGeoCodingRoutineScoreProvider;
    MapsSuggestionsRoutineRelevanceScoreProvider *_routineScoreProvider;
    MapsSuggestionsPortraitRelevanceScoreProvider *_portraitScoreProvider;
    MapsSuggestionsPortrait *_portrait;
    MapsSuggestionsRelevanceScorer *_relevanceScorer;
    id <MapsSuggestionsInsightsUpdates> _insightUpdatesDelegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MapsSuggestionsInsightsUpdates> insightUpdatesDelegate; // @synthesize insightUpdatesDelegate=_insightUpdatesDelegate;
@property(readonly, nonatomic) NSString *uniqueName;
- (void)signalPackUpdated:(id)arg1;
- (BOOL)futureTripsWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)currentTripWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)userIsCurrentlyInATrip;
- (_Bool)userHasAnUpcomingTrip;
- (id)signalPackForHere;
- (id)signalPackForDestinationEntry:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2;
- (id)signalPackForDestinationMapItem:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2;
- (BOOL)signalPackForHereWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)signalPackForDestinationEntry:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)signalPackForDestinationMapItem:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2 handler:(CDUnknownBlockType)arg3;
- (void)preload;
- (_Bool)userHasATransitCard;
- (_Bool)userHasAPaymentCard;
- (_Bool)userHasAnExpressPaymentCard;
- (_Bool)isTransitUser;
- (_Bool)isTransitUserHere;
- (double)isTouristHere;
- (id)confidenceScoresForContacts:(id)arg1 addresses:(id)arg2;
- (id)confidenceScoresForMapItems:(id)arg1;
- (void)dealloc;
- (id)initFromResourceDepot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

