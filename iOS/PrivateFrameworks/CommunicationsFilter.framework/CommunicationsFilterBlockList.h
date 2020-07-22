//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CommunicationsFilterBlockListCache, NSMutableArray;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CommunicationsFilterBlockList : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    int _retries;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_recentObjectsTested;
    CommunicationsFilterBlockListCache *_cache;
}

+ (id)sharedInstance;
- (_Bool)_connect;
- (_Bool)_disconnect;
- (void)_disconnected;
- (void)_sendXPCRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_sendSynchronousXPCRequest:(id)arg1;
- (_Bool)isItemInList:(id)arg1;
- (id)copyAllItems;
- (void)removeItemForAllServices:(id)arg1;
- (void)addItemForAllServices:(id)arg1;
- (void)dealloc;
- (id)init;

@end

