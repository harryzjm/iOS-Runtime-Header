//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoAppMonitor/IDSServiceDelegate-Protocol.h>

@class IDSService, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface NanoAppSyncService : NSObject <IDSServiceDelegate>
{
    _Bool _nonWakingMessage;
    IDSService *_idsService;
    NSMutableDictionary *_outstandingRequests;
    NSObject<OS_dispatch_queue> *_queue;
}

@property _Bool nonWakingMessage; // @synthesize nonWakingMessage=_nonWakingMessage;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *outstandingRequests; // @synthesize outstandingRequests=_outstandingRequests;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
- (void).cxx_destruct;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;
- (void)sendRecentlyUsedApps:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_removeCompletionHandlerForOutstandingRequest:(id)arg1;
- (CDUnknownBlockType)_queue_getCompletionHandlerForOutstandingRequest:(id)arg1;
- (void)_queue_setCompletionHandler:(CDUnknownBlockType)arg1 forOutstandingRequst:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
