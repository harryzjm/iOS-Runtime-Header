//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, HMFMessageDispatcher, NSDate, NSNotificationCenter, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomeActivityStateManagerDataSource : HMFObject
{
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property(readonly, nonatomic) HMFMessageDispatcher *messageDispatcher;
@property(readonly, nonatomic) _Bool isCurrentDeviceConfirmedPrimaryResident;
@property(readonly, nonatomic) NSDate *currentDate;
@property(readonly, nonatomic) _Bool hasFinishedLoadingHomeData;
@property(readonly, nonatomic) _Bool isResidentCapable;
@property(readonly, nonatomic) _Bool isEligibleForFMFDesignation;
@property(readonly, nonatomic) _Bool isDesignatedFMFDevice;
- (void)configureWithHome:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

