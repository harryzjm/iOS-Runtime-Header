//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMFObject.h"

@class HMFNetAddress, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue, _HMFCFHTTPServerConnectionDelegate;

__attribute__((visibility("hidden")))
@interface _HMFCFHTTPServerConnection : HMFObject
{
    id <_HMFCFHTTPServerConnectionDelegate> _delegate;
    HMFNetAddress *_address;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSMutableArray *_pendingRequests;
    NSMutableArray *_pendingRespones;
    struct _CFHTTPServerConnection *_internal;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct _CFHTTPServerConnection *internal; // @synthesize internal=_internal;
@property(readonly, nonatomic) NSMutableArray *pendingRespones; // @synthesize pendingRespones=_pendingRespones;
@property(readonly, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) HMFNetAddress *address; // @synthesize address=_address;
@property __weak id <_HMFCFHTTPServerConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;
- (void)_handleCompletedResponse:(struct _CFHTTPServerResponse *)arg1 error:(id)arg2;
- (void)sendResponse:(id)arg1;
- (void)_sendStatusCode:(long long)arg1 forRequest:(id)arg2 bodyData:(id)arg3;
- (void)_sendStatusCode:(long long)arg1 forRequest:(id)arg2;
- (void)handleRequest:(id)arg1 bodyReadStream:(struct __CFReadStream *)arg2 eventType:(unsigned long long)arg3;
- (void)_stopReadBody:(id)arg1;
- (void)_handleCompletedReceivedRequest:(id)arg1 error:(id)arg2;
- (void)_handleReceivedRequestRef:(struct _CFHTTPServerRequest *)arg1;
- (void)close;
- (_Bool)open;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)invalidate;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithConnectionRef:(struct _CFHTTPServerConnection *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

