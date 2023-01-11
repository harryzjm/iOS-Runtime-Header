//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnection;
@protocol OS_dispatch_queue;

@interface FBSOpenApplicationService : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BSServiceConnection *_connection;
}

+ (_Bool)currentProcessServicesDefaultShellEndpoint;
+ (id)serviceWithDefaultShellEndpoint;
+ (id)serviceWithEndpoint:(id)arg1;
+ (id)serviceName;
+ (id)new;
- (void).cxx_destruct;
- (void)_openApplication:(id)arg1 withOptions:(id)arg2 clientHandle:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_remoteTarget;
- (void)openApplication:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)canOpenApplication:(id)arg1 reason:(long long *)arg2;
- (void)openApplication:(id)arg1 withOptions:(id)arg2 clientHandle:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)_initWithEndpoint:(id)arg1;
- (id)init;

@end
