//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCAudioClientManager : NSObject
{
    NSMutableDictionary *_clientList;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}

+ (id)sharedInstance;
- (void)unregisterBlocksForService;
- (void)registerBlocksForService;
- (void)dealloc;
- (id)init;

@end

