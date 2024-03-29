//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface ICSession : NSObject
{
    struct os_unfair_lock_s _resourceLock;
    _Bool _openSession;
    _Bool _forwardPTPEvents;
    NSXPCConnection *_connection;
    NSMutableArray *_notifications;
    unsigned long long _objectHandle;
}

@property _Bool forwardPTPEvents; // @synthesize forwardPTPEvents=_forwardPTPEvents;
@property unsigned long long objectHandle; // @synthesize objectHandle=_objectHandle;
@property _Bool openSession; // @synthesize openSession=_openSession;
@property(readonly) NSMutableArray *notifications; // @synthesize notifications=_notifications;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)remNotifications:(id)arg1;
- (void)addNotifications:(id)arg1;
- (_Bool)interestedInNotification:(id)arg1;
- (void)dealloc;
@property(readonly) int pid; // @dynamic pid;
- (id)initWithConnection:(id)arg1;

@end

