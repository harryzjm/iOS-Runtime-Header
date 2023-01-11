//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceMemos/CLLocationManagerDelegate-Protocol.h>

@class CLGeocoder, CLLocation, CLLocationManager, NSArray, NSString;
@protocol OS_dispatch_queue, RCLocationsOfInterestDelegate;

@interface RCLocationsOfInterestManager : NSObject <CLLocationManagerDelegate>
{
    int _authorizationStatus;
    CLLocationManager *_locationManager;
    CLLocation *_currentLocation;
    CLGeocoder *_geographyCoder;
    NSArray *_locationsOfInterest;
    NSArray *_placesOfInterest;
    _Bool _ignoringLocationUpdates;
    id <RCLocationsOfInterestDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    double _searchRadius;
}

+ (id)defaultManager;
@property(readonly) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(nonatomic) double searchRadius; // @synthesize searchRadius=_searchRadius;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <RCLocationsOfInterestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)stop;
@property(readonly, nonatomic) _Bool authorized;
@property(readonly, nonatomic) _Bool active;
@property(readonly, copy) NSArray *locationsOfInterest;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

