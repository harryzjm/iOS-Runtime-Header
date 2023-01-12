//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMapTable, NSMutableDictionary, VNRPNTrackerEspressoResourcesCache;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VNTrackerManager : NSObject
{
    NSDictionary *_trackerTypeToClassDictionary;
    NSMapTable *_trackerClassToNameMapTable;
    NSMutableDictionary *_liveTrackerCounter;
    NSObject<OS_dispatch_queue> *_trackingProcessingQueue;
    NSObject<OS_dispatch_queue> *_trackersCollectionManagementQueue;
    NSDictionary *_liveTrackerCounterLimit;
    NSMutableDictionary *_trackers;
    VNRPNTrackerEspressoResourcesCache *_trackerResourceCache;
}

- (void).cxx_destruct;
- (void)_releaseTracker_NO_LOCK_DO_NOT_EXECUTE_DIRECTLY:(id)arg1;
- (id)_createTracker:(id)arg1 type:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)_getTracker:(id)arg1;
- (long long)_maximumTrackersOfType:(id)arg1;
- (id)init;

@end

