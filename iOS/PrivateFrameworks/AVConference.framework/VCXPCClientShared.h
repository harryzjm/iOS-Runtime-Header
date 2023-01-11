//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCXPCClientShared
{
    NSMutableDictionary *_registeredUUIDServiceBlocks;
    NSObject<OS_dispatch_queue> *_registeredBlocksQueue;
}

@property(readonly, nonatomic) NSMutableDictionary *registeredUUIDServiceBlocks; // @synthesize registeredUUIDServiceBlocks=_registeredUUIDServiceBlocks;
- (void)deregisterWithUUID:(id)arg1 service:(char *)arg2;
- (void)registerBlockWithUUID:(id)arg1 service:(char *)arg2 block:(CDUnknownBlockType)arg3;
- (void)deregisterFromNotifications;
- (void)dealloc;
- (id)init;

@end

