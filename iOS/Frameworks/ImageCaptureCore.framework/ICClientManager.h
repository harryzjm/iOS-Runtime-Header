//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ICClientManager : NSObject
{
    _Bool _clientAdded;
    NSMutableArray *_clients;
    struct os_unfair_lock_s _clientsLock;
    id _delegate;
}

@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *clients; // @synthesize clients=_clients;
- (id)allClientConnections;
- (id)clientConnectionsMonitoringObjectID:(id)arg1;
- (id)clientConnectionsMonitoringNotification:(id)arg1;
- (void)setClientWithPID:(id)arg1 usingObjectHandle:(id)arg2;
- (void)setClientWithPID:(id)arg1 usingDevice:(_Bool)arg2;
- (int)clientUsingDevice;
- (unsigned long long)removeClientWithPID:(id)arg1;
- (void)remNotifications:(id)arg1 toClientWithPID:(id)arg2;
- (void)addNotifications:(id)arg1 toClientWithPID:(id)arg2;
- (void)sendMessage:(id)arg1 withConnection:(id)arg2;
- (void)sendMessage:(id)arg1 forClientWithPID:(id)arg2;
- (id)findClientWithPID:(id)arg1;
- (unsigned long long)currentClientCount;
- (id)copyClientsArray;
- (void)addClientWithConnection:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
