//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class GEOMapItemStorage, MapsSuggestionsEntry, MapsSuggestionsSignalPack, NSArray;
@protocol MapsSuggestionsInsightsUpdates, MapsSuggestionsResourceDepot;

@protocol MapsSuggestionsInsights <MapsSuggestionsObject>
+ (id)new;
@property(nonatomic) __weak id <MapsSuggestionsInsightsUpdates> insightUpdatesDelegate;
- (MapsSuggestionsSignalPack *)signalPackForHere;
- (MapsSuggestionsSignalPack *)signalPackForDestinationEntry:(MapsSuggestionsEntry *)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2;
- (MapsSuggestionsSignalPack *)signalPackForDestinationMapItem:(GEOMapItemStorage *)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2;
- (BOOL)signalPackForHereWithHandler:(void (^)(MapsSuggestionsSignalPack *, NSError *))arg1;
- (BOOL)signalPackForDestinationEntry:(MapsSuggestionsEntry *)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2 handler:(void (^)(MapsSuggestionsSignalPack *, NSError *))arg3;
- (BOOL)signalPackForDestinationMapItem:(GEOMapItemStorage *)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2 handler:(void (^)(MapsSuggestionsSignalPack *, NSError *))arg3;
- (void)preload;
- (NSArray *)confidenceScoresForContacts:(NSArray *)arg1 addresses:(NSArray *)arg2;
- (NSArray *)confidenceScoresForMapItems:(NSArray *)arg1;
- (BOOL)currentTripWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (BOOL)futureTripsWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (_Bool)userIsCurrentlyInATrip;
- (_Bool)userHasAnUpcomingTrip;
- (_Bool)userHasATransitCard;
- (_Bool)userHasAPaymentCard;
- (_Bool)userHasAnExpressPaymentCard;
- (_Bool)isTransitUser;
- (_Bool)isTransitUserHere;
- (double)isTouristHere;
- (id)initFromResourceDepot:(id <MapsSuggestionsResourceDepot>)arg1;
- (id)init;
@end

