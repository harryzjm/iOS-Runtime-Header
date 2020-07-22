//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoPassKit/CLLocationManagerDelegate-Protocol.h>

@class CLInUseAssertion, CLLocationManager, NSString;
@protocol OS_dispatch_source;

@interface NPKOneShotLocationFetcher : NSObject <CLLocationManagerDelegate>
{
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_source> *_locationFixTimeout;
    CLLocationManager *_locationManager;
    CLInUseAssertion *_inUseAssertion;
}

@property(retain, nonatomic) CLInUseAssertion *inUseAssertion; // @synthesize inUseAssertion=_inUseAssertion;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *locationFixTimeout; // @synthesize locationFixTimeout=_locationFixTimeout;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)_finishLocationFixWithLocation:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)fetchLocationWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

