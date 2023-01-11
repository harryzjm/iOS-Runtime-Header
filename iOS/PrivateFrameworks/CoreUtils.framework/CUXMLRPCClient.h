//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreUtils/NSURLSessionDelegate-Protocol.h>

@class NSMutableDictionary, NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface CUXMLRPCClient : NSObject <NSURLSessionDelegate>
{
    NSMutableDictionary *_tasks;
    struct LogCategory *_ucat;
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
}

@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)_handleResponse:(id)arg1 data:(id)arg2 error:(id)arg3 identifier:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)_requestURL:(id)arg1 methodName:(id)arg2 params:(id)arg3 httpHeaders:(id)arg4 identifier:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)requestURL:(id)arg1 methodName:(id)arg2 params:(id)arg3 httpHeaders:(id)arg4 identifier:(id *)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

