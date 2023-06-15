//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDPowerLogObserverContext, NSString;

__attribute__((visibility("hidden")))
@interface HMDPowerLogObserver : HMFObject
{
    HMDPowerLogObserverContext *_context;
}

+ (id)supportedEventClasses;
- (void).cxx_destruct;
@property(retain, nonatomic) HMDPowerLogObserverContext *context; // @synthesize context=_context;
- (void)stop;
- (void)start;
- (void)_handleHH2CloudKitOperationEvent:(id)arg1;
- (void)_reportCameraSettingsConfiguration:(id)arg1;
- (void)_reportConfiguration:(id)arg1;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithLogEventDispatcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

