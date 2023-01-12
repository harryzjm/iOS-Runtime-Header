//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol ICSessionManagerProtocol;

__attribute__((visibility("hidden")))
@interface ICSessionManager : NSObject
{
    _Bool _sessionConnectionAdded;
    NSMutableArray *_sessions;
    struct os_unfair_lock_s _sessionsLock;
    id _delegate;
    unsigned long long _sessionCount;
}

@property(nonatomic) id <ICSessionManagerProtocol> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long sessionCount; // @synthesize sessionCount=_sessionCount;
@property(readonly, nonatomic) NSArray *connections;
- (id)connectionsMonitoringObjectID:(id)arg1;
- (id)connectionsMonitoringNotification:(id)arg1;
- (void)removeAllSessions;
- (unsigned long long)removeSessionsWithProcessIdentifier:(id)arg1;
- (unsigned long long)removeSessionWithConnection:(id)arg1;
- (void)remNotifications:(id)arg1 fromSessionWithConnection:(id)arg2;
- (void)addNotifications:(id)arg1 toSessionWithConnection:(id)arg2;
- (id)sessionWithConnection:(id)arg1;
- (unsigned long long)currentSessionCount;
@property(readonly, nonatomic) NSArray *sessions;
- (_Bool)createSessionWithConnection:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

