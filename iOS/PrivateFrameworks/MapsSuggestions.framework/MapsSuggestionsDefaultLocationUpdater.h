//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/CLLocationManagerDelegate-Protocol.h>
#import <MapsSuggestions/MapsSuggestionsLocationUpdater-Protocol.h>

@class CLLocationManager, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsDefaultLocationUpdater <CLLocationManagerDelegate, MapsSuggestionsLocationUpdater>
{
    CLLocationManager *_locationManager;
    _Bool _running;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)stopImplementation;
- (void)startImplemention;
- (void)_startImplemention;
- (void)_deinitLocationManager;
- (void)_initLocationManagers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end
