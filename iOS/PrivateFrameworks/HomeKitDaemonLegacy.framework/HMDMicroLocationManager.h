//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDLocation, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDMicroLocationManager : HMFObject
{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_lastRecordingScanTimes;
    NSMutableArray *_lastLocalizationScanTimes;
    HMDLocation *_locationManager;
    CDUnknownBlockType _dateFactory;
}

+ (id)logCategory;
- (void).cxx_destruct;
- (void)triggerThrottledMicroLocationLocalizationScanWithMetadata:(id)arg1 triggerType:(unsigned long long)arg2;
- (void)triggerThrottledMicroLocationRecordingScanWithMetadata:(id)arg1 triggerType:(unsigned long long)arg2;
- (id)initWithLocationManager:(id)arg1;
- (id)initWithLocationManager:(id)arg1 dateFactory:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

