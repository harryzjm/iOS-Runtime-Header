//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDMicroLocationManager, NSString;
@protocol HMDMicroLocationLogEventObserverDataSource;

__attribute__((visibility("hidden")))
@interface HMDMicroLocationLogEventObserver : HMFObject
{
    HMDMicroLocationManager *_microLocationManager;
    id <HMDMicroLocationLogEventObserverDataSource> _dataSource;
}

+ (id)logCategory;
- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (id)initWithDataSource:(id)arg1 microLocationManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

