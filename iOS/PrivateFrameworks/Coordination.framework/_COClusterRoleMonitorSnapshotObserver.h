//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _COClusterRoleMonitorSnapshotObserver : NSObject
{
    NSString *_cluster;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _block;
    NSSet *_lastValue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *lastValue; // @synthesize lastValue=_lastValue;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSString *cluster; // @synthesize cluster=_cluster;
- (void)notify:(id)arg1;
- (id)description;
- (id)initInCluster:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;

@end

