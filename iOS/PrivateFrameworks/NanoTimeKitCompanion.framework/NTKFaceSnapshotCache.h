//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NTKFaceSnapshotCache : NSObject
{
    NSMutableDictionary *_snapshots;
    NSMapTable *_callbacks;
    NSMapTable *_callCount;
    NSObject<OS_dispatch_queue> *_snapshotQueue;
}

+ (id)snapshotCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *snapshotQueue; // @synthesize snapshotQueue=_snapshotQueue;
@property(readonly, nonatomic) NSMapTable *callCount; // @synthesize callCount=_callCount;
@property(readonly, nonatomic) NSMapTable *callbacks; // @synthesize callbacks=_callbacks;
@property(readonly, nonatomic) NSMutableDictionary *snapshots; // @synthesize snapshots=_snapshots;
- (void).cxx_destruct;
- (void)_invokeCallbacksOfFace:(id)arg1 withSnapshot:(id)arg2;
- (void)_snapshotProcessInterrupted:(id)arg1;
- (void)_attemptSnapshotOfFace:(id)arg1;
- (void)fetchSnapshotOfFace:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)cachedSnapshotOfFace:(id)arg1;
- (void)dealloc;
- (id)init;

@end
