//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLGeocoder, CLInUseAssertion, CLLocation, CLPlacemark, NSMutableArray;

@interface NTKGeocoderManager : NSObject
{
    CLGeocoder *_geocoder;
    CLLocation *_cachedLocation;
    CLPlacemark *_cachedPlacemark;
    CLInUseAssertion *_locationInUseAssertion;
    NSMutableArray *_handlers;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_handlePlacemarks:(id)arg1 fromLocation:(id)arg2 error:(id)arg3;
- (void)placemarkForLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)cachedPlacemarkForLocation:(id)arg1;
- (id)init;

@end
