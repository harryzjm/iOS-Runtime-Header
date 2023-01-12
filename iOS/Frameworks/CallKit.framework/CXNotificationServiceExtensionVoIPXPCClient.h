//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface CXNotificationServiceExtensionVoIPXPCClient : NSObject
{
    struct os_unfair_lock_s _accessorLock;
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct os_unfair_lock_s accessorLock; // @synthesize accessorLock=_accessorLock;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)requestApplicationLaunchForIncomingCall:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)requestDidArriveFromExtensionPoint;
- (_Bool)taskHasEntitlement:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end
