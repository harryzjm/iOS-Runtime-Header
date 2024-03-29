//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object, WCMClientDelegate;

__attribute__((visibility("hidden")))
@interface VCWCMClient : NSObject
{
    NSObject<OS_xpc_object> *connection;
    NSObject<OS_dispatch_queue> *connectionQueue;
    NSObject<WCMClientDelegate> *wcmClientDelegate;
}

@property(retain, nonatomic) id <WCMClientDelegate> wcmClientDelegate; // @synthesize wcmClientDelegate;
@property(readonly) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue;
@property(readonly) NSObject<OS_xpc_object> *connection; // @synthesize connection;
- (void)stopWCMClient;
- (void)startWCMClient;
- (void)dealloc;
- (id)init;

@end

