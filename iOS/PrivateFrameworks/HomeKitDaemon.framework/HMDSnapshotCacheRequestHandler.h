//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSnapshotCacheRequestHandler : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_snapshotCacheMap;
    NSString *_logIdentifier;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (_Bool)isSnapshotPresentForCharacteristicEventUUID:(id)arg1;
- (void)requestSnapshot:(id)arg1 streamingTierType:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)timerDidFire:(id)arg1;
- (void)setSnapshotFileToCache:(id)arg1 snapshotCharacteristicEventUUID:(id)arg2;
- (void)removeSnapshotFileToCache:(id)arg1 error:(id)arg2;
- (void)addSnapshotFileToCache:(id)arg1;
- (id)initWithWorkQueue:(id)arg1 logID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

