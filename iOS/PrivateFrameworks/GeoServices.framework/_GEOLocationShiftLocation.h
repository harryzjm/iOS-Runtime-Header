//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEOLatLng;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOLocationShiftLocation : NSObject
{
    GEOLatLng *_latLng;
    GEOApplicationAuditToken *_auditToken;
    double _accuracy;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _mustGoToNetworkCallback;
    CDUnknownBlockType _functionHandler;
    struct __CFRunLoop *_runLoop;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    _Bool _recordCacheInfo;
}

@property(readonly, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(readonly, nonatomic) GEOLatLng *latLng; // @synthesize latLng=_latLng;
- (void).cxx_destruct;
- (void)performMustGoToNetwork;
- (void)performErrorHandler:(id)arg1;
- (void)performCompletionHandlerWithShiftedCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double)arg2 function:(id)arg3 wasFunctionCached:(_Bool)arg4;
- (void)_performOnCallbackQueue:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithLatLng:(id)arg1 auditToken:(id)arg2 functionHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;
- (id)initWithLatLng:(id)arg1 accuracy:(double)arg2 completionHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4 mustGoToNetworkCallback:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;
- (id)initWithLatLng:(id)arg1 accuracy:(double)arg2 completionHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4 mustGoToNetworkCallback:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6 auditToken:(id)arg7;
- (id)initWithLatLng:(id)arg1 accuracy:(double)arg2 completionHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4 mustGoToNetworkCallback:(CDUnknownBlockType)arg5 callbackRunLoop:(struct __CFRunLoop *)arg6;
- (id)_initWithLatLng:(id)arg1 accuracy:(double)arg2 completionHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4 mustGoToNetworkCallback:(CDUnknownBlockType)arg5;

@end

