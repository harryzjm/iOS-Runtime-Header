//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, NSString;

@interface WFLocationAccessResource <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    CDUnknownBlockType _makeAvailableCompletionHandler;
}

+ (_Bool)isSystemResource;
@property(copy, nonatomic) CDUnknownBlockType makeAvailableCompletionHandler; // @synthesize makeAvailableCompletionHandler=_makeAvailableCompletionHandler;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)finishMakingAvailableWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)globalLevelStatus;
- (id)protectedResourceDescription;
- (id)icon;
- (id)name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
