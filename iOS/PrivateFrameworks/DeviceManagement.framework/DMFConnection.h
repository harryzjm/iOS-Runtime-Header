//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DeviceManagement/CATTaskClientDelegate-Protocol.h>
#import <DeviceManagement/DMFTransportProvider-Protocol.h>

@class CATOperationQueue, CATTaskClient, NSString;
@protocol DMFTransportProvider;

@interface DMFConnection : NSObject <CATTaskClientDelegate, DMFTransportProvider>
{
    _Bool _isConnected;
    id <DMFTransportProvider> _transportProvider;
    CATTaskClient *_taskClient;
    CATOperationQueue *_operationQueue;
}

+ (id)watchOSRequestClasses;
+ (id)tvOSRequestClasses;
+ (id)macOSRequestClasses;
+ (id)iOSRequestClasses;
+ (id)currentPlatformRequestClasses;
+ (id)sharedConnection;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(retain, nonatomic) CATOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) CATTaskClient *taskClient; // @synthesize taskClient=_taskClient;
@property(nonatomic) __weak id <DMFTransportProvider> transportProvider; // @synthesize transportProvider=_transportProvider;
- (void).cxx_destruct;
- (void)_operationDidFinish:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)client:(id)arg1 didInterruptWithError:(id)arg2;
- (void)clientDidInvalidate:(id)arg1;
- (void)clientDidDisconnect:(id)arg1;
- (void)clientDidConnect:(id)arg1;
- (id)makeNewTransport;
- (void)invalidate;
- (id)progressForAllInflightRequests;
- (id)prepareOperationForRequest:(id)arg1;
- (void)performRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithTransportProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
