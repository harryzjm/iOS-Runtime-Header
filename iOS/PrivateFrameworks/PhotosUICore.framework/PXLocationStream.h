//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, NSString;

@interface PXLocationStream : NSObject <CLLocationManagerDelegate>
{
    unsigned long long _state;
    double _accuracy;
    CDUnknownBlockType _handler;
    CLLocationManager *_locationManager;
}

- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)_cleanup;
- (void)_closeStreamWithError;
- (void)_emitLocation:(id)arg1;
- (void)_requestLocation;
- (void)_requestAuthorization;
- (void)_open;
@property(nonatomic, getter=isClosed) _Bool closed;
- (void)dealloc;
- (id)initWithAccuracy:(double)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
