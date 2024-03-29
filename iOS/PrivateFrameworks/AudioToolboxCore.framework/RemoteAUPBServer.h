//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol AUPBServing;

__attribute__((visibility("hidden")))
@interface RemoteAUPBServer : NSObject
{
    NSXPCConnection *xpcConnection;
    id <AUPBServing> proxyInterface;
    struct OpaqueAUPBServer *ref;
    struct vector<NSObject<OS_dispatch_semaphore>*, std::allocator<NSObject<OS_dispatch_semaphore>*>> replySemas;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct OpaqueAUPBServer *ref; // @synthesize ref;
@property(retain, nonatomic) id <AUPBServing> proxyInterface; // @synthesize proxyInterface;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection;
- (void)signalAllSemaphores;
- (void)removeSema:(id)arg1;
- (void)addSema:(id)arg1;
- (id)description;
- (void)dealloc;

@end

