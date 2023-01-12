//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAXpcConnection, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MAXpcManager : NSObject
{
    MAXpcConnection *_maConnection;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_progressQueue;
    NSString *_serviceName;
    NSMutableDictionary *_progressHandlers;
}

- (void).cxx_destruct;
- (id)initWithServiceName:(id)arg1 callbackQueue:(id)arg2;
- (void)attachProgressHandler:(id)arg1 assetId:(id)arg2 callBack:(CDUnknownBlockType)arg3 withPurpose:(id)arg4;
- (void)notifyClientsOfProgress:(id)arg1;
- (void)setClientConnectionHandler;
- (void)sendAsync:(id)arg1 clientHandler:(CDUnknownBlockType)arg2 taskDescriptor:(id)arg3 withRetry:(_Bool)arg4;
- (void)sendAsync:(id)arg1 clientHandler:(CDUnknownBlockType)arg2 taskDescriptor:(id)arg3;
- (id)sendSync:(id)arg1 gettingResponseCode:(long long *)arg2 codeForXpcError:(long long)arg3 loggingName:(id)arg4;
- (void)setClientName:(id)arg1;
- (void)ensureConnection;
- (void)clearConnection:(id)arg1;

@end

