//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface MGServiceClientSet : NSObject
{
    struct os_unfair_lock_s _lock;
    NSMapTable *_clients;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSMapTable *clients; // @synthesize clients=_clients;
- (void)enumerateClientsUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeClientService:(id)arg1;
- (void)addClientService:(id)arg1;
- (id)serviceClientForXPCConnection:(id)arg1;
- (id)init;

@end

