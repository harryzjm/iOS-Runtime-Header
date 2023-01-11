//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsNetworkRequester-Protocol.h>

@class GEOComposedWaypoint, NSArray, NSError, NSMutableDictionary, NSString;

@interface MapsSuggestionsFakeNetworkRequester : NSObject <MapsSuggestionsNetworkRequester>
{
    struct Queue _queue;
    struct NSArray *_fakeMapItems;
    NSMutableDictionary *_fakeMapItemsPerPOICategory;
    GEOComposedWaypoint *_fakeWaypoint;
    NSArray *_fakeTraffic;
    NSError *_fakeError;
    unsigned long long _calledFwdGeoByPostalAddress;
    unsigned long long _calledFwdGeoByAddressString;
    unsigned long long _calledRevGeo;
    unsigned long long _calledMapItemHandle;
    unsigned long long _calledSearch;
    unsigned long long _calledSearchByPOICategory;
    unsigned long long _calledWaypointForMapItem;
    unsigned long long _calledWaypointForLocation;
    unsigned long long _calledWaypointForAddressString;
    unsigned long long _calledETAForWaypoint;
    _Bool _breakCallbackPromise;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)ETAsFromHereWaypoint:(id)arg1 destinationWaypoints:(struct NSArray *)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)composedWaypointForAddressString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)composedWaypointForLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)composedWaypointForMapItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)searchString:(id)arg1 ofPOICategory:(id)arg2 withinVenue:(id)arg3 maxResults:(unsigned int)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)searchString:(id)arg1 maxResults:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)resolveMapItemHandleData:(struct NSData *)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)reverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)forwardGeocodeAddressString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)forwardGeocodePostalAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reset;
- (unsigned long long)calledRequestETAForWaypoint;
- (unsigned long long)calledRequestWaypointForAddressString;
- (unsigned long long)calledRequestWaypointForLocation;
- (unsigned long long)calledRequestWaypointForMapItem;
- (unsigned long long)calledRequestSearchByPOICategory;
- (unsigned long long)calledRequestSearch;
- (unsigned long long)calledRequestMapItemHandle;
- (unsigned long long)calledRequestRevGeo;
- (unsigned long long)calledRequestFwdGeoByAddressString;
- (unsigned long long)calledRequestFwdGeoByPostalAddress;
- (void)configureBrokenCallBackPromise;
- (void)configureError:(id)arg1;
- (void)configureTraffic:(id)arg1;
- (void)configureWaypoint:(id)arg1;
- (void)configureMapItems:(struct NSArray *)arg1 forPOICategory:(id)arg2;
- (void)configureMapItems:(struct NSArray *)arg1;
@property(readonly, nonatomic) NSString *uniqueName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
