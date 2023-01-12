//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AACCore/AELifecycleEventHandling-Protocol.h>

@class AEXPCProxy, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AELifecycleEventHandlingProxy : NSObject <AELifecycleEventHandling>
{
    NSXPCConnection *_connection;
    AEXPCProxy *_xpcProxy;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)proxyWithEndpoint:(id)arg1 queue:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)handleEventDidInvalidateWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleEventDidBeginWithCompletion:(CDUnknownBlockType)arg1;

@end
